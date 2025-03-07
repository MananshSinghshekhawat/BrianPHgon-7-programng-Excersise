/*
Arrays are great for storing possible responses from a program. If you combine that with a random number generator,
you can pick a random entry from this list, which works
great for games.
Create a Magic 8 Ball game that prompts for a question and
then displays either “Yes,” “No,” “Maybe,” or “Ask again
later.”
Example Output
What's your question? Will I be rich and famous?
Ask again later.
*/

#include<iostream>
#include<string>
#include<ctime>

using namespace std;
int main()
{
    string answer[] = {"Yes" , "No" , "Maybe" ,"Ask me later"};
    
    int numanswer = 4;
    srand(time(0));
    
    string question;
    
    cout<<"What's your question ?";
    getline(cin ,question);
    
    int randomindex = rand() % numanswer;
    cout<< answer[randomindex] <<endl;
    return 0;   
}