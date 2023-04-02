#ifndef OWNER_H
#define OWNER_H

#include <ctime>
#include <string>
#include "vehicle.h"

using namespace std;

class Owner : public Vehicle {
private:
    string name;
    string address;
    string phone_number;
    struct tm expiration_date;

public:
    Owner(string np, string br, string mo, int yr, string n, string addr, string phone);
    void set_expiration_date(struct tm date);
    void print() const;
};

#endif
