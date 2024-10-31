#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char** av) {
    if (ac != 4)
        return 1;
    std::ifstream inFile(av[0]);
    if (!inFile) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
    std::ofstream outFile(av[0] + ".replace");
    if (!outFile) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    std::string line;
    size_t      position;
    size_t      len = av[1].length();
    while (std::getline(inFile, line)) {
        position = line.find(av[1]);
        if (position == std::string::npos)
            outFile << line << '\n';
        else
            
    }
    inFile.close();
    outFile.close();
    return 0;
}