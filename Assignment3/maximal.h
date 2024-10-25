#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "transformer.h"

class Maximal : public Transformer {
public:
    Maximal();
    ~Maximal();

    bool shield();
};

#endif // MAXIMAL_H