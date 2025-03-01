/*
Create a program that compares two strings and determines
if the two strings are anagrams. The program should prompt
for both input strings and display the output as shown in
the example that follows.
Example Output
Enter two strings and I'll tell you if they
are anagrams:
Enter the first string: note
Enter the second string: tone
"note" and "tone" are anagrams.
*/

#include<iostream>
#include<string>
#include<algorithm> // use of  sort function  by using the algorithm //
using namespace std;

void anagrams()
{
    string first , second;

    std::cout<<"Enter two strings and I'll tell you if they \n are anagrams:" << endl;

    std::cout<<"Enter the first string : ";
    std::cin>>first;

    std::cout<<"Enter the second string : ";
    std::cin>>second;

      sort(first.begin() , first.end());
      sort(second.begin(), second.end());


    if (first == second) {
        cout << "\"" << first << "\" and \"" << second << "\" are anagrams.\n";
    } else {
        cout << "\"" << first << "\" and \"" << second << "\" are not anagrams.\n";
    }
}

int main()
{
    anagrams();
    return 0;
}