/*
You’ll often need to see if one value is within a certain range
and alter the flow of a program as a result.
Create a program to calculate the body mass index (BMI)
for a person using the person’s height in inches and weight
in pounds. The program should prompt the user for weight
and height.
Calculate the BMI by using the following formula:
bmi = (weight / (height × height))* 703
If the BMI is between 18.5 and 25, display that the person is
at a normal weight. If they are out of that range, tell them if
they are underweight or overweight and tell them to consult
their doctor.
Example Output
Your BMI is 19.5.
You are within the ideal weight range.
or
Your BMI is 32.5.
You are overweight. You should see your doctor.
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double weight;
    double  height ;
    double BMI;

    std::cout<<"Enter the height in inches :";
    std::cin >> height;

    std::cout<<"Enter the wight in ponds :";
    std::cin>> weight;

    BMI = (weight / (height*height)) * 703;

    if( BMI >= 18.5 <= 25)
    {
        cout<<"your BMI is" << BMI << endl;
        cout<<"You are within the ideal weight range.";
    }
    else
    {
        cout<<"your BMI is" << BMI << endl;
        cout<<"You are overweight. You should see your doctor";
    }

    return 0;
}