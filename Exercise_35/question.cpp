/*
Arrays don’t have to be hard-coded. You can take userinput
and store it in an array and then work with it.
Create a program that picks a winner for a contest or prize
drawing. Prompt for names of contestants until the user
leaves the entry blank. Then randomly select a winner.
Example Output
Enter a name: Homer
Enter a name: Bart
Enter a name: Maggie
Enter a name: Lisa
Enter a name: Moe
Enter a name:
The winner is... Maggie
*/

#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;

int main()
{
    int i;
    vector<string> names;
    string name;

    for( int i = 0; i <= 5; i++)
    {
        std::cout<<"Enter the name : ";
        std::cin>>name;
        names.push_back(name);
    }

    srand(time(0));

    int randomindex = rand() % names.size();
    std::cout<<"The winner is ....." << names[randomindex] <<endl;
    return 0;
}