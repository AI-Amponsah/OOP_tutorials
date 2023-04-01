#ifndef OWNER_H
#define OWNER_H

#include "Vehicle.h"
#include <string>
using namespace std;

class Owner : public Vehicle {
    private:
        string name;
        string address;
        string phone_number;
    public:
        Owner(string np, string br, string mo, int yr, string n, string addr, string phone);
        void print() const;
};

#endif
