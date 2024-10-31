#include "weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    Weapon  w1 = Weapon("revolver");
    HumanA  ha("Jim Raynor", w1);
    ha.attack();
    w1.setType("plasma gun");
    ha.attack();

    Weapon  w2 = Weapon("sniper rifle");
    HumanB  hb("Sarah Kerrigan");
    hb.attack();
    hb.setWeapon(w2);
    hb.attack();
    w2.setType("neosteel knife");
    hb.attack();
}