#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Vehicle.h"
#include "Owner.h"

using namespace std;

void display_menu(void) 
{
    cout << "Welcome to DVLA database\n";
    cout << "**************************\n";
    cout << "1. Enter details\n";
    cout << "2. Display vehicle/Owner details\n";
    cout << "3. Search vehicle details by number plate\n";
    cout << "4. Renew license\n";
    cout << "5. Exit\n";
}

string generate_num_plate(void)
 {
    string num_plate = "ABC-";
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        num_plate += to_string(rand() % 10);
    }
    return num_plate;
}

void enter_details(vector<Owner>& records) 
{
    string brand, model, year_str, name, address, phone_number;
    string num_plate = generate_num_plate();
    time_t now = time(NULL);
    struct tm* expiration_date = localtime(&now);
    expiration_date->tm_year += 3; // add 3 years to expiration date

    cout << "Enter Vehicle Brand: ";
    cin.ignore();
    getline(cin, brand);
    cout << "Enter model: ";
    getline(cin, model);
    cout << "Enter year of Registration: ";
    getline(cin, year_str);
    int year = stoi(year_str);

    cout << "Enter owner name: ";
    getline(cin, name);
    cout << "Enter owner address: ";
    getline(cin, address);
    cout << "Enter owner phone number: ";
    getline(cin, phone_number);

    Owner record(num_plate, brand, model, year, name, address, phone_number);
    record.set_expiration_date(*expiration_date);
    records.push_back(record);

    cout << "Record added. Number plate: " << num_plate << "\n";
    cout << "Expiration date: " << asctime(expiration_date) << "\n";
}

void renew_license(vector<Owner>& records)
 {
    string search_plate;
    bool found = false;

    cout << "Enter number plate to renew license: ";
    cin >> search_plate;

    for (auto& record : records) {
        if (record.get_num_plate() == search_plate) {
            found = true;
            time_t now = time(NULL);
            struct tm* expiration_date = localtime(&now);
            expiration_date->tm_year += 3; // add 3 years to expiration date
            record.set_expiration_date(*expiration_date);
            cout << "License renewed for number plate: " << search_plate << "\n";
            cout << "New expiration date: " << asctime(expiration_date) << "\n";
            break;
        }
    }

    if (!found) {
        cout << "Record not found.\n";
    }
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

    if (!found) 
    {
        cout << "Record not found.\n";
    }
}

int main(void) {
    vector<Owner> records;

    while (true) 
    {
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
                renew_license(records);
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}