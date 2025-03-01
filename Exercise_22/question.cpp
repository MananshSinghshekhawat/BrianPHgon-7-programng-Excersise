/*
Comparing one input to a known value is common enough,
but you’ll often need to process a collection of inputs.
Write a program that asks for three numbers. Check first to
see that all numbers are different. If they’re not different,
then exit the program. Otherwise, display the largest number
of the three.
Example Output
Enter the first number: 1
Enter the second number: 51
Enter the third number: 2
The largest number is 51.
*/

#include<iostream>
using namespace std;

int main()
{
    int num1 , num2 , num3;

    std::cout<<"Enter the first number : ";
    std::cin>>num1;

    std::cout<<"Enter the second number : ";
    std::cin>>num2;

    std::cout<<"Enter the third number : ";
    std::cin>>num3;

    if(num1 >= num2 && num1 >= num3)
    {
       std::cout<<"The largest number is first number  : " << num1 ; 
      }
      else if(num2 >= num1  && num2 >= num3)
      {
        std::cout<<"The largest number is second number :" << num2;
      } else if(num3 >= num2 && num3 >= num1)
      {
        std::cout<<"The largest number is third number : " << num3;
      }

      return 0;

}