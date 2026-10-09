#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "reverseString.h"

#define N 100

int main() {
    int n;
    scanf("%d", &n);
    
    char* result[n];

    char str[N];
    for (int i = 0; i < n; i++){
        scanf("%s", str);
        
        reverse(str, strlen(str));
        
        result[i] = strdup(str);
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", result[i]);
    }
}
