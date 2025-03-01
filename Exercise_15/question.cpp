/*
Passwords are validated by comparing a user-provided
value with a known value that’s stored. Either it’s correct or
it’s not.
Create a simple program that validates userlogin credentials.
The program must prompt the user for a username and
password. The program should compare the password given
by the user to a known password. If the password matches,
the program should display “Welcome!” If it doesn’t match,
the program should display “I don’t know you.”
Example Output
What is the password? 12345
I don't know you.
Or
What is the password? abc$123
Welcome
*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
     std::string storedpassward ="manansh12345";
     std::string passward;

    std::cout<<"what is the passward ?";
    std::cin>> passward;

    if( storedpassward == passward) {

        std::cout<<"Welcome";
    } else{
        std::cout<<"I don't know the passward";
    }
    return 0;
}