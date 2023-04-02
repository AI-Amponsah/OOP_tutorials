#include "vehicle.h"
using namespace std;

Vehicle::Vehicle(string np, string br, string mo, int yr) 
{
    num_plate = np;
    brand = br;
    model = mo;
    year = yr;
}

string Vehicle::get_num_plate() const {
    return num_plate;
}

void Vehicle::print() const {
    cout << "Number plate: " << num_plate << std::endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}
