/*
Write a quick calculator that prompts for the rate of return
on an investment and calculates how many years it will take
to double your investment.
The formula is
years = 72 /r
where r is the stated rate of return.
Example Output
What is the rate of return? 0
Sorry. That's not a valid input.
What is the rate of return? ABC
Sorry. That's not a valid input.
What is the rate of return? 4
It will take 18 years to double your initial investment.
Constraints
• Don’t allow the user to enter 0.
• Don’t allow non-numeric values.
• Use a loop to trap bad input, so you can ensure that the
user enters valid values.
*/

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    double r;
    
    while (true) {
        cout << "What is the rate of interest: ";
        cin >> r;

        if (cin.fail() || r <= 0) { 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Sorry, that's not a valid input. Please enter a positive number.\n";
        } else {
            double years = 72 / r;
            cout << "It will take " << years << " years to double your initial investment.\n";
            break;
        }
    }
    return 0;
}
