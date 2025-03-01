/*
Given the following data set
First Name Last Name Position Separation date
John Johnson Manager 2016-12-31
Tou Xiong Software Engineer 2016-10-05
Michaela Michaelson District Manager 2015-12-19
Jake Jacobson Programmer
Jacquelyn Jackson DBA
Sally Weber Web Developer 2015-12-18
create a program that sorts all employees by last name and
prints them to the screen in a tabular format.
Example Output
Name | Position | Separation Date
--------------------|-------------------|----------------
Jacquelyn Jackson | DBA |
Jake Jacobson | Programmer |
John Johnson | Manager | 2016-12-31
Michaela Michaelson | District Manager | 2015-12-19
Sally Weber | Web Developer | 2015-12-18
Tou Xiong | Software Engineer | 2016-10-05
*/

#include<iostream>
#include<vector>
#include<iomanip>
#include<string>

using namespace std;
int main()
{
     vector <string> name = {" John Johnson" , " Tou Xiong " , " Michaela Michaelson " , " Jake Jacobson "  ,  " Jacquelyn Jackson ", " Sally Weber "};
     vector <string> position = { " Manager " , "Software Engineer ",     "District Manager " , "Programmer ", " DBA " , " Web Developer " };
    
     vector <string>  seperationDate = { "N/A" , "N/A" , "2015-12-19" , " 2015-12-19 " , " 2015-12-18 " , " 2016-10-05 "};
    
    cout << left << setw(25) << "Name" 
         << setw(25) << "Position" 
         << setw(20) << "Separation Date" << endl;
    cout << string(70, '-') << endl;
    
   for(size_t i = 0; i < name.size(); i++ )
   {
       cout << left << setw(25) << name[i] 
             << setw(25) << position[i] 
             << setw(20) << seperationDate[i] << endl;
   }
    
    
    
    return 0;

}