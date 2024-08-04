#include "../headers/Wizard.h"

Wizard::Wizard(string name, int knowledge,int skill, int maxMagic){
    this->name = name;
    this->knowledge = knowledge;
    this->skill = skill;
    this->maxMagic = maxMagic;
    this->magicCount = 0;
    this->magicInventory = new Magic*[maxMagic];
}

void Wizard::AddMagic(Magic *m){
    if(magicCount < maxMagic){
        magicInventory[magicCount] = m;
        magicCount++;
    }
}

void Wizard::Display(){
    cout << "Name: " << name << "\n";
    cout << "Knowledge: " << knowledge << "\n";
    cout << "Skills: " << skill << "\n";
    for(int i = 0; i < magicCount; i++){
        magicInventory[i]->Display();
    }
}