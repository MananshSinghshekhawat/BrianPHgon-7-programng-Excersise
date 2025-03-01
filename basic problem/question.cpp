#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main()
{
    double billamount , rate, total , tip ;

    std::cout<<"What is the bill ? ";
    std::cin >> billamount;

    std::cout<<"What is the  tip rate (in percentage) ? ";
    std::cin >> rate;   

    tip = (rate * 100) / billamount;
    total = tip + billamount;

    std::cout<<"The tip is $ " << " " << tip << endl;
    std::cout<<"The total is $ " << " " << total << endl;

    return 0;

}