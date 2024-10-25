#include "autobot.h"
#include <iostream>

Autobot::Autobot() {
    std::cout << "Autobot  created.\n";
}

Autobot::~Autobot() {
    std::cout << "Autobot destroyed.\n";
}

bool Autobot::assist() {
    std::cout << "Autobot provides assistance.\n";
    return true;
}