//Counting the Number of Characters//


/*
Create a program that prompts for an input string and displays output that shows the input string and the number of
characters the string contains.
Example Output
What is the input string? Homer
Homer has 5 characters.
Constraints
• Be sure the output contains the original string.
• Use a single output statement to construct the output.
• Use a built-in function of the programming language to
determine the length of the string.
*/


#include<iostream>
#include <string>

int main()
{
    std::string name;
     std::cout<<"what is the input string?" ;

     std::getline(std::cin, name);

     std::cout <<" Homer has " << name.length()  << " " << "characters" ;

     return 0;
}