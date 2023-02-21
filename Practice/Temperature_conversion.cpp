#include <iostream>


using namespace std;

/***
 * Write a program that allows the user to enter a floating-point number 
 *representing degrees Celsius, and then displays the corresponding degrees 
 *Fahrenheit. 
*/

int main(void)
{
    float tempearture;

    cout << "Enter a temperature in degree Celsius: ";
    cin >> tempearture;

    tempearture = (tempearture * 9/5) + 32;
    cout << "Your Equivalent Temperature in Fahrenheit is: " << tempearture << endl;

    
    return (0);
}