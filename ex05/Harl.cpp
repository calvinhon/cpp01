#include "Harl.hpp"

void    Harl::complain(std::string level) {
    
    std::cout << endl;
}

void    Harl::debug(void) {
std::cout << "[DEBUG]: "
std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"

}

void    Harl::info(void) {
std::cout << "[INFO]: "
std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"

}

void    Harl::warning(void) {
std::cout << "[WARNING]: "
std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."

}

void    Harl::error(void) {
std::cout << "[ERROR]: "
std::cout << "This is unacceptable! I want to speak to the manager now."
}

void    Harl::invalid(void) {
std::cout << "[INVALID]: " 
std::cout << "INVALID LEVEL! Only input one of the following: [DEBUG] [INFO] [WARNING] [ERROR]"
}




