#include "../headers/Magic.h"
#include "../headers/Potion.h"
#include "../headers/Spell.h"
#include "../headers/Transformation.h"

#include "../headers/Wizard.h"
#include "../headers/Elementalist.h"
#include "../headers/Spellswords.h"

int main(){

    Wizard **wizards = new Wizard*[2];
    //wizards[0] = new Elementalist("Fred", 80, 20, 5, Elementalist::fire);
    wizards[1] = new Spellswords("John", 60, 50, 3, "Wand");

    // wizards[0]->AddMagic(new Potion(50));
    // wizards[0]->AddMagic(new Transformation("Cat"));

    wizards[1]->AddMagic(new Potion(35));
    wizards[1]->AddMagic(new Spell("Abra casabra"));
    wizards[1]->AddMagic(new Transformation("Bird"));

    //wizards[0]->Display();
    wizards[1]->Display();

    return 0;
}