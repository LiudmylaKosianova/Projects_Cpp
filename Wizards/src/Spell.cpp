#include "../headers/Spell.h"

Spell::Spell(string words):words(words){}
void Spell::Display(){
    cout << "Spell words: " << words << endl;
}