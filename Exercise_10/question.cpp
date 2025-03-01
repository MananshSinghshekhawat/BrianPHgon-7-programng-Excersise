/*
Create a simple self-checkout system. Prompt for the prices
and quantities of three items. Calculate the subtotal of the
items. Then calculate the tax using a tax rate of 5.5%. Print
out the line items with the quantity and total, and then print
out the subtotal, tax amount, and total.
Example Output
Enter the price of item 1: 25
Enter the quantity of item 1: 2
Enter the price of item 2: 10
Enter the quantity of item 2: 1
Enter the price of item 3: 4
Enter the quantity of item 3: 1
Subtotal: $64.00
Tax: $3.52
Total: $67.52
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    const double TAX_RATE = 0.055;
    double price;
    double quantity;
    double subtotal = 0.0;

    for (int i = 0; i < 3; i++) {
        cout << "Enter the price of item " << (i + 1) << ": ";
        cin >> price;
        cout << "Enter the quantity of item " << (i + 1) << ": ";
        cin >> quantity;
        subtotal += price * quantity;
    }

    double tax = subtotal * TAX_RATE;
    double total  = tax + subtotal;

    cout << fixed << setprecision(2);
    cout<<"\n subtotal :" <<  subtotal;
    cout<<"  \n tax :" <<  tax ;
    cout <<" \ntotal :" <<  total ;

    return 0;

}