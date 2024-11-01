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
	Harl();
    void    		complain(std::string level);
	typedef void	*function_p() const;

private:
	std::map<std::string, function_p> levelMap;
    
	void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

};