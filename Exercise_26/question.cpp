/*
Write a program that will help you determine how many
months it will take to pay off a credit card balance. The
program should ask the user to enter the balance of a credit
card and the APR of the card. The program should then
return the number of months needed.
The formula for this is
n = −
1
30
×
log(1 +
b
p
(1 − (1 + i)
30))
log(1 + i)
where
• n is the number of months.
• i is the daily rate (APR divided by 365).
• b is the balance.
• p is the monthly payment.
Example Output
What is your balance? 5000
What is the APR on the card (as a percent)? 12
What is the monthly payment you can make? 100
It will take you 70 months to pay off this card.
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double creditcard()
{
    double balance ;
    double month;
    double APR;
    double MonthlyPayment;
    double i;
    
    std::cout<<"What is your balance ? ";
    std::cin >> balance;

    std::cout<<"What is the APR on the card (as a percent)? ";
    std::cin >> APR;

    std::cout<<"What is the monthly payment you can make ? ";
    std::cin>> MonthlyPayment;

    APR = APR / 100.0; // to decimal
    i = APR / 12.0; //monthly intrest rate
    
    
    if (APR == 0) {
        return balance / MonthlyPayment;
    }



    // condition to check wheather the payment is too small/low or not 
    if (MonthlyPayment <= balance * i) {
        std::cout << "The monthly payment is too low to pay off the balance." << std::endl;
        return -1; 
    }
    
    double numerator = log(1 - (balance * i) / MonthlyPayment);
    double denominator = log(1 + i);

    month = -numerator / denominator ;
    return month;


}

int main()
{

    double month = creditcard();
    if(month > 0)
    {
    std::cout<< fixed << setprecision(2) << endl;
    std::cout<<"It will take you" << month << "months to pay of this cards " ;
    }
    return 0;

}