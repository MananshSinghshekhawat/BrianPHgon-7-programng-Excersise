/*
Create a tax calculator that handles multiple states and
multiple counties within each state. The program prompts
the user for the order amount and the state where the order
will be shipped.
For Wisconsin residents, prompt forthe county ofresidence.
• For Eau Claire county residents, add an additional 0.005
tax.
• For Dunn county residents, add an additional 0.004 tax.
Illinois residents must be charged 8% sales tax with no
additional county-level charge. All other states are not
charged tax. The program then displays the tax and the total
for Wisconsin and Illinois residents but just the total for
everyone else.
Example Output
What is the order amount? 10
What state do you live in? Wisconsin
The tax is $0.50.
The total is $10.50.
*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    double orderamount ;
    string state;

    cout<<"What is the order amount ? ";
    cin >> orderamount;

    cout<<"What state do you live in ? ";
    cin >> state;

    double tax_rate = 0.0;
    double tax = 0.0;
    double total = 0.0;


    if(state == "Wisconsin")
    {
        tax_rate = 0.005;
    }
    else if(state == "Illinois")
    {
        tax_rate = 0.008;
    }

   /* if(state == "Wisconsin")
    {
        string country;
        cout<<"What state do you live in ? ";
        getline(cin, country);
    if(country == "Eau Claire")
    {
        tax_rate += 0.005;
    }
    else if(country == "Dunn")
    {
        tax_rate += 0.004;
    }
} 
*/

tax = orderamount * tax_rate;
total = orderamount + tax;

cout<< "The tax is : $" << " " << tax << endl;
cout<< "The total is : $" << " " << total << endl;

return 0;
}