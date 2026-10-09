#include <stdio.h>

#include "concateStr.h"

int main() {
    int n;
    scanf("%d", &n);

    char result[100*n];
    scanf("%s", result);

    char str[100];
    for (int i = 1; i < n; i++) {
        scanf("%s", str);
        concate(result, str);
    }
    
    printf("%s", &result);
}