/*
You don’t always need a complex control structure to solve
simple problems. Sometimes a program requires an extra
step in one case, but in all other cases there’s nothing to do.
Write a simple program to compute the tax on an order
amount. The program should prompt for the order amount
and the state. If the state is “WI,” then the order must be
charged 5.5% tax. The program should display the subtotal,
tax, and total for Wisconsin residents but display just the
total for non-residents.
Example Output
What is the order amount? 10
What is the state? WI
The subtotal is $10.00.
The tax is $0.55.
The total is $10.55.
Or
What is the order amount? 10
What is the state? MN
The total is $10.00
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double orderAmount;
    string state;

    
    cout << "What is the order amount? ";
    cin >> orderAmount;

    
    cout << "What is the state? ";
    cin >> state;

    
    double tax = 0.0;
    double total = orderAmount;

   
    if (state == "WI" || state == "wi") {
        tax = orderAmount * 0.055; 
        total += tax; 
    }


    cout << fixed << setprecision(2);


    if (state == "WI" || state == "wi") {
        cout << "The subtotal is $" << orderAmount << "." << endl;
        cout << "The tax is $" << tax << "." << endl;
    }
    cout << "The total is $" << total << "." << endl;

    return 0;
}