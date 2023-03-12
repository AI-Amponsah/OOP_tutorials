#include <iostream>
#include <string>
using namespace std;

class Owner
{
    private:
        struct owner
        {
            string name;
            string address;
            string phone_number;

            void print()
            {
                 cout << "Name of current owner is: " <<  name << endl;
                 cout << "Address of current owner: " << address << endl;
		 cout << "Telephone number of owner: " << phone_number << endl;
            }
        };
    public:
        void set_owner(string name, string address, string number)
        { 
            owner s;
            s.name = name;
            s.address = address;
	    s.phone_number = number;
            s.print();     
        }


};

int main(void)
{
    Owner owner1;
    string name, address, number;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter address: ";
    cin >> address;
    cout << "Enter Phone Number: ";
    cin >> number;
    cout << endl;
    
    owner1.set_owner(name, address, number);
    return (0);
}
