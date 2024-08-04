#pragma once
#include "Wizard.h"

class Spellswords : public Wizard{
private:
    string weapon;
public:
    Spellswords(string name, int knowledge, int skill, 
                           int maxMagic, string weapon);
    void Display();
};