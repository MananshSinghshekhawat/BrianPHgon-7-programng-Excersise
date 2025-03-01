/*
Coming up with a password that meets specific requirements
is something your computer can do. And it will give you
practice using random number generators in conjunction
with a list of known values.
Create a program that generates a secure password. Prompt
the user for the minimum length, the number of special
characters, and the number of numbers. Then generate a
password for the user using those inputs.
Example Output
What's the minimum length? 8
How many special characters? 2
How many numbers? 2
Your password is
aurn2$1s
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;


char randomcharacter(const string& charset) {
    return charset[rand() % charset.size()];
}

int main ()
{

    
string letter = "abcdefghijklmnopqrstuvwxyz";
string number = "1234567890";
string characterspecial = "!@#$%^&*()-_=+[]{};:'\",.<>?/|\\`~"; 


int minimumlength;
int specialcharacter;
int minimumnumber;

cout << "What's the minimum length? ";
cin >> minimumlength;
cout << "How many special characters? ";
cin >> specialcharacter;
cout << "How many numbers? ";
cin >> minimumnumber;


if (minimumlength <  + minimumnumber) {
    cout << "Error: " << (specialcharacter + minimumnumber) << "!" << endl;
    return 1;
}

vector<char> password;

for (int i = 0; i < minimumnumber; i++) {
    password.push_back(randomcharacter(number));
}
for (int i = 0; i < specialcharacter; i++) {
    password.push_back(randomcharacter(characterspecial));
}

int remainingLength = minimumlength - password.size();
    for (int i = 0; i < remainingLength; i++) {
        password.push_back(randomcharacter(letter));
    }

    random_shuffle(password.begin(), password.end());
    string finalPassword(password.begin(), password.end());

    cout << "Your password is: " << finalPassword << endl;
    return 0;

}


