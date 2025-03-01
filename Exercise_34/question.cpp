/*
Create a small program that contains a list of employee
names. Print out the list of names when the program runs
the first time. Prompt for an employee name and remove
that specific name from the list of names. Display the
remaining employees, each on its own line.
Example Output
There are 5 employees:
John Smith
Jackie Jackson
Chris Jones
Amanda Cullen
Jeremy Goodwin
Enter an employee name to remove: Chris Jones
There are 4 employees:
John Smith
Jackie Jackson
Amanda Cullen
Jeremy Goodwin
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string employee[] = { "John Smith" , "Chris Jones" , "Jackie Jackson" , "Amanda Cullen" , "Jeremy Goodwin" };
    
    int size = 5;
    
    cout<<"There are " << " " << size << " employees \n" ;
    
    for(int i= 0; i < size; i++)
    {
        cout<<employee[i];
        cout<<endl;
    }
    
    int removeindex = 3;
    for(int i = removeindex ; i < size - 1 ; i++)
    {
        employee[i] = employee[ i + 1];
        size--;
    }
    
    cout<<"There are " << size  << " "<< "employee \n";
    
    for(int i = 0; i < size ; i++)
    {
        cout<<employee[i];
        cout<<endl;
    }
    
    
    return 0;
    
    
                         
}