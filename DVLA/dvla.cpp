#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Owner {
    private:
        struct Item {
            string name;
            string address;
        } item_;
    public:
        Owner(string name, string addr) {
            item_.name = name;
            item_.address = addr;
        }
        
        void print() {
            cout << "Name: " << item_.name << endl;
            cout << "Address: " << item_.address << endl;
        }  
};

class Vehicle {
    private:
        string brand_;
        string model_;
        string num_plate_;
        Owner owner_;
    public:
        Vehicle(string brand, string model, string num_plate, Owner owner)
            : brand_(brand), model_(model), num_plate_(num_plate), owner_(owner) {}

        void set_details()
        {
            string name, address;
            cout << "Enter owner's name: ";
            cin >> name;
            cout << "Enter owner's address: ";
            cin >> address;
            owner_ = Owner(name, address);
            
            cout << "Enter brand: ";
            cin >> brand_;
            cout << "Enter model: ";
            cin >> model_;
            cout << "Enter number plate: ";
            cin >> num_plate_;
            cout << endl;
        }
        
        void print()
        {
            owner_.print();
            cout << "Brand: " << brand_ << endl;
            cout << "Model: " << model_ << endl;
            cout << "Number Plate: " << num_plate_ << endl;
        }     
};

int main(void) 
{
    string owner_name, owner_address, vehicle_brand, vehicle_model, vehicle_num_plate;
    
    cout << "Enter owner's name: ";
    getline(cin, owner_name);
    cout << "Enter owner's address: ";
    getline(cin, owner_address);
    Owner owner(owner_name, owner_address);

    cout << "Enter vehicle brand: ";
    getline(cin, vehicle_brand);
    cout << "Enter vehicle model: ";
    getline(cin, vehicle_model);
    cout << "Enter vehicle number plate: ";
    getline(cin, vehicle_num_plate);
    Vehicle car1(vehicle_brand, vehicle_model, vehicle_num_plate, owner);
    
    car1.print();
    
    return 0;
}
