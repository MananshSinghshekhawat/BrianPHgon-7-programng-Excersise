/*

Sometimes you have to round up to the next number rather
than follow standard rounding rules.
Calculate gallons of paint needed to paint the ceiling of a
room. Prompt for the length and width, and assume one
gallon covers 350 square feet. Display the number of gallons
needed to paint the ceiling as a whole number.
Example Output
You will need to purchase 2 gallons of
paint to cover 360 square feet.
Remember, you can’t buy a partial gallon of paint. You must
round up to the next whole gallon. 
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double length , width ; 
    const double onegalloncovers  = 350;
    
    std::cout<<"What is the length of the celling in the feet";
    std::cin >> length;

    std::cout<<"What is the width of the celling in the feet";
    std::cin >> width;

    int area = length * width ; 
    int totalgallon = ceil(area / onegalloncovers);

    std::cout<<"You will need to purchase " << " " << totalgallon << " " << "gallons of paint to cover " << " "
 << area << " " << "square feet" ; 

 return 0;

}