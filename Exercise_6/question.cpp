/*
Your computer knows what the current yearis, which means
you can incorporate that into your programs. You just have
to figure out how your programming language can provide
you with that information.
Create a program that determines how many years you have
left until retirement and the year you can retire. It should
prompt for your current age and the age you want to retire
and display the output as shown in the example that follows.
Example Output
What is your current age? 25
At what age would you like to retire? 65
You have 40 years left until you can retire.
It's 2015, so you can retire in 2055.
*/

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int age , retireage;

    time_t t = time(0);
    tm* now = localtime(&t);
    int currentyear = now->tm_year + 1900;


    cout<<"What is your current age ? ";
    cin >> age;

    cout<<"At what age would you like to retire ? ";
    cin >> retireage;

    int totalyear = retireage - age;

    if(totalyear > 0)
    {
        int retirementyear = currentyear + totalyear;

        cout <<"You have " << " " << totalyear <<" " << "years left until you can retire. \n";
        cout<<"It's " << " " << currentyear << "  " <<"so you can retire in " << " " << retirementyear;

        return 0;
        
    }
}