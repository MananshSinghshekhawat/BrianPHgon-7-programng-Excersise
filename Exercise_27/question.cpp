/*
Write a program that prompts for a first name, last name,
employee ID, and ZIP code. Ensure that the input is valid
according to these rules:
• The first name must be filled in.
• The last name must be filled in.
• The first and last names must be at least two characters
long.
• An employee ID is in the format AA-1234. So, two letters, a hyphen, and four numbers.
• The ZIP code must be a number.
Display appropriate error messages on incorrect data.
Example Output
Enter the first name: J
Enter the last name:
Enter the ZIP code: ABCDE
Enter an employee ID: A12-1234
"J" is not a valid first name. It is too short.
The last name must be filled in.
The ZIP code must be numeric.
A12-1234 is not a valid ID.
Or
Enter the first name: Jimmy
Enter the last name: James
Enter the ZIP code: 55555
Enter an employee ID: TK-421
There were no errors found.
*/

#include<iostream>
#include<string>
#include<cctype>
#include<regex>

using namespace std;

bool validemployeeid(const string& employeeid)
{
    regex pattern("^[A-Za-z]{2}-\\d{4}$");
    return regex_match(employeeid, pattern);
}


bool isNumeric(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main()
{
    string firstname;
    string lastname;
    string employeeid;
    string zipcode;

    std::cout<<"Enter the first name :";
    std::getline(cin , firstname);

    std::cout<<"Enter the lastname :";
    std::getline(cin , lastname);

    std::cout<<"Enter the zip code :";
    std::getline(cin , zipcode);

    std::cout<<"Enter an employee id :";
    std::getline(cin , employeeid);

    bool error = false;

    if(firstname.empty())
    {
        std::cout<<"The first name must be filled in."<<endl;
        error = true;
    }

    if(firstname.length() < 2)
    {
        std::cout << "\"" << firstname << "\" is not a valid first name. It is too short." << endl;
         error = true;
   }

   if(lastname.empty())
   {
    std::cout<<"The last name must be filled in. " <<endl;
     error = true;
   }
   if(lastname.length() < 2)
   {
    std::cout << "\"" << lastname << "\" is not a valid last name. It is too short." << endl;
         error = true;
   }
   if(isNumeric(zipcode))
   {
    std::cout<<" The " << zipcode << "must be numeric." <<endl;
     error  = true;
   }
   if(!validemployeeid(employeeid))
   {
    std::cout<< employeeid << "is not a valid id ."<<endl;
     error = true;
   }

   if(error)
   {
    std::cout<<"There were no errors found.";
   }

   return 0;
   
}


