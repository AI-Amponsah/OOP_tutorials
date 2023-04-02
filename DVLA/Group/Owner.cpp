#include "owner.h"
using namespace std;

Owner::Owner(string np, string br, string mo, int yr, string n, string addr, string phone) : Vehicle(np, br, mo, yr)
 {
    name = n;
    address = addr;
    phone_number = phone;
}

void Owner::set_expiration_date(struct tm date) 
{
    expiration_date = date;
}

void Owner::print() const 
{
    Vehicle::print();
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phone_number << endl;
    cout << "Expiration date: " << asctime(&expiration_date) << endl;
}
