/*
Statistics is important in ourfield. When measuring response
times or rendering times, it’s helpful to collect data so you
can easily spot abnormalities. For example, the standard
deviation helps you determine which values are outliers and
which values are within normal ranges.
Write a program that prompts for response times from a
website in milliseconds. It should keep asking for values
until the user enters “done.”
The program should print the average time (mean), the
minimum time, the maximum time, and the standard deviation.
To compute the average (mean)
1. Compute the sum of all values.
2. Divide the sum by the number of values.
To compute the standard deviation
1. Calculate the difference from the mean for each number
and square it.
2. Compute the mean of the squared values.
3. Take the square root of the mean.
Example Output
Enter a number: 100
Enter a number: 200
Enter a number: 1000
Enter a number: 300
Enter a number: done
Numbers: 100, 200, 1000, 300
The average is 400.
The minimum is 100.
The maximum is 1000.
The standard deviation is 400.25.
*/


#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

bool isnumber(const string  &s)
{
    for(char ch : s)
    {
        if(!isdigit(ch))
        {
            return false;
        }
    }
    return true ;
}

int main()
{
    vector <int> number;
    string input;

    for(int i = 0; i < 6; i++)
    {
        std::cout<<"Enter a number : " ;
        std::cin >> input;
        if(input == "done")
        {
            break;
        }
    if(isnumber(input))
    {
        number.push_back(stoi(input));
    }
    }
    cout<<"Numbers : " ;
    for(int num : number)
    {
        std::cout<< num << " " ;
    }

    cout<<endl;

    int sum = 0;
    int minimum = number[0];
    int maximum = number[0];
    for(int num : number)
    {
        sum += num;
        if(num < minimum)
        minimum = num;
        if(num > maximum)
        maximum = num;
    }

    double average = static_cast<double>(sum)/number.size();

    std::cout<<"The average is : " << average << endl;
    std::cout<<"The minimum is : " << minimum << endl;
    std::cout<<"The maximum is : " << maximum << endl;

    return 0;
}