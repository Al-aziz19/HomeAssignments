//Raimberdiyev Aziz st135793@student.spbu.ru
///Transformer Class Inheritance
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

// Предположительное объявление перечисления Direction
enum class Direction {
    LEFT,
    RIGHT
};

class Transformer {
protected:
    std::string name;
    std::string type; // Автобот или Десептикон

public:
    Transformer(const std::string& name, const std::string& type)
        : name(name), type(type) {}

    virtual void transform() = 0; // Чисто виртуальная функция

    virtual ~Transformer() = default; // Оставляем как default

    // Предположительное объявление методов
    virtual bool move();
    virtual bool turn(Direction dir);
    virtual bool jump();
    virtual bool fire();
    virtual bool ultimate();
};

#endif // TRANSFORMER_H