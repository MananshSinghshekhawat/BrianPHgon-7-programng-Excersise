/*
Create a program that prompts for your weight, gender,
number of drinks, the amount of alcohol by volume of the
drinks consumed, and the amount of time since your last
drink. Calculate your blood alcohol content (BAC) using this
formula
BAC = (A × 5.14 / W × r) − .015 × H
where
• A is total alcohol consumed, in ounces (oz).
• W is body weight in pounds.
• r is the alcohol distribution ratio:
– 0.73 for men
– 0.66 for women
• H is number of hours since the last drink.
Display whether or not it’s legal to drive by comparing the
blood alcohol content to 0.08.
Example Output
Your BAC is 0.08
It is not legal for you to drive.
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    int totalalchohol = 0;
    double weight ; // weight 
    int numdrinks;
    double abv; // Alcohol by volume
    double time;
    char gender; 

    const double r_men = 0.73; // r is the alchohol distribution 
    const double r_women = 0.66;

    double BAC;
    // BAC = blood alchohol content formula  bac = ( a*5.14 / w*r)-0.5  *h

    std::cout<<"what is your gender(m/w) ? ";
    std::cin>> gender;

    std::cout<<"What is your weight in ponds ?";
    std::cin >> weight;

    std::cout<<"Enter the amount of drink consumed ";
    std::cin >> numdrinks;


    for(int i = 0; i < numdrinks ; i++ )
    {
        cout<<"Enter the abv of drinks " << (i + 1) << " in percentage " ;
        cin >> abv;

        totalalchohol += (abv/100) * 0.6; // 0.6 is the standard drink level//
    }

    std::cout<<"Enter the amount of time since you have last drink : ";
    std::cin>>time;

    double r = (gender == 'M' || gender == 'm') ? r_men : r_women;

    BAC = (totalalchohol * 5.14 / (weight * r)) - (0.015 * time);

    cout << fixed << setprecision(3);
    cout << "Your Blood Alcohol Content (BAC) is: " << BAC << endl;

    return 0;
}