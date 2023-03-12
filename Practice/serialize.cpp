#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class MyObject {
public:
   string x;
    string y;

    // serialize object to output stream
    friend ostream& operator<<(ostream& os, const MyObject& obj) {
        os << obj.x << " " << obj.y;
        return os;
    }

    // deserialize object from input stream
    friend istream& operator>>(istream& is, MyObject& obj) {
        is >> obj.x >> obj.y;
        return is;
    }
};

int main() {
    MyObject obj{"Hello", "Yaw"};

    // serialize object to file
    ofstream file("data.txt");
    file << obj;
    file.close();

    // deserialize object from file
    ifstream infile("data.txt");
    MyObject new_obj;
    infile >> new_obj;

    // print deserialized object
    cout << new_obj.x << " " << new_obj.y << endl;
    return 0;
}
