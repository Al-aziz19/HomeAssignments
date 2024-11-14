#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private:
    std::string type;

public:
    explicit Weapon(const std::string &type);

    void use() const;

    friend std::ostream& operator<<(std::ostream& os, const Weapon& weapon) {
        os << weapon.type;
        return os;
    }
};

#endif // WEAPON_H