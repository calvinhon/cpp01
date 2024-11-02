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
    
	void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

};