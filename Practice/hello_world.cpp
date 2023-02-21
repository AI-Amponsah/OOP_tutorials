#include <iostream>
using namespace std;

int main(void)
{
    int age, a ,b;
    int sum = 0;
    cout << "Hello World!" << endl;
    char c = 'A';
    cout << c << endl ;

    //int age;
    cout << "Enter your age: " ;
    cin >> age;
    cout <<"Your age is " << age <<"." << endl;

    cout << "Enter first number: "<< endl;
    cin >> a;
    cout << "Enter seconf number: "<< endl;
    cin >> b;

    sum =  a + b;
    cout << "The sum is: " << sum << endl;
    return (0);
}