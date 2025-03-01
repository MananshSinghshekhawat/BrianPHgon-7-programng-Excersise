/*
An expert system is a type of artificial intelligence program
that uses a knowledge base and a set of rules to perform a
task that a human expert might do. Many websites are
available that will help you self-diagnose a medical issue by
answering a series of questions. And many hardware and
software companies offer online troubleshooting tools to
help people solve simple technical issues before calling a
human.
Create a program that walks the user through troubleshooting issues with a car. Use the following decision tree to build
the system:
Example Output
Is the car silent when you turn the key? y
Are the battery terminals corroded? n
The battery cables may be damaged.
Replace cables and try again.
*/

#include<iostream>
#include<string>

using namespace std;

void troubleshooting()
{
    string answer;

    
    cout << "Is the car silent when you turn the key? (y/n): ";
    cin >> answer;

    if (answer == "y") {  
        cout << "Are the battery terminals corroded? (y/n): ";
        cin >> answer;

        if (answer == "y") {  
            cout << "Clean terminals and try starting again." << endl;
        } else {  
            cout << "The battery cables may be damaged." << endl;
            cout << "Replace cables and try again." << endl;
        }

    } else {  
        cout << "Does the car make a clicking noise? (y/n): ";
        cin >> answer;

        if (answer == "y") {  
            cout << "Replace the battery." << endl;
        } else { 
            cout << "Does the car crank up but fail to start? (y/n): ";
            cin >> answer;

            if (answer == "y") {  
                cout << "Check spark plug connections." << endl;
            } else {  
                cout << "Does the engine start and then die? (y/n): ";
                cin >> answer;

                if (answer == "y") {  
                    cout << "Does your car have fuel injection? (y/n): ";
                    cin >> answer;

                    if (answer == "y") {  
                        cout << "Get it in for service." << endl;
                    } else {  
                        cout << "Check to ensure the choke is opening and closing." << endl;
                    }
                }
            }
        }
    }
}

int main() {
    troubleshooting();  
    return 0;
}
