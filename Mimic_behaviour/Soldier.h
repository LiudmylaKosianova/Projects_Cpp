#include "Person.h"
#include "Weapon.h"

class Soldier : public Person{
private:
    Weapon * wpn;
public:
    Soldier(Weapon * w);
    void FireWeapon();
};