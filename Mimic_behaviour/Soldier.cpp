#include "Soldier.h"

Soldier::Soldier(Weapon * w){
    wpn = w;
}

void Soldier::FireWeapon(){
    //cout << "\nFiring Weapon\n";
    if((wpn!=0) && (ms!=3)) wpn->Fire();
}