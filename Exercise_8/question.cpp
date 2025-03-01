/*
Write a program to evenly divide pizzas. Prompt for the
number of people, the number of pizzas, and the number of
slices per pizza. Ensure that the number of pieces comes out
even. Display the number of pieces of pizza each person
should get. If there are leftovers, show the number of leftover
pieces.
Example Output
How many people? 8
How many pizzas do you have? 2
8 people with 2 pizzas
Each person gets 2 pieces of pizza.
There are 0 leftover pieces.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int  people , pizza , pieceperpizza;
    
    std::cout<<"How many peoples ?";
    std::cin >> people;
    
     std::cout<<"How many pizzas do you have ?";
    std::cin >> pizza;
    
    std::cout<<"How many slices  per pizza";
    std::cin >> pieceperpizza; 
    
     int TotalSlices = pizza * pieceperpizza;
     int SlicePerPerson = TotalSlices / people;
     int Leftoverpicess = TotalSlices % people;
     
     std::cout<<people<< " " <<"people with " << " " << pizza << " " << "pizza " << endl;
     std::cout <<"each person get " << " " << SlicePerPerson <<" " << " pieces of pizza" << endl;
     std::cout <<"there are " << " " << Leftoverpicess << " " << " leftover pieces" <<endl;
     
     return 0;
    
}