#include "owner.h"
using namespace std;

/**Constructor for the Owner class that takes in parameters for the name, address, 
 * and phone number of the owner,
 as well as the license plate number, brand, model, and year of the vehicle
*/
Owner::Owner(string np, string br, string mo, int yr, string n, string addr, string phone) : Vehicle(np, br, mo, yr)
 {
    // Set the name, address, and phone number of the owner to the values passed in as parameters
    name = n;
    address = addr;
    phone_number = phone;
}

// Function to set the expiration date of the owner's license
void Owner::set_expiration_date(struct tm date) 
{
    expiration_date = date;
}

// Function to print the details of the owner, including their name, address, phone number, and the expiration date of their license
void Owner::print() const 
{
    // Calling the "print" function of the "Vehicle" class to print the license plate number, brand, model, and year of the vehicle
    Vehicle::print();
    
    // Print the name, address, and phone number of the owner
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phone_number << endl;
    
    // Print the expiration date of the owner's license using the "asctime" function to convert the time structure to a string
    cout << "Expiration date: " << asctime(&expiration_date) << endl;
}
