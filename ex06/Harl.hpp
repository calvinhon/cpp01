#include <iostream>
#include <string>
#include <map>

enum    logLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

class   Harl {

public:
    Harl();
    void            complain(std::string level);
    typedef void    (Harl::*function_p)();
    int             get_level(std::string level);

private:
    std::map<std::string, function_p> levelMap;

	void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

};

