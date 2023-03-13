#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void Owner_inputs();
void display();
class Owner
{
    private:
        struct owner
        {
            string name;
            string address;
            string phone_number;

            void serialize()
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
            s.serialize();     
        }

        void Owner_inputs()
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
        }

        void display()
        {
            ifstream ifs("json.txt");
            string data;
            while(ifs.good())
            {
                ifs >> data ;
                if (ifs.good())
                {
                    cout  << data.size();
                    cout << " ";
                }
            }
            cout << endl;
            ifs.close();

}
};
class Vehicle : public Owner 
{
    private:
        string  brand;
        string model;
        string number;
    
    public:
        void car_details()
        {
            cout << "Enter brand: ";
            cin >> brand;
            cout << "Enter model: ";
            cin >> model;
            //cout << "Enter Phone Number: ";
            //cin >> number;
        }
   
};

int main(void)
{
    Vehicle person;
    person.display();
    person.Owner_inputs();
    person.car_details();
    return (0);
}


