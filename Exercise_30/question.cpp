/*
Create a program that generates multiplication tables for
the numbers 0 through 12.
Example Output
0 X 0 = 0
0 X 1 = 0
...
12 x 11 = 132
12 x 12 = 144
Constraint
• Use a nested loop to complete this program.
*/


#include<iostream>
#include<cmath>
using namespace std;
int  main()
{
    int i , j;
    
    for(int i = 0 ; i <= 12; i++)
    {
        for(int j = i + 1 ; j <= 12; j++)
        {
            cout<< i << "*" << j << "=" << i * j << endl;
            break;
        }
        cout<<endl;
    }
    return 0;
}