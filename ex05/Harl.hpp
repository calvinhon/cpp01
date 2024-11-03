#include <iostream>
#include <string>

class   Harl {

public:
	Harl();
    void    		complain(std::string level);
	typedef void	(Harl::*function_p)();
	struct			levelFunctionPair {
		std::string level;
		function_p func;
	};

private:
	void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);
	
	static const levelFunctionPair _levelMap[4];

};