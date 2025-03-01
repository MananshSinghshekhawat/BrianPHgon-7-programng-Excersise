/*
Create a program that converts temperatures from Fahrenheit to Celsius or from Celsius to Fahrenheit. Prompt for the
starting temperature. The program should prompt for the
type of conversion and then perform the conversion.
The formulas are
C = (F − 32) × 5 / 9
and
F = (C × 9 / 5) + 32
Example Output
Press C to convert from Fahrenheit to Celsius.
Press F to convert from Celsius to Fahrenheit.
Your choice: C
Please enter the temperature in Fahrenheit: 32
The temperature in Celsius is 0.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double startingtemperature , convertedtemperature;
    char choice;

    std::cout<<"Press C to convert from Fahrenheit to Celsius.\n";
    std::cout<<"Press F to convert from Celsius to Fahrenheit.\n";

    std::cout<<"your choice : ";
    std::cin>> choice;

    if(choice == 'C' || choice == 'c' )
    {
        std::cout<<"Enter the value startingtemperature ";
        std::cin>> startingtemperature;

        startingtemperature = (convertedtemperature-32) * 5/9;
        cout << "The temperature in Celsius is " << convertedtemperature << "." << endl;
    } else if(choice == 'F' || choice == 'f')
    {
        std::cout<<"Enter the value of convertedtemperature";
        std::cin>>convertedtemperature;

        convertedtemperature = (startingtemperature * 9/5) + 32;
        cout << "The temperature in Fahrenheit is " << convertedtemperature << "." << endl;
    } else{
        cout<<"invalid choic please try the valid choice";
    }

    std::cout<<"please enter the temperature in farenheit :";
    std::cin >> convertedtemperature;

    std::cout<<"the temperature in celcius is : " << startingtemperature << endl;
    return 0;
}