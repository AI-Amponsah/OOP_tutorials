#ifndef VEHICLE_H // Include guard 
#define VEHICLE_H

#include <string> 
#include <iostream> 
using namespace std;

class Vehicle
 {
private:
    string num_plate;
    string brand;
    string model;
    int year;

public:
    Vehicle(string np, string br, string mo, int yr); // Constructor for the "Vehicle" class
    string get_num_plate() const; // Accessor Function for the license plate number
    void print() const; // Function to print the details of the vehicle
};

#endif // End of the include guard
