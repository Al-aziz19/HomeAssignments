#include "maximal.h"
#include <iostream>

Maximal::Maximal() {
    std::cout << "Maximal created.\n";
}

Maximal::~Maximal() {
    std::cout << "Maximal destroyed.\n";
}

bool Maximal::shield() {
    std::cout << "Maximal activates shield.\n";
    return true;
}