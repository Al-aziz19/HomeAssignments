//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "transformer.h"

class Maximal : public Transformer {
public:
    Maximal(const std::string& name)
        : Transformer(name, "Maximal") {}

    virtual ~Maximal() = default; // Используем деструктор по умолчанию

    void transform() override; // Переопределяем чисто виртуальный метод
};

#endif // MAXIMAL_H
