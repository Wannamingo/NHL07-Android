/* Read-only mod layers reached only through the game's disc path mapper. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/stat.h>
#include <limits.h>
#include <stdint.h>
extern int (*g_xbox_asset_path_override)(const char *,char *,uint32_t);
static int overlay(const char *relative,char *output,uint32_t capacity){
    if(!relative||!output||!capacity)return 0;
    char normalized[256];size_t n=strlen(relative);if(n>=sizeof(normalized))return 0;
    for(size_t i=0;i<=n;i++)normalized[i]=relative[i]=='\\'?'/':relative[i];
    const char *p=normalized;while(*p=='/')p++;
    const char *directory=NULL;
    const char *suffix=NULL;
    if(!strcasecmp(p,"db/db.viv")){directory=getenv("NHL07_ROSTER_DIR");suffix="db/db.viv";}
    static const char *language_paths[]={"fe/local.viv","fe/gamefont.xfn","fe/popupfnt.xfn","fe/subtitle.xfn","preload/fmisc.viv","preload/fboot.viv","preload/gloadscr.viv","fe/comapt.viv","fe/gameapt.viv","preload/fapt.viv","preload/gmisc.viv"};
    for(size_t i=0;i<sizeof(language_paths)/sizeof(language_paths[0]);i++)if(!strcasecmp(p,language_paths[i])){directory=getenv("NHL07_LANGUAGE_DIR");suffix=language_paths[i];break;}
    if(!strcasecmp(p,"preload/fapt.viv")&&(!directory||!*directory))directory=getenv("NHL07_ROSTER_DIR");
    if(!directory||!*directory)return 0;
    char candidate[PATH_MAX];int length=snprintf(candidate,sizeof(candidate),"%s/%s",directory,suffix);
    struct stat st;if(length<0||(unsigned)length>=sizeof(candidate)||(unsigned)length>=capacity||stat(candidate,&st)||!S_ISREG(st.st_mode))return 0;
    memcpy(output,candidate,(size_t)length+1);fprintf(stderr,"[NHL07-ASSET-OVERLAY] %s -> %s\n",p,candidate);return 1;
}
void nhl07_overlays_initialize(void){g_xbox_asset_path_override=overlay;}
