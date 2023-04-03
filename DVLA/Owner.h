#ifndef OWNER_H // include guards
#define OWNER_H

//  header files for the class
#include <ctime>
#include <string>
#include "vehicle.h"

// Using the standard namespace
using namespace std;

//  "Owner" class, which is a subclass of the "Vehicle" class
class Owner : public Vehicle
 {
private:
    // Declaring private member variables for the owner's name, address, phone number, and expiration date of their license
    string name;
    string address;
    string phone_number;
    struct tm expiration_date;

public:
    // Declaring a constructor that takes in parameters for the license plate number, brand, model, year, name, address, and phone number of the owner
    Owner(string np, string br, string mo, int yr, string n, string addr, string phone);
    
    // Declaring a function to set the expiration date of the owner's license
    void set_expiration_date(struct tm date);
    
    // Declare a function to print the details of the owner
    void print() const;
};

// Ending the header guard
#endif
