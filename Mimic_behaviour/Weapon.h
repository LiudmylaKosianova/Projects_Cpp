#include <iostream>
using namespace std;

class Weapon{
private:
    int rounds;
public:
    Weapon();
    void Reload();
    bool Fire();
};