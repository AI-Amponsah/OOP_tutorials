#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

class Vehicle {
private:
    string num_plate;
    string brand;
    string model;
    int year;

public:
    Vehicle(string np, string br, string mo, int yr);
    string get_num_plate() const;
    void print() const;
};

#endif
