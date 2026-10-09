#include <string.h>

#include "concateStr.h"

char* concate(char *pref, char *suff) {
    
    int prefLen = strlen(pref);
    int sufflen = strlen(suff);
    
    for (int i = 0; i < sufflen; i++) {
        pref[prefLen+i] = suff[i];
    }
    pref[prefLen + sufflen] = '\0';

    return pref;
}
