#include "Weapon.h"

Weapon::Weapon(){
    rounds = 10;
}

bool Weapon::Fire(){
    if(rounds>0){
        rounds--;
        cout << "\nWeapon Fired\n";
        return true;
    }else{
        return false;
    }
}

void Weapon::Reload(){
    cout << "\nReloading\n";
    rounds = 10;
}