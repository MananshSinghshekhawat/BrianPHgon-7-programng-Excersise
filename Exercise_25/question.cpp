/*
Functions help you abstract away complex operations, but
they also help you build reusable components.
Create a program that determines the complexity of a given
password based on these rules:
• A very weak password contains only numbers and is
fewer than eight characters.
• A weak password contains only letters and is fewerthan
eight characters.
• A strong password contains letters and at least one
number and is at least eight characters.
• A very strong password contains letters, numbers, and
special characters and is at least eight characters.
Example Output
The password '12345' is a very weak password.
The password 'abcdef' is a weak password.
The password 'abc123xyz' is a strong password.
The password '1337h@xor!' is a very strong password.

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool Number(const string& str) {
    for (char ch : str) {
        if (isdigit(ch)) {
            return true;
        }
    }
    return false;
}

bool SpecialCharacter(const string& str) {
    for (char ch : str) {
        if (!isalnum(ch)) {
            return true;
        }
    }
    return false;
}

string checkPasswordStrength(const string& password) {
    if (password.length() < 8) {
        if (Number(password)) {
            return "A very weak password"; 
        } else {
            return "A weak password"; 
        }
    } else {
        bool containsLetters = false;
        bool containsNumbers = false;
        bool containsSpecial = false;
        
        for (char ch : password) {
            if (isalpha(ch)) {
                containsLetters = true;
            } else if (isdigit(ch)) {
                containsNumbers = true;
            } else {
                containsSpecial = true;
            }
        }

        if (containsLetters && containsNumbers && containsSpecial) {
            return "A very strong password"; 
        } else if (containsLetters && containsNumbers) {
            return "A strong password"; 
        } else if (containsLetters) {
            return "A weak password"; 
        }
    }
    
    return "Unknown password strength";
}

int main() {
    string password;

    cout << "Enter a password: ";
    cin >> password;

    string result = checkPasswordStrength(password);
    cout << "The password '" << password << "' is " << result << "." << endl;

    return 0;
}
