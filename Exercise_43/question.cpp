/*
Programming languages can create files and folders too.
Create a program that generates a website skeleton with the
following specifications:
• Prompt for the name of the site.
• Prompt for the author of the site.
• Ask if the user wants a folder for JavaScript files.
• Ask if the user wants a folder for CSS files.
• Generate an index.html file that contains the name of the
site inside the <title> tag and the author in a <meta> tag.
Example Output
Site name: awesomeco
Author: Max Power
Do you want a folder for JavaScript? y
Do you want a folder for CSS? y
Created ./awesomeco
Created ./awesomeco/index.html
Created ./awesomeco/js/
Created ./awesomeco/css/
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string SiteName;
    string SiteAuthor;
    string answer;
    
    std::cout<<" Site name: ";
    cin >> SiteName;
    
    std::cout<<" Author:  ";
    cin >> SiteAuthor;
    
    
    std::cout<<" Do you want a folder for JavaScript?" ;
    cin >>  answer;
    
    if(answer == "y"){
        cout<<"Do you want a folder for CSS? ";
        cin >> answer;
    }
    else {
        cout<<"Waiting try after some time ";
    }
    
    
}