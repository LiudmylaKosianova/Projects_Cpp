#pragma once
#include "Wizard.h"

class Elementalist : public Wizard{
public:
    enum TElements{earth, wind, fire, water};
private:
    TElements specialism;
public:
    Elementalist(string name, int knowledge, int ksill, int maxMagic, TElements specialism);
    void Display();
};