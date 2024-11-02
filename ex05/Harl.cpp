#include "Harl.hpp"

Harl::Harl() {
	levelMap["DEBUG"] = &Harl::debug;
	levelMap["INFO"] = &Harl::info;
	levelMap["WARNING"] = &Harl::warning;
	levelMap["ERROR"] = &Harl::error;
}

void    Harl::complain(std::string level) {
	std::map<std::string, function_p>::iterator it = levelMap.find(level);
    if (it != levelMap.end())
        (this->*(it->second))();
	else {
		std::cout << "[INVALID]: "; 
		std::cout << "INVALID LEVEL! Only input one of the following: [DEBUG] [INFO] [WARNING] [ERROR]";
	}
    std::cout << std::endl;
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
