
#include "../headers/Elementalist.h"

Elementalist::Elementalist(string name, int knowledge, int skill, 
                           int maxMagic, TElements specialism)
                           : Wizard(name, knowledge, skill, maxMagic), specialism(specialism){
    
}

void Elementalist::Display(){
    Wizard::Display();
    cout << "Specialism: ";
    switch(specialism){
        case earth: cout << "earth\n";
                    break;
        case wind: cout << "wind\n";
                    break;
        case fire: cout << "fire\n";
                    break;
        case water: cout << "water\n";
                    break;
        default: cout << "undefined\n";
                    
    }
}