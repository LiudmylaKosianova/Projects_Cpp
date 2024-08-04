#include "../headers/Spellswords.h"

Spellswords::Spellswords(string name, int knowledge, int skill, 
                        int maxMagic, string weapon) 
                        : Wizard(name, knowledge, skill, maxMagic){
    this->weapon = weapon;
}

void Spellswords::Display(){
    Wizard::Display();
    cout << "Weapon: " << weapon << endl;
}