/*
When working in a global environment, you’ll have to
present information in both metric and Imperial units. And
you’ll need to know when to do the conversion to ensure
the most accurate results.
Create a program that calculates the area of a room. Prompt
the user for the length and width of the room in feet. Then
display the area in both square feet and square meters.
Example Output
What is the length of the room in feet? 15
What is the width of the room in feet? 20
You entered dimensions of 15 feet by 20 feet.
The area is
300 square feet
27.871 square meters
The formula for this conversion is
m
2
= f
2
× 0.09290304
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double length, width;
    const  double conversionFactor = 0.09290304;

    std::cout<<"What is the length of the room in the feet?";
    std::cin >> length;

    std::cout<<"What is the width of the room in feet?";
    std::cin >> width;

    double areafeet = length * width ;
    double areameter = areafeet * conversionFactor;

    std::cout<<"you entered dimenssion of " << length << "feet by " << width <<"feet." << endl;;
    std::cout<<"the area is " << endl;
    std::cout<< areafeet  << " "<< "squarefeet\n";
    std::cout<<setprecision << areameter  << " "<< "squaremeters" << endl;
    return 0;

}
