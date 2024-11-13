//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#include <iostream>
#include "autobot.h"
#include "decepticon.h"
#include "maximal.h"

int main() {
    // Создание объектов
    Autobot optimusPrime("Optimus Prime", "Sword");
    Decepticon megatron("Megatron", "Cannon");
    Maximal optimusPrimal("Optimus Primal");

    // Демонстрация работы методов
    std::cout << "Demonstrating Autobot:" << std::endl;
    optimusPrime.transform();
    optimusPrime.useWeapon();
    optimusPrime.assist();

    std::cout << "\nDemonstrating Decepticon:" << std::endl;
    megatron.transform();
    megatron.useWeapon();
    megatron.sabotage();

    std::cout << "\nDemonstrating Maximal:" << std::endl;
    optimusPrimal.transform();

    return 0;
}
