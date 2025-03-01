/*
Write a program to compute the value of an investment
compounded over time. The program should ask for the
starting amount, the number of years to invest, the interest
rate, and the number of periods per year to compound.
The formula you’ll use for this is
A = P(1 +
r
n
)
nt
where
• P is the principal amount.
• r is the annual rate of interest.
• t is the number of years the amount is invested.
• n is the number of times the interest is compounded per
year.
• A is the amount at the end of the investment.
Example Output
What is the principal amount? 1500
What is the rate? 4.3
What is the number of years? 6
What is the number of times the interest
is compounded per year? 4
$1500 invested at 4.3% for 6 years
compounded 4 times per year is $1938.84.
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double principal;
    double rate;
    double time;
    double n; //time of he intrest is compounded per year;

    std::cout<<"What is the principal amount ?" << " ";
    std::cin >> principal;

    std::cout<<"Enter the rate ?" << " ";
    std::cin>> rate;

    std::cout<<"What is  the number of years ?" <<" ";
    std::cin >> time;
    
    std::cout<<"What is the number of times the interest is compounded per year? " <<" ";
    std::cin >> n;

    rate = rate / 100;


    // formula to calculate the compound intrest
     double TotalAmount =  principal * pow((1 + rate / n), (n * time));


     std::cout<<principal << " " <<" invested at " << " " << rate * 100<< " "<< "for" << " " << time << " " <<"years compounded" << " " << n <<" per year is " << " " << TotalAmount << endl;
     return 0;

}