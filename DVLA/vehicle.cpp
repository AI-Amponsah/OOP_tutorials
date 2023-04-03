#include "vehicle.h"
using namespace std;

/**Constructor for the "Vehicle" class that takes in parameters for the license plate number, 
    brand, model, and year */
Vehicle::Vehicle(string np, string br, string mo, int yr) 
{
    num_plate = np;
    brand = br;
    model = mo;
    year = yr;
}

// Acessor function for the license plate number of the vehicle
string Vehicle::get_num_plate() const {
    return num_plate;
}

// Function to print the details of the vehicle
void Vehicle::print() const {
    cout << "Number plate: " << num_plate << std::endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}
