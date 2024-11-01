#include <iostream>
#include <string>
#include <map>

class   Harl {

enum    logLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

public:
    void    complain(std::string level);

private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    void    invalid(void);

};