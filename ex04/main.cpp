#include <iostream>
#include <fstream>
#include <string>

void    replace(std::ofstream& outFile, std::string line, std::string s1, std::string s2) {
    size_t  position = 0;
    size_t  lastPos = 0;
    size_t  len = s1.length();

    while ((position = line.find(s1, lastPos)) != std::string::npos) {
        outFile << line.substr(lastPos, position - lastPos);
        outFile << s2;
        lastPos = position + len;
    }
    outFile << line.substr(lastPos);
}

int main(int ac, char** av) {
    if (ac != 4) {
        std::cerr << "Input 3 arguements: [filename] [string to delete] [string to insert]" << std::endl;
        return 1;
    }
    std::ifstream inFile(av[1]);
    if (!inFile) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
	std::string outputFile = std::string(av[1]) + ".replace";
    std::ofstream outFile(outputFile.c_str());
    if (!outFile) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    if (std::string(av[2]).empty()) {
        std::cerr << "String to delete must not be empty" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(inFile, line)) {
		if (!inFile.eof())
			line += '\n';
        replace(outFile, line, av[2], av[3]);            
	}
    inFile.close();
    outFile.close();
    return 0;
}
