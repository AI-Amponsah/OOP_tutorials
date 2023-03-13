#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Owner {
    private:
        string name_;
        string address_;
    public:
        Owner(string name, string address) : name_(name), address_(address) {}

        void print() {
            cout << "Name: " << name_ << endl;
            cout << "Address: " << address_ << endl;
        }
};

class Vehicle : public Owner {
    private:
        string brand_;
        string model_;
        string num_plate_;
    public:
        Vehicle(string brand, string model, string num_plate, string name, string address)
            : Owner(name, address), brand_(brand), model_(model), num_plate_(num_plate) {}

        void set_numplate()
        {
            
            
            srand(time(NULL)); 
            int rand_num = rand() % 10000 + 1000; 
            num_plate_ = "ABC " + to_string(rand_num); 
            
        }

        void print()
        {
            Owner::print();
            cout << "Brand: " << brand_ << endl;
            cout << "Model: " << model_ << endl;
            cout << "Number Plate: " << num_plate_ << endl;
        }
};


int main(void) 
{
    string owner_name, owner_address, vehicle_brand, vehicle_model;
    
    cout << "Enter owner's name: ";
    getline(cin, owner_name);
    cout << "Enter owner's address: ";
    getline(cin, owner_address);
    Owner owner(owner_name, owner_address);

    cout << "Enter vehicle brand: ";
    getline(cin, vehicle_brand);
    cout << "Enter vehicle model: ";
    getline(cin, vehicle_model);

    Vehicle car1(vehicle_brand, vehicle_model, "", owner_name, owner_address);
    car1.set_numplate();
    car1.print();
    
    return 0;
}
