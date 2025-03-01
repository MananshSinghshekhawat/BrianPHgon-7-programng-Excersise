/*
Sometimes data comes in as a structured format that you
have to break down and turn into records so you can process
them. CSV, or comma-separated values, is a common standard for doing this.
Construct a program that reads in the following data file:
Ling,Mai,55900
Johnson,Jim,56500
Jones,Aaron,46000
Jones,Chris,34500
Swift,Geoffrey,14200
Xiong,Fong,65000
Zarnecki,Sabrina,51500
Process the records and display the results formatted as a
table, evenly spaced, as shown in the example output.
Example Output
Last First Salary
-------------------------
Ling Mai 55900
Johnson Jim 56500
Jones Aaron 46000
Jones Chris 34500
Swift Geoffrey 14200
Xiong Fong 65000
Zarnecki Sabrina 51500
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

struct Employee {
    std::string lastname;
    std::string firstname;
    int salary;
};

using namespace std;

int main() {
    ifstream inputfile("data_name.txt"); 
    if (!inputfile) {
        cout << "Error:" << endl;
        return 1;
    }
    
    std::vector<Employee> employees;
    std::string line;
    
    while (getline(inputfile, line)) {
        stringstream ss(line);
        string lastname, firstname, salary;
        
        getline(ss, lastname, ',');
        getline(ss, firstname, ',');
        getline(ss, salary);
        
        Employee emp = {lastname, firstname, stoi(salary)};
        employees.push_back(emp);
    }
    
    inputfile.close();
    

    cout << left << setw(12) << "Last" 
              << setw(12) << "First" 
              << "Salary" << endl;
    cout << "--------------------------------" << endl;
    
    for (const auto& emp : employees) {
        cout << left << setw(12) << emp.lastname
                  << setw(12) << emp.firstname
                  << emp.salary << endl;
    }
    
    return 0;
}
