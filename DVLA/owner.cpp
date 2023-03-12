#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void Owner_inputs();
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
                ofstream outfile("json.txt",ios::out | ios_base::app);
                outfile << name << " " << address << " " << phone_number << endl;
                outfile.close();
                

                /**
                 cout << "Name of current owner is: " <<  name << endl;
                 cout << "Address of current owner: " << address << endl;
		        cout << "Telephone number of owner: " << phone_number << endl;
                */
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
    Owner_inputs();
    
    return (0);
}

void Owner_inputs()
{
    do{
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
    }while(1);
    

}
