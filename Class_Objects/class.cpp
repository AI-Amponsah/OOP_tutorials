#include <iostream>
using namespace std;

/**
 * classes act as blueprints used to instantiate objects
 * An object comprises of a data part and  a member function
*/

class small
{
    private:
     int data;
    public:
        string name;
        int age;
	
	// using set_data to change the value of a private member data
	void set_data(int change_data)
	{
		data = change_data;

	}
	//using get_data to acess the or retun the value of a private data member
	int  get_data()
	{
		return (data);
	}
        void print()
        {
            cout  << name << endl;

        }
};

int main(void)
{
    small person;
    person.name = "Isaac";
    person.age = 98;
    //person.data = 1000;  // Trying to acess a private member 

    person.print();
    person.set_data(1000);

    cout << person.get_data() << endl;

    return (0);
}
