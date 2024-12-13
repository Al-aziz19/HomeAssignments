//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "transformer.h"

class Maximal : public Transformer {
private:
    std::string animalForm;
    bool isStealth;

public:
    Maximal(const std::string& name, int powerLevel, int speed, Weapon* weapon, const std::string& animalForm, bool isStealth)
        : Transformer(name, "Maximal", powerLevel, speed, weapon), animalForm(animalForm), isStealth(isStealth) {}

    // Get методы
    std::string getAnimalForm() const { return animalForm; }
    bool getIsStealth() const { return isStealth; }

    // Set методы
    void setAnimalForm(const std::string& animalForm) { this->animalForm = animalForm; }
    void setIsStealth(bool isStealth) { this->isStealth = isStealth; }

    // Методы
    void transform() const override { return; }
    void attack() const override { return; }
};

#endif // MAXIMAL_H