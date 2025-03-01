//nput, Processing, and Output//

/*The “Hello, World” program is the first program you learn
to write in many languages, but it doesn’t involve any input.
So create a program that prompts for your name and prints
a greeting using your name.
Example Output
What is your name? Brian
Hello, Brian, nice to meet you! */



#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "What is your name? ";

    std::getline(std::cin, name);

    std::cout << "Hello, " << name << ", nice to meet you!" << std::endl;

    return 0;
}