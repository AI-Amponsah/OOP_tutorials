#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// Include the header files for the Vehicle and Owner classes
#include "Vehicle.h"
#include "Owner.h"

using namespace std;

// Function to display the main menu
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

// Function to generate a random number plate
string generate_num_plate(void)
{
    string num_plate = "ABC-";
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        num_plate += to_string(rand() % 10);
    }
    return num_plate;
}

// Function to enter vehicle and owner details
void enter_details(vector<Owner>& records) 
{
    // Variables to store user input
    string brand, model, year_str, name, address, phone_number;

    // Generate a random number plate
    string num_plate = generate_num_plate();

    // Get the current time
    time_t now = time(NULL);

    // Add 3 years to the current time to get the expiration date
    struct tm* expiration_date = localtime(&now);
    expiration_date->tm_year += 3;

    // Get input from the user
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

    // Create a new Owner object with the input data and the generated number plate
    Owner record(num_plate, brand, model, year, name, address, phone_number);

    // Set the expiration date for the new record
    record.set_expiration_date(*expiration_date);

    // Add the new record to the vector of records
    records.push_back(record);

    // Print the number plate and expiration date for the new record
    cout << "Record added. Number plate: " << num_plate << "\n";
    cout << "Expiration date: " << asctime(expiration_date) << "\n";
}

// Function to renew the license for a vehicle
void renew_license(vector<Owner>& records)
{
    // Variable to store the user's search query
    string search_plate;
    bool found = false;

    // Get the number plate to search for from the user
    cout << "Enter number plate to renew license: ";
    cin >> search_plate;

    // Search through the vector of records for the given number plate
    for (auto& record : records) {
        if (record.get_num_plate() == search_plate) {
            found = true;

            // Get the current time
            time_t now = time(NULL);

            // Add 3 years to the current time to get the new expiration date
            struct tm* expiration_date = localtime(&now);
            expiration_date->tm_year += 3;

            // Set the new expiration date for the record
            record.set_expiration_date(*expiration_date);

            // Print the updated expiration
            cout << "License renewed for number plate: " << search_plate << "\n";
            cout << "New expiration date: " << asctime(expiration_date) << "\n";
            break;
        }
    }

    if (!found) {
        cout << "Record not found.\n";
    }
}

// Function to display details of all records in the vector
void display_details(const vector<Owner>& records) {
    // Iterate through each record in the vector
    for (const auto& record : records) {
        // Print the details of the current record
        record.print();
        // Print a new line
        cout << endl;
    }
}
/** This function takes a vector of Owner objects as input and searches for 
a specific record based on the number plate entered by the user.
*/
void search_details(const vector<Owner>& records) 
{
    string search_plate; // variable to hold the number plate entered by the user
    bool found = false; // flag variable to indicate whether the record was found or not
// Prompt the user to enter the number plate to search for
    cout << "Enter number plate to search for: ";
    cin >> search_plate;
// Loop through the records vector to search for the record with the entered number plate
    for (const auto& record : records) {
        if (record.get_num_plate() == search_plate) // check if the current record matches the entered number plate
        {
            found = true; // set the found flag to true
            cout << "Record found.\n";
            record.print();  // print the details of the found record
            break; // exit the loop once the record has been found
        }
    }
// If the record was not found, display a message to the user
    if (!found) 
    {
        cout << "Record not found.\n";
    }
}
// main / entry point function that runs the program
// Main function of the program
int main(void) {
    // Declare a vector called "records" to store Owner objects
    vector<Owner> records;
    
    // Loop until the user chooses to exit the program
    while (true) 
    {
        // Display the main menu and get the user's choice
        display_menu(); 
        
        // Declare an integer variable "choice" to store the user's choice
        int choice;
        
        // Read in the user's choice from the standard input stream
        cin >> choice;

        //  switch statement to handle the different options based on the user's choice
        switch (choice) {
            case 1:
                // Call to the function "enter_details()" to allow the user to enter details for a new owner
                enter_details(records);
                break;
            case 2:
                // Call the function "display_details()" to display all the details of each owner in the "records" vector
                display_details(records);
                break;
            case 3:
                // Call to the function "search_details()" to allow the user to search for an owner based on their name or license plate number
                search_details(records);
                break;
            case 4:
                // Call  to the function "renew_license()" to allow the user to renew the license of a specific owner
                renew_license(records);
                break;
            case 5:
                // Display a message and terminate the program
                cout << "Exiting program.\n";
                return 0;
            default:
                // If the user enters an invalid choice, print an error message and prompt the user to try again
                cout << "Invalid choice. Please try again.\n";
        }
    }

    // Return 0 to indicate successful completion of the program
    return 0;
}
