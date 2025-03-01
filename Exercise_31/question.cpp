/*
When you loop, you can control how much you increment
the counter; you don’t always have to increment by one.
When getting into a fitness program, you may want to figure
out your target heart rate so you don’t overexert yourself.
The Karvonen heartrate formula is one method you can use
to determine your rate. Create a program that prompts for
your age and your resting heart rate. Use the Karvonen formula to determine the target heart rate based on a range of
intensities from 55% to 95%. Generate a table with the results
as shown in the example output. The formula is
TargetHeartRate = (((220 − age) − restingHR) × intensity) + restingHR
Example Output
Resting Pulse: 65 Age: 22
Intensity | Rate
-------------|--------
55% | 138 bpm
60% | 145 bpm
65% | 151 bpm
: : (extra lines omitted)
85% | 178 bpm
90% | 185 bpm
95% | 191 bpm
*/


#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double restingpulse;
    double age;
    double intensity;
    double rate;
    
    std::cout<<"Resting Pulse : " ;
    std::cin>>restingpulse;
    
    std::cout<<"Age : ";
    std::cin>>age;
    std::cout<<endl;
    
    
     cout << "Intensity | Rate" << endl;
    cout << "----------------|--------" << endl;
    
    //calculate through the formula Target Heart Rate=((Max Heart Rate−Resting Pulse)×Intensity)+Resting Pulse//
    for (int intensity = 55; intensity <= 95; intensity += 5) {
        double targetHeartRate = (((220 - age) - restingpulse) * (intensity / 100.0)) + restingpulse;
        cout << setw(5) << intensity << "%   | " << (targetHeartRate) << " bpm" << endl;
    }
    return 0;
    
}