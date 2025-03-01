/*
Write a program that prompts the userforfive numbers and
computes the total of the numbers.
Example Output
Enter a number: 1
Enter a number: 2
Enter a number: 3
Enter a number: 4
Enter a number: 5
The total is 15
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int  number;
    int sum = 0;

    for(int i = 0; i < 5; i++ )
    {
        std::cout<<"Enter the number :";
        std::cin>>number;

        sum += number;
    }

    std::cout<<"The total sum is " << sum;
    return 0;
}