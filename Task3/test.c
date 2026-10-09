#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "concateStr.h"

void test_concate() {
    
    char pref1[6] = "Hel";
    char suff1[] = "lo";
    assert(strcmp(concate(pref1, suff1), "Hello") == 0);
    
    char pref2[6] = "oooo";
    char suff2[] = "a";
    assert(strcmp(concate(pref2, suff2), "ooooa") == 0);
    
    char pref3[3] = "d";
    char suff3[] = "b";
    assert(strcmp(concate(pref3, suff3), "db") == 0);
}

int main() {
    test_concate();

    printf("all tests complite!");

    return 0;
}