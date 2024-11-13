//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"
#include "Weapon.h"

class Decepticon : public Transformer {
private:
    Weapon weapon;

public:
    Decepticon(const std::string& name, const std::string& weaponType)
        : Transformer(name, "Decepticon"), weapon(weaponType) {}

    virtual ~Decepticon() = default;

    bool sabotage(); 

    void transform() override; 

    void useWeapon() const;
};

#endif // DECEPTICON_H