#include <stdio.h>

#include "printTime.h"

int main() {
    int n;
    scanf("%d", &n);

    Time times[n];

    for (int i = 0; i < n; i++) {
        int h, m, s;
        scanf("%d %d %d", &h, &m, &s);
        times[i].hours = h; 
        times[i].minutes = m; 
        times[i].seconds = s; 
    }

    for (int i = 0; i < n; i++) {
        printTime(&times[i]);
    }
}
