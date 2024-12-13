//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#include <iostream>
#include <vector>
#include "autobot.h"
#include "decepticon.h"
#include "maximal.h"

int main() {
    // Создание объектов
    Weapon blaster("Blaster");
    Autobot optimus("Optimus Prime", 100, 80, &blaster, "Rodimus Prime", true);
    Decepticon megatron("Megatron", 95, 75, &blaster, true, 10);
    Maximal cheetor("Cheetor", 85, 90, &blaster, "Cheetah", true);

    // Явные вызовы методов
    optimus.transform();
    optimus.attack();
    optimus.defend();

    megatron.transform();
    megatron.attack();
    megatron.defend();

    cheetor.transform();
    cheetor.attack();
    cheetor.defend();

    // Тестирование вызова методов из указателя предкового типа
    Transformer* transformer = &optimus;
    transformer->transform();
    transformer->attack();
    transformer->defend();

    transformer = &megatron;
    transformer->transform();
    transformer->attack();
    transformer->defend();

    transformer = &cheetor;
    transformer->transform();
    transformer->attack();
    transformer->defend();

    // Создание вектора из указателей на объекты
    std::vector<Transformer*> transformers;
    transformers.push_back(new Autobot("Bumblebee", 70, 80, &blaster, "Optimus Prime", false));
    transformers.push_back(new Autobot("Jazz", 75, 85, &blaster, "Optimus Prime", false));
    transformers.push_back(new Autobot("Ironhide", 80, 70, &blaster, "Optimus Prime", true));
    transformers.push_back(new Decepticon("Starscream", 90, 85, &blaster, true, 8));
    transformers.push_back(new Decepticon("Soundwave", 85, 80, &blaster, false, 9));
    transformers.push_back(new Decepticon("Shockwave", 88, 78, &blaster, false, 7));
    transformers.push_back(new Maximal("Airazor", 75, 95, &blaster, "Falcon", true));
    transformers.push_back(new Maximal("Rattrap", 65, 70, &blaster, "Rat", false));
    transformers.push_back(new Maximal("Tigatron", 80, 90, &blaster, "Tiger", true));

    // Тестирование вызова виртуальных методов в цикле
    for (Transformer* t : transformers) {
        t->transform();
        t->attack();
        t->defend();
    }

    // Освобождение памяти
    for (Transformer* t : transformers) {
        delete t;
    }

    return 0;
}