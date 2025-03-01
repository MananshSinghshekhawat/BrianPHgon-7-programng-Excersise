/*
You’ll often write programs that deal with numbers. And
depending on the programming language you use, you’ll
have to convert the inputs you get to numerical data types.
Write a program that prompts for two numbers. Print the
sum, difference, product, and quotient of those numbers as
shown in the example output:
Example Output
What is the first number? 10
What is the second number? 5
10 + 5 = 15
10 - 5 = 5
10 * 5 = 50
10 / 5 = 2
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double num1 , num2;

    std::cout<<"What is the first number?";

    std::cin >> num1;

    std::cout<<"What is the second number?";

    std::cin >> num2;
    
    std::cout<<num1 <<" + " << num2 << " = " << (num1 + num2) << endl;
    std::cout<<num1 <<" - " << num2 << " = " << (num1 - num2) << endl;;
    std::cout<<num1 <<" * " << num2 << " = " << (num1 * num2) << endl;;
    std::cout<<num1 <<" / " << num2 << " = " << (num1 / num2) << endl;;
    
    return 0;
    
}