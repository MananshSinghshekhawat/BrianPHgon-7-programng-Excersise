
/*
Create a program thatreads in a file and counts the frequency of words in the file. Then construct a histogram displaying
the words and the frequency, and display the histogram to
the screen.
Example Output
Given the text file words.txt with this content
badger badger badger badger mushroom mushroom
snake badger badger badger
the program would produce the following output:
badger: *******
mushroom: **
snake: *
Constraint
*/


#include<iostream>
#include<fstream>
#include<string>
#include<map>

using namespace std;
int main()
{

    ifstream file("words.txt");
    
    if(!file)
    {
        std::cout<<"error";
        return 1;
    }
    
    

    map<string , int > wordcount;
    string word , filecontent   ;

    while(file >> word)
    {
        wordcount[word]++;
        filecontent += word + " " ;
    }
    cout<< filecontent << endl;
     file.close();
     
     
     cout<<"Given the text file with " << filecontent << "with this content ";
     cout <<" wordfrequencies : \n";
    

    for(const auto &pair : wordcount)
    {
        std::cout<<pair.first << "  " << pair.second   << endl;
    }

    return 0;
   

}
