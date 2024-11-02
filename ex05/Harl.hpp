#include <iostream>
#include <string>
#include <map>

class   Harl {

public:
	Harl();
    void    		complain(std::string level);
	typedef void	(Harl::*function_p)();

private:
	std::map<std::string, function_p> levelMap;
    
	void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);

};