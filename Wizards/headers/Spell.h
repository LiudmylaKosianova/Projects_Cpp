#pragma once
#include "Magic.h"


class Spell:public Magic{
protected:
    string words;
public:
    Spell(string words);
    void Display();
};