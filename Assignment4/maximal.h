//Raimberdiyev Aziz st135793@student.spbu.ru
#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "transformer.h"

class Maximal : public Transformer {
public:
    Maximal(const std::string& name)
        : Transformer(name, "Maximal") {}

    virtual ~Maximal() = default;

    void transform() override; 

    friend std::ostream& operator<<(std::ostream& os, const Maximal& maximal) {
        os << static_cast<const Transformer&>(maximal);
        return os;
    }
};

#endif // MAXIMAL_H