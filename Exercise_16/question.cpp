/*
Write a program that asks the userfortheir age and compare
it to the legal driving age of sixteen. If the user is sixteen or
older, then the program should display “You are old enough
to legally drive.” If the user is under sixteen, the program
should display “You are not old enough to legally drive.”
Example Output
What is your age? 15
You are not old enough to legally drive.
Or
What is your age? 35
You are old enough to legally drive.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int requiredage = 16;
    int age;

    std::cout<<"What is your age ?";
    std::cin >> age ;

    if( requiredage <= age)
    {
        cout << "You are old enough to legally drive.";
    } 
    else
    {
        cout << "You are not old enough to legally drive.";
    }
    return 0;
}