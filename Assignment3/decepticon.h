//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : public Transformer {
private:
    bool isAirborne;
    int deceitLevel;

public:
    Decepticon(const std::string& name, int powerLevel, int speed, Weapon* weapon, bool isAirborne, int deceitLevel)
        : Transformer(name, "Decepticon", powerLevel, speed, weapon), isAirborne(isAirborne), deceitLevel(deceitLevel) {}

    // Get методы
    bool getIsAirborne() const { return isAirborne; }
    int getDeceitLevel() const { return deceitLevel; }

    // Set методы
    void setIsAirborne(bool isAirborne) { this->isAirborne = isAirborne; }
    void setDeceitLevel(int deceitLevel) { this->deceitLevel = deceitLevel; }

    // Методы
    void transform() const override { return; }
    void attack() const override { return; }
};

#endif // DECEPTICON_H