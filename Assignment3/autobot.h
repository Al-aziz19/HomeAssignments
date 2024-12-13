//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class Autobot : public Transformer {
private:
    std::string leader;
    bool isElite;

public:
    Autobot(const std::string& name, int powerLevel, int speed, Weapon* weapon, const std::string& leader, bool isElite)
        : Transformer(name, "Autobot", powerLevel, speed, weapon), leader(leader), isElite(isElite) {}

    // Get методы
    std::string getLeader() const { return leader; }
    bool getIsElite() const { return isElite; }

    // Set методы
    void setLeader(const std::string& leader) { this->leader = leader; }
    void setIsElite(bool isElite) { this->isElite = isElite; }

    // Методы
    void transform() const override;
    void attack() const override;
    bool assist();
    void useWeapon() const;
};

#endif // AUTOBOT_H