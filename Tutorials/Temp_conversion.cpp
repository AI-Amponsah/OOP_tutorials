#include <iostream>

using namespace std;

/**
 * Write a temperature-conversion program that gives the user the option of converting 
 * Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion.
*/

int main(void)
{}
    float Fahrenheit;
    float Celsius;
    char choice;

    cout << " Enter F to convert to Fahrenheit and C to Celsius: " ;
    cin >> choice;

    if (choice == 'F')
    {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> Fahrenheit;

        Celsius  =  (Fahrenheit - 32 ) * 5 / 9;

        cout << "Equivalent Temperature in Celsius is: " << Celsius << endl;
    }
    else if (choice == 'C')
    {
        cout << "Enter the temperature in Celsius: ";
        cin >> Celsius;

       Fahrenheit =  (Celsius * 9/5 ) + 32;

        cout << "Equivalent Temperature in Fahrenheit is: " << Fahrenheit << endl;
    }

    return (0);
}