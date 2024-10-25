#ifndef TRANSFORMER_H
#define TRANSFORMER_H

enum class Direction {
    LEFT,
    RIGHT
};

class Transformer {
public:
    Transformer();
    virtual ~Transformer();

    bool move();
    bool turn(Direction dir);
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();

private:
    unsigned int _level;
    unsigned int _strength;
    unsigned int _range;
    unsigned int _fuel;
    unsigned int _ammo;
};

#endif // TRANSFORMER_H#endif