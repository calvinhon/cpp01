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
    std::cout << '\n' << std::endl;
}

void    Harl::debug(void) {
std::cout << "[ DEBUG ]\n";
std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
}

void    Harl::info(void) {
std::cout << "[ INFO ]\n";
std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
}

void    Harl::warning(void) {
std::cout << "[ WARNING ]\n";
std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}

void    Harl::error(void) {
std::cout << "[ ERROR ]\n";
std::cout << "This is unacceptable! I want to speak to the manager now.";
}

int Harl::get_level(std::string level) {
    int         levelNum;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            levelNum = i;
    return (levelNum);
}
