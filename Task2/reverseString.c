#include "reverseString.h"

#define N 100

void reverse(char *start, int len) {
    
    char str[N];

    for (int i = 0; i < len; i++) {
        str[i] = *(start + len - i - 1);
    }

    for (int i = 0; i < len; i++) {
        *(start+i) = str[i]; 
    }
}
