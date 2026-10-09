#pragma once

/**
 *  Структура Time содержит время в часах, минутах и секундах
 */

typedef struct Time 
{
    int hours;
    int minutes;
    int seconds;   
} Time;


/**
 * выводит передоваемое время в формате 
 * Часы:Минуты:Секунды
 */

void printTime(Time* time);
