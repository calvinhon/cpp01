#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class   HumanB {

public:
    HumanB(std::string name);

    void    attack();
    void    setWeapon(Weapon weapon);
    
private:
    std::string _name;
    Weapon*      _weapon;
    
};

#endif