#include <iostream>
#include "autobot.h"
#include "decepticon.h"
#include "maximal.h"

int main() {
    Autobot autobot;
    autobot.move();
    autobot.assist();

    std::cout << "-----------------------\n";

    Decepticon decepticon;
    decepticon.move();
    decepticon.sabotage();

    std::cout << "-----------------------\n";

    Maximal maximal;
    maximal.move();
    maximal.shield();

    return 0;
}