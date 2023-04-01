#include <iostream>
using namespace std;

class person
{
    protected:
        char name[40];
    public:
        void setName()
        {
            cout << "Enter Name: ";
            cin >> name;
        }

        void printName()
        {
            cout << name << endl;
        }

};

int main(void)
{
    person *ptr[100];
    int n = 0;
    char choice;

    do{
        ptr[n] = new person;
        ptr[n]->setName();
        n++;
        cout << "Enter y/n ";
        cin >> choice;
    }while (choice == 'y');

    for (int i = 0; i < n; i++)
    {
        ptr[i]->printName();
        delete ptr[i]
    }
    cout << endl;
    return (0);
}