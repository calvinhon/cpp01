#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {
	std::cout << _name << " zombie destroyed" << std::endl;
};

void    Zombie::set_name(std::string name) {
    _name = name;
}

void    Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
