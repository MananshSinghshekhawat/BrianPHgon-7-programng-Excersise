/*
There will be times when you’ll need to read in one file,
modify it, and then write a modified version of that file to
a new file.
Given an input file, read the file and look for all occurrences
of the word utilize. Replace each occurrence with use. Write
the modified file to a new file.
Example Output
Given the input file of
One should never utilize the word "utilize" in
writing. Use "use" instead.
The program should generate
One should never use the word "use" in
writing. Use "use" instead.
*/


#include <iostream>
#include <fstream>
#include <string>

void replaceUtilizeWithUse(const std::string &inputFile, const std::string &outputFile) {
    std::ifstream inFile(inputFile);
    if (!inFile) {
        std::cerr << "Error " << std::endl;
        return;
    }

    std::ofstream outFile(outputFile);
    if (!outFile) {
        std::cerr << "Error " << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        size_t pos;
        while ((pos = line.find("utilize")) != std::string::npos) {
            line.replace(pos, 7, "use");
        }
        outFile << line << "\n";
    }

    inFile.close();
    outFile.close();
}

int main() {
    std::string inputFile, outputFile;
    std::cout << "Enter the input file name: ";
    std::cin >> inputFile;
    std::cout << "Enter the output file name: ";
    std::cin >> outputFile;

    replaceUtilizeWithUse(inputFile, outputFile);
    std::cout << "File processing complete. Output written to " << outputFile << std::endl;

    return 0;
}
