/*
 * DSP56300 emulator
 *
 * Copyright (c) 2015 espes
 * Copyright (c) 2020-2025 Matt Borgerson
 *
 * Adapted from Hatari DSP M56001 emulation
 * (C) 2003-2008 ARAnyM developer team
 * Adaption to Hatari (C) 2008 by Thomas Huth
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* Immutable arithmetic oracle, upstream commit 36334d95b86f9c3c6ae34efb9af06785273f8e1a. */
static void reference_dsp_mul56(uint32_t source1, uint32_t source2, uint32_t *dest, uint8_t signe)
{
    uint32_t part[4], zerodest[3], value;

    /* Multiply: D = S1*S2 */
    if (source1 & (1<<23)) {
        signe ^= 1;
        source1 = (1<<24) - source1;
    }
    if (source2 & (1<<23)) {
        signe ^= 1;
        source2 = (1<<24) - source2;
    }

    /* bits 0-11 * bits 0-11 */
    part[0]=(source1 & BITMASK(12))*(source2 & BITMASK(12));
    /* bits 12-23 * bits 0-11 */
    part[1]=((source1>>12) & BITMASK(12))*(source2 & BITMASK(12));
    /* bits 0-11 * bits 12-23 */
    part[2]=(source1 & BITMASK(12))*((source2>>12)  & BITMASK(12));
    /* bits 12-23 * bits 12-23 */
    part[3]=((source1>>12) & BITMASK(12))*((source2>>12) & BITMASK(12));

    /* Calc dest 2 */
    dest[2] = part[0];
    dest[2] += (part[1] & BITMASK(12)) << 12;
    dest[2] += (part[2] & BITMASK(12)) << 12;

    /* Calc dest 1 */
    dest[1] = (part[1]>>12) & BITMASK(12);
    dest[1] += (part[2]>>12) & BITMASK(12);
    dest[1] += part[3];

    /* Calc dest 0 */
    dest[0] = 0;

    /* Add carries */
    value = (dest[2]>>24) & BITMASK(8);
    if (value) {
        dest[1] += value;
        dest[2] &= BITMASK(24);
    }
    value = (dest[1]>>24) & BITMASK(8);
    if (value) {
        dest[0] += value;
        dest[1] &= BITMASK(24);
    }

    /* Get rid of extra sign bit */
    dsp_asl56(dest, 1);

    if (signe) {
        zerodest[0] = zerodest[1] = zerodest[2] = 0;

        dsp_sub56(dest, zerodest);

        dest[0] = zerodest[0];
        dest[1] = zerodest[1];
        dest[2] = zerodest[2];
    }
}

