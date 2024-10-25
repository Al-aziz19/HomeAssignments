#ifndef AUTOBOT_H
#define AUTOBOT_H

class Autobot : public Transformer {
public:
    Autobot();
    ~Autobot();

    bool assist();
};

#endif // AUTOBOT_H