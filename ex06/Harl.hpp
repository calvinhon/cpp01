#include <iostream>
#include <string>

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
	struct			levelFunctionPair {
		std::string	level;
		function_p	func;
	};
    int             get_level(std::string level);

private:
	void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);

	static const levelFunctionPair	_levelMap[4];

};

