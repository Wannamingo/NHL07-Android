#include "native_text_hooks.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned checks;
#define CHECK(expression) do { ++checks; if (!(expression)) { \
    fprintf(stderr,"Failed check %u at line %d: %s\n",checks,__LINE__,#expression); \
    abort(); \
} } while (0)

int main(void) {
    /* Exact names and observed legacy bytes from the arena intro. */
    static const char home[]="\xd0\xa3\xd1\x80\xd0\xb0\xd0\xb3\xd0\xb0\xd0\xbd\xd1\x8b \xd0\x9a\xd0\xb0\xd1\x80\xd0\xbe\xd0\xbb\xd0\xb8\xd0\xbd\xd1\x8b\xc2\xae";
    static const char away[]="\xd0\xad\xd0\xb4\xd0\xbc\xd0\xbe\xd0\xbd\xd1\x82\xd0\xbe\xd0\xbd \xd0\x9e\xd0\xb9\xd0\xbb\xd0\xb5\xd1\x80\xd0\xb7\xc2\xae";
    static const uint8_t home_legacy[32]="#@030=K \x1a" "0@>;8=K\xae";
    static const uint8_t away_legacy[32]="-4<>=B>= \x1e" "9;5@7\xae";
    Nhl07TeamTextCapture capture;
    Nhl07TeamTextState state={0};
    uint8_t field[32],unchanged[32];
    char output[4096],sentinel[4096],long_source[4097];
    size_t size;

    CHECK(nhl07_team_text_capture_utf8(&capture,home,sizeof(home)));
    CHECK(nhl07_team_text_capture_legacy(&capture,home_legacy,sizeof(home_legacy)));
    memcpy(field,home_legacy,32);memcpy(unchanged,field,32);
    CHECK(nhl07_team_text_publish(&state,0,&capture,field));
    CHECK(!memcmp(field,unchanged,32));
    memset(output,0x5a,sizeof(output));
    size=nhl07_team_text_render(&state,0,field,output,NHL07_APT_TEXT_SCRATCH_BYTES);
    CHECK(size==strlen(home));CHECK(!strcmp(output,home));CHECK((unsigned char)output[size+1]==0x5a);
    CHECK(!memcmp(field,unchanged,32));

    CHECK(nhl07_team_text_capture_utf8(&capture,away,sizeof(away)));
    CHECK(nhl07_team_text_capture_legacy(&capture,away_legacy,sizeof(away_legacy)));
    CHECK(nhl07_team_text_publish(&state,1,&capture,away_legacy));
    CHECK(nhl07_team_text_render(&state,1,away_legacy,output,sizeof(output))==strlen(away));
    CHECK(!strcmp(output,away));
    CHECK(nhl07_team_text_render(&state,0,home_legacy,output,sizeof(output))==strlen(home));
    CHECK(!strcmp(output,home));
    CHECK(!nhl07_team_text_render(&state,0,away_legacy,output,sizeof(output)));
    CHECK(!nhl07_team_text_render(&state,2,home_legacy,output,sizeof(output)));
    CHECK(!nhl07_team_text_render(&state,0,home_legacy,NULL,sizeof(output)));

    /* Do not emit stale metadata after mutation, same-address reuse or an
       unrelated producer. Failed publish also clears the preceding team. */
    memcpy(field,home_legacy,32);field[3]='X';
    memset(output,0x5a,sizeof(output));memcpy(sentinel,output,sizeof(output));
    CHECK(!nhl07_team_text_render(&state,0,field,output,sizeof(output)));
    CHECK(!memcmp(output,sentinel,sizeof(output)));
    CHECK(!nhl07_team_text_publish(&state,0,&capture,field));
    CHECK(!nhl07_team_text_render(&state,0,home_legacy,output,sizeof(output)));
    CHECK(!nhl07_team_text_publish(&state,2,&capture,away_legacy));

    /* A too-small destination is untouched, including the NUL boundary. */
    CHECK(nhl07_team_text_publish(&state,1,&capture,away_legacy));
    CHECK(!nhl07_team_text_render(&state,1,away_legacy,output,strlen(away)));
    CHECK(!memcmp(output,sentinel,sizeof(output)));
    CHECK(nhl07_team_text_render(&state,1,away_legacy,output,strlen(away)+1)==strlen(away));
    CHECK(!strcmp(output,away));

    /* Original strncpy(...,32) pads short input, truncates to31 and then
       forcibly terminates. Retained Unicode is independent of that limit. */
    memset(field,'Q',32);
    CHECK(nhl07_team_text_capture_utf8(&capture,home,sizeof(home)));
    CHECK(nhl07_team_text_capture_legacy(&capture,field,sizeof(field)));
    CHECK(capture.legacy[31]==0);field[31]=0;
    CHECK(nhl07_team_text_publish(&state,0,&capture,field));
    CHECK(nhl07_team_text_render(&state,0,field,output,sizeof(output))==strlen(home));
    CHECK(!strcmp(output,home));
    CHECK(!nhl07_team_text_capture_legacy(&capture,field,30));
    CHECK(!nhl07_team_text_publish(&state,0,&capture,field));
    CHECK(!nhl07_team_text_render(&state,0,field,output,sizeof(output)));

    CHECK(nhl07_team_text_capture_utf8(&capture,"English^name",13));
    memset(field,0,32);memcpy(field,"English^name",12);
    CHECK(nhl07_team_text_capture_legacy(&capture,field,32));
    CHECK(nhl07_team_text_publish(&state,0,&capture,field));
    CHECK(nhl07_team_text_render(&state,0,field,output,sizeof(output))==12);
    CHECK(!strcmp(output,"English\nname"));

    CHECK(!nhl07_team_text_capture_utf8(&capture,NULL,4096));
    CHECK(!nhl07_team_text_capture_utf8(&capture,"",1));
    CHECK(!nhl07_team_text_capture_utf8(&capture,"abcd",4));
    CHECK(!nhl07_team_text_capture_utf8(&capture,"\xd0",2));
    CHECK(!nhl07_team_text_capture_utf8(&capture,"\xc0\xaf",3));
    CHECK(!nhl07_team_text_capture_utf8(&capture,"\xed\xa0\x80",4));
    CHECK(!nhl07_team_text_capture_utf8(&capture,"\xf4\x90\x80\x80",5));
    CHECK(!nhl07_team_text_capture_utf8(&capture,"\x80",2));
    CHECK(!nhl07_team_text_capture_utf8(&capture,"\xe2\x28\xa1",4));
    CHECK(nhl07_team_text_capture_utf8(&capture,"\xf0\x9f\x8f\x92",5));
    memset(long_source,'a',sizeof(long_source));long_source[4096]=0;
    CHECK(!nhl07_team_text_capture_utf8(&capture,long_source,sizeof(long_source)));
    long_source[4095]=0;
    CHECK(nhl07_team_text_capture_utf8(&capture,long_source,sizeof(long_source)));
    CHECK(capture.utf8_bytes==4095);
    CHECK(!nhl07_team_text_capture_legacy(&capture,NULL,32));
    CHECK(!nhl07_team_text_publish(&state,1,&capture,away_legacy));

    printf("NHL07 team text state checks=%u failed=0\n",checks);
    return 0;
}
