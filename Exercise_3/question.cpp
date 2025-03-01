 /*Quotation marks are often used to denote the start and end
of a string. But sometimes we need to print out the quotation
marks themselves by using escape characters.
Create a program that prompts for a quote and an author.
Display the quotation and author as shown in the example
output.
Example Output
What is the quote? These aren't the droids you're looking for.
Who said it? Obi-Wan Kenobi
Obi-Wan Kenobi says, "These aren't the droids
you're looking for." */


#include <iostream>
#include <string>

int main() {
    std::string quote, author;
    

    std::cout << "What is the quote? ";
    std::getline(std::cin, quote);
    
    
    std::cout << "Who said it? ";
    std::getline(std::cin, author);
    
    
    std::cout << author << " says, \"" << quote << "\"." << std::endl;
    
    return 0;
}

