#include "head2.h"
double celsius2Farenheit(double celsius)
{
    double fahrenheit = celsius * (9.0/5.0) +32;
    return fahrenheit;
}

double fahrenheit2celsius(double fahrenheit)
{
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}