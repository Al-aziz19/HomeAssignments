#include "transformer.h"
#include <iostream>

Transformer::Transformer()
        : _level(1), _strength(10), _range(100), _fuel(500), _ammo(50) {
    std::cout << "Transformer created.\n";
}

Transformer::~Transformer() {
    std::cout << "Transformer destroyed.\n";
}

bool Transformer::move() {
    std::cout << "Transformer moves.\n";
    return true;
}

bool Transformer::turn(Direction dir) {
    std::cout << "Transformer turns.\n";
    return true;
}

bool Transformer::jump() {
    std::cout << "Transformer jumps.\n";
    return true;
}

bool Transformer::fire() {
    std::cout << "Transformer shoots.\n";
    return true;
}

bool Transformer::ultimate() {
    std::cout << "Transformer uses ultimate ability.\n";
    return true;
}

bool Transformer::transform() {
    std::cout << "Transformer transforms.\n";
    return true;
}