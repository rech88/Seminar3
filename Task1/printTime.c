#include <stdio.h>

#include "printTime.h"

void printTime(Time* time) {
    printf("%02d:%02d:%02d\n", time->hours, time->minutes, time->seconds);
}
