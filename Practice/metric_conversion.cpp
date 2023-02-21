#include <iostream>
using namespace std;

/**
 * Assuming there are 7.481 gallons in a cubic foot, write a program that asks 
 *the user to enter a number of gallons, and then displays the equivalent in 
 *cubic feet
*/

int main(void)
{
    float gallons = 7.481;
    float feet;

    cout << "Please Enter number of gallons: " ;
    cin >> feet;

    feet = gallons * feet;
    cout << "Number of gallons per cubic feet is: " << feet << endl;
    return (0);
}