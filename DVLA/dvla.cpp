#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Vehicle {
    private:
        string num_plate;
        string make;
        string model;
        int year;
    public:
        Vehicle(string np, string br, string mo, int yr) {
            num_plate = np;
           brand = br;
            model = mo;
            year = yr;
        }
        string get_num_plate() const {
            return num_plate;
        }
        void print() const {
            cout << "Number plate: " << num_plate << endl;
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }
};

class Owner : public Vehicle {
    private:
        string name;
        string address;
        string phone_number;
    public:
        Owner(string np, string br, string mo, int yr, string n, string addr, string phone) : Vehicle(np, br, mo, yr) {
            name = n;
            address = addr;
            phone_number = phone;
        }
        void print() const {
            Vehicle::print();
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Phone Number: " << phone_number << endl;
        }
};

void display_menu() {
    cout << "Welcome to DVLA database\n";
    cout << "**************************\n";
    cout << "1. Enter  details\n";
    cout << "2. Display vehicle/Owner details\n";
    cout << "3. Search vehicle details by number plate\n";
    cout << "4. Exit\n";
}

string generate_num_plate() {
    string num_plate = "ABC-";
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        num_plate += to_string(rand() % 1000);
    }
    return num_plate;
}

void enter_details(vector<Owner>& records) {
    string make, model, year_str, name, address, phone_number;

    string num_plate = generate_num_plate();

    cout << "Enter make: ";
    getline(cin, make);
    cout << "Enter model: ";
    getline(cin, model);
    cout << "Enter year: ";
    getline(cin, year_str);
    int year = stoi(year_str);

    cout << "Enter owner name: ";
    getline(cin, name);
    cout << "Enter owner address: ";
    getline(cin, address);
    cout << "Enter owner phone number: ";
    getline(cin, phone_number);

    Owner record(num_plate, make, model, year, name, address, phone_number);
    records.push_back(record);

    cout << "Record added.\n";
}


void display_details(const vector<Owner>& records) {
    for (const auto& record : records) {
        record.print();
        cout << endl;
    }
}

void search_details(const vector<Owner>& records) {
    string search_plate;
    bool found = false;

    cout << "Enter number plate to search for: ";
    cin >> search_plate;

    for (const auto& record : records) {
        if (record.get_num_plate() == search_plate) {
            found = true;
            cout << "Record found.\n";
            record.print();
            break;
        }
    }

    if (!found) {
        cout << "Record not found.\n";
    }
}

int main() {
    vector<Owner> records;

    while (true) {
        display_menu();
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                enter_details(records);
                break;
            case 2:
                display_details(records);
                break;
            case 3:
                search_details(records);
                break;
            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
