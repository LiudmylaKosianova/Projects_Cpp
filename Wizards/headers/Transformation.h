#pragma once
#include "Magic.h"

class Transformation:public Magic{
protected:
    string creature;
public:
    Transformation(string creature);
    void Display();
};