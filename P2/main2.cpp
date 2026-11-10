#include <iostream>
#include "head2.h"
int main(int argv, char* argc[]) {
    for (int i = 25; i <= 86; i++) {
        int c = fahrenheit2celsius(i);
        int f = celsius2Farenheit(c);
        std::cout << i << " °F = " << c << " °C = " << f<< " °F" << std::endl;
    }
}