/*
At some point, you might have to deal with currency
exchange rates, and you’ll need to ensure your calculations
are as precise as possible.
Write a program that converts currency. Specifically, convert
euros to U.S. dollars. Prompt for the amount of money in
euros you have, and prompt for the current exchange rate
of the euro. Print out the new amount in U.S. dollars. The
formula for currency conversion is
amount
to
=
amount
from
× rate
from
rate
to
where
• Amount to is the amount in U.S. dollars.
• Amount from is the amount in euros.
• rate from is the current exchange rate in euros.
• rate to is the current exchange rate of the U.S. dollar.
Example Output
How many euros are you exchanging? 81
What is the exchange rate? 137.51
81 euros at an exchange rate of 137.51 is
111.38 U.S. dollars.
*/



#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double exchangeeuro , exchangerate ;

    std::cout<<"How many euroes are ou exchanged ?";
    std::cin >> exchangeeuro;

    std::cout<<"What is the exchange rate?";
    std::cin >> exchangerate;

    //formula  total = change in euro * (change in rate / 100)//
    double totalamount =  exchangeeuro *(exchangerate / 100);

     std::cout << fixed << setprecision(2);
     std::cout << exchangeeuro << " " << "euroes at an exchange rate of " << " " << exchangerate << " " <<"is" << " " << totalamount << "" <<" US dollers.";

     return 0;

}