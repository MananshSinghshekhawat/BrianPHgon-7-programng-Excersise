/*
Sometimes input you collect will need to be filtered down.
Data structures and loops can make this process easier.
Create a program that prompts for a list of numbers, separated by spaces. Have the program print out a new list containing only the even numbers.
Example Output
Enter a list of numbers, separated by spaces: 1 2 3 4 5 6 7 8
The even numbers are 2 4 6 8.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int number[10];

    std::cout<<" Enter a list of numbers, separated by spaces : ";

    for(int i = 0; i < 10 ; i++)
    {
        std::cin >> number[i];
    }

    std::cout<< " The even number are : ";
    for(int i = 0; i < 10; i++)
    {
        if(number[i] % 2 == 0)
        {
            std::cout<< number[i] ;
        }
    }

    std::cout <<  endl;

    return 0;
}