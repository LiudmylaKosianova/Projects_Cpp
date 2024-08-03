#pragma once
#include "Magic.h"

class Potion:public Magic{
protected:
    int dose;
public:
    Potion(int dose);
    void Display();
};