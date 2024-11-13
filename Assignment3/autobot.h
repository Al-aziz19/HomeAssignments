//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"
#include "Weapon.h"

class Autobot : public Transformer {
private:
    Weapon weapon;

public:
    Autobot(const std::string& name, const std::string& weaponType)
        : Transformer(name, "Autobot"), weapon(weaponType) {}

    virtual ~Autobot() = default; 

    bool assist(); 

    void transform() override; 

    void useWeapon() const;
};

#endif // AUTOBOT_H