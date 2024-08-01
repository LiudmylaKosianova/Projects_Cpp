#include "Person.h"
#include "Soldier.h"


int main(){

    // Person *p1 = new Person();
    // p1->Crawl();  

    // Soldier *s1 = new Soldier();
    // s1->Stand();
    // s1->FireWeapon(); 
    Weapon * wpn = new Weapon();
    Soldier *s1 = new Soldier(wpn);
    s1->Stand();
    s1->FireWeapon();





    return 0;
}