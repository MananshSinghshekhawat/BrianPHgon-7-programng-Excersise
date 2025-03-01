/*
Create a program that computes simple interest. Prompt for
the principal amount, the rate as a percentage, and the time,
and display the amount accrued (principal + interest).
The formula for simple interest is
A = P(1 + rt), where P is
the principal amount, r is the annual rate of interest, t is the
number of years the amount is invested, and A is the amount
at the end of the investment.
Example Output
Enter the principal: 1500
Enter the rate of interest: 4.3
Enter the number of years: 4
After 4 years at 4.3%, the investment will
be worth $1758.
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double principal , rate , time ;

    std::cout<<" Enter the principal value : ";
    std:: cin >> principal;

    std::cout<<" Enter the rate of intest : " ;
    std::cin >> rate;

    std::cout<<" Enter the number of years : " ;
    std::cin >> time;
    
    rate = rate / 100;



    // formula to calculate the intrest p(1+rt)
    double  totalamount = principal* (1 + rate * time) ;

    std::cout<<" after " <<" " << time << " " <<" years at rate " << " " << rate / 100<< " " << "the investment will be worth " << " " << totalamount;
    
    return 0;
}