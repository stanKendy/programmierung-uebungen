//
// Created by stanley on 11/10/26.
//

#include "anhalte.h"
#include <iostream>
int main() {
    for (int i = 0; i <250; i = i + 10) {
        std::cout << "The velocity = "<< i << std::flush;
        std::cout << "  perceptionReaction = "<< Reaktionsweg(i) << std::flush;
        std::cout << " breakingDistance = "<< Bremsweg(i) << std::flush;
        std::cout << " totalStoppingDistance = "<<Bremsweg(i) + Reaktionsweg(i)<< std::endl;
    }
}


