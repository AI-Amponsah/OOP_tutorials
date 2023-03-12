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
            string email;
            void print()
            {
                 cout << name << endl;
                 cout << address << endl;
            }
        };
    public:
        void set_owner(string name, string address)
        { 
            owner s;
            s.name = name;
            s.address = address;
            s.print();     
        }


};

int main(void)
{
    Owner owner1;
    string name, address;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter address: ";
    cin >> address;
    
    owner1.set_owner(name, address);
    return (0);
}
