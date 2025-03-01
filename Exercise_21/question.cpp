/*
Many programs display information to the end user in one
form but use a different form inside the program. For
example, you may show the word Blue on the screen, but
behind the scenes you’ll have a numerical value for that
color or an internal value because you may need to represent
the textual description in another language for Spanishspeaking visitors.
Write a program that converts a number from 1 to 12 to the
corresponding month. Prompt for a number and display the
corresponding calendar month, with 1 being January and
12 being December. For any value outside thatrange, display
an appropriate error message.
Example Output
Please enter the number of the month: 3
The name of the month is March.
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int month;

    std::cout<<"Please enter the number of the month : ";
    std::cin >> month;

    switch (month)
    {
    case 1 : 
        cout<<"the name of the month is january";
        break;
        case 2:
        cout<<"the name of the month is febuary";
        break;
        case 3:
        cout<<"the name of the month is march";
        break;
        case 4:
        cout<<"the name of the month is april";
        break;
        case 5:
        cout<<"the name of the month is may";
        break;
        case 6:
        cout<<"the name of the month is june";
        break;
        case 7:
        cout<<"the name of the month is july";
        break;
        case 8:
        cout<<"the name of the month is august";
        break;
        case 9:
        cout<<"the name of the month is september";
        break;
        case 10:
        cout<<"the name of the month is octombery";
        break;
        case 11:
        cout<<"the name of the month is november";
        break;
        case 12:
        cout<<"the name of the month is december";
        break;
    
    default:
    cout<<"this is an simple example";
        break;
    }

    return 0;
}