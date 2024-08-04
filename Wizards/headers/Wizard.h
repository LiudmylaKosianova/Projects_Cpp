#pragma once
#include "Magic.h"

class Wizard{
protected:
    string name;
    int knowledge;
    int skill;
    Magic **magicInventory;
    int magicCount;
    int maxMagic;
public:
    Wizard(string name, int knowledge, int skill, int maxMagic);
    void AddMagic(Magic *m);
    virtual void Display();
};