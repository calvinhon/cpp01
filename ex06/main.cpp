#include "Harl.hpp"

int main(int ac, char **av) {
    Harl    harl;

    if (ac != 2) {
        std::cout << "Input just one argument, a level" << std::endl;
        return 1;
    }
    switch (harl.get_level(av[1])) {
        case DEBUG:
            harl.complain("DEBUG");
        case INFO:
            harl.complain("INFO");
        case WARNING:
            harl.complain("WARNING");
        case ERROR:
            harl.complain ("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
    }
    return 0;
}