#include "Harl.hpp"

Harl::Harl() {}

const Harl::levelFunctionPair Harl::_levelMap[4] = {
	{"DEBUG", &Harl::_debug},
	{"INFO", &Harl::_info},
	{"WARNING", &Harl::_warning},
	{"ERROR", &Harl::_error},
};

void    Harl::complain(std::string level) {
    for (int i = 0; i < 4; i++) {
		if (_levelMap[i].level == level) {
			(this->*(_levelMap[i].func))();
		    std::cout << std::endl;
			return ;
		}
	}
	std::cout << "[INVALID]: "; 
	std::cout << "INVALID LEVEL! Only input one of the following: [DEBUG] [INFO] [WARNING] [ERROR]" << std::endl;
}

void    Harl::_debug(void) {
std::cout << "[DEBUG]: ";
std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
}

void    Harl::_info(void) {
std::cout << "[INFO]: ";
std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
}

void    Harl::_warning(void) {
std::cout << "[WARNING]: ";
std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}

void    Harl::_error(void) {
std::cout << "[ERROR]: ";
std::cout << "This is unacceptable! I want to speak to the manager now.";
}
