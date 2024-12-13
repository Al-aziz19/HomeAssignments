//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

// Пример класса для ассоциации
class Weapon {
public:
    std::string type;
    Weapon(const std::string& type = "Blaster") : type(type) {}
};

// Пример класса для композиции
class Engine {
public:
    std::string model;
    Engine(const std::string& model = "V8") : model(model) {}
};

// Перечисление для направления движения
enum class Direction {
    LEFT,
    RIGHT,
    FORWARD,
    BACKWARD
};

class Transformer {
protected:
    std::string name;
    std::string type;
    int powerLevel;
    int speed;
    Weapon* weapon; // Ассоциация
    Engine engine;  // Композиция

public:
    Transformer(const std::string& name, const std::string& type, int powerLevel, int speed, Weapon* weapon)
        : name(name), type(type), powerLevel(powerLevel), speed(speed), weapon(weapon), engine("V8") {}

    virtual ~Transformer() = default;

    // Get методы
    std::string getName() const { return name; }
    std::string getType() const { return type; }
    int getPowerLevel() const { return powerLevel; }
    int getSpeed() const { return speed; }
    Weapon* getWeapon() const { return weapon; }
    std::string getEngineModel() const { return engine.model; }

    // Set методы
    void setName(const std::string& name) { this->name = name; }
    void setType(const std::string& type) { this->type = type; }
    void setPowerLevel(int powerLevel) { this->powerLevel = powerLevel; }
    void setSpeed(int speed) { this->speed = speed; }
    void setWeapon(Weapon* weapon) { this->weapon = weapon; }
    void setEngineModel(const std::string& model) { engine.model = model; }

    // Методы
    virtual void transform() const = 0;
    virtual void attack() const = 0;
    virtual void defend() const = 0;

    // Новые методы
    virtual bool move() const;
    virtual bool turn(Direction dir) const;
    virtual bool jump() const;
    virtual bool fire() const;
    virtual bool ultimate() const;
};

#endif // TRANSFORMER_H