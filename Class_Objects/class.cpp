#include <iostream>
using namespace std;

/**
 * classes act as blueprints used to instantiate objects
 * An object comprises of a data part and  a member function
*/

class smallOBj
{
    private:
     int data;
    public:
        string name;
        int age;
        void print()
        {
            cout  << name << endl;

        }
};

int main(void)
{
    smallOBj person;
    person.name = "Isaac";
    person.age = 98;
    //person.data = 1000;  // Trying to acess a private member 

    person.print();

    return (0);
}