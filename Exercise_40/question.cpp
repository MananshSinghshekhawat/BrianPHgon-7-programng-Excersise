/*
Sorting records is helpful, but sometimes you need to filter
down the results to find or display only what you’re looking
for.
Given the following data set
First Name Last Name Position Separation date
John Johnson Manager 2016-12-31
Tou Xiong Software Engineer 2016-10-05
Michaela Michaelson District Manager 2015-12-19
Jake Jacobson Programmer
Jacquelyn Jackson DBA
Sally Weber Web Developer 2015-12-18
create a program that lets a userlocate allrecords that match
the search string by comparing the search string to the first
or last name field.
Example Output
Enter a search string: Jac
Results:
Name | Position | Separation Date
--------------------|-------------------|----------------
Jacquelyn Jackson | DBA |
Jake Jacobson | Programmer |

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
     
     string search;
     std::cout<<"Enter a search string : ";
     cin >> search;
     
       
     
     
     bool found = false;
     std::cout<<"\n Result: \n";
     cout<<"Name       |position        | seperationDate \n";
     cout<< "- - - - - -|- - - - - - - - | - - - - - - - - \n";
     
     for(size_t j = 0; j < name.size(); j++)
     {
          string Tempname;
          if (Tempname.find(search) != string::npos) {
            found = true;
            cout << name[j] << " | " << position[j] << " | " << seperationDate[j] << endl;
        }
     }
  
     /* cout << left << setw(25) << "Name" 
         << setw(25) << "Position" 
         << setw(20) << "Separation Date" << endl;
    cout << string(70, '-') << endl;
    
   for(size_t i = 0; i < name.size(); i++ )
   {
       cout << left << setw(25) << name[i] 
             << setw(25) << position[i] 
             << setw(20) << seperationDate[i] << endl;
   }
    
    */
    
    return 0;

}