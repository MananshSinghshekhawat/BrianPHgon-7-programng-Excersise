/*
Alphabetizing the contents of a file, or sorting its contents,
is a great way to get comfortable manipulating a file in your
program.
Create a program that reads in the following list of names:
Ling, Mai
Johnson, Jim
Zarnecki, Sabrina
Jones, Chris
Jones, Aaron
Swift, Geoffrey
Xiong, Fong
Read this program and sort the list alphabetically. Then print
the sorted list to a file that looks like the following example
output.
Example Output
Total of 7 names
-----------------
Ling, Mai
Johnson, Jim
Jones, Aaron
Jones, Chris
Swift, Geoffrey
Xiong, Fong
Zarnecki, Sabrina
*/



#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    ifstream inputfile("name.txt");
    fstream outputfile("sorteddname.txt");

    if(!inputfile)
    {
        cout << "error:" << endl;
        return 1;
    }

    vector <string> name;
    string line;

    while (getline(inputfile, line)) {
        name.push_back(line);
    }
    
    inputfile.close();
    
    sort(name.begin(), name.end());
    
    outputfile << "Total of " << name.size() << " names\n";
    outputfile << "-----------------\n";
    
    for (const string& name : name) {
        outputfile << name << "\n";
    }
    
    outputfile.close();
    
    cout << "Sorted names written to sorted_names.txt" << endl;
    
    return 0;
}

