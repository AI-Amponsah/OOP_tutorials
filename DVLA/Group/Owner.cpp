#include "Owner.h"
#include <iostream>
using namespace std;

Owner::Owner(string np, string br, string mo, int yr, string n, string addr, string phone)
    : Vehicle(np, br, mo, yr) {
    name = n;
    address = addr;
    phone_number = phone;
}

void Owner::print() const {
    Vehicle::print();
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phone_number << endl;
}
