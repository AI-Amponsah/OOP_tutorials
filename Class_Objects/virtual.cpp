#include <iostream>
using namespace std;

class Cpolygon // Base class
{ 
    protected:
        int width, height;
    public:
        void set_values(int a, int b)
        {
            width = a;
            height = b;
        }
        virtual int area() // virtual function
        {
            return (0);
        }
};

class Rectangle :public Cpolygon // derived class from base class
{ 
    public:
    int area()
    {
        return(width * height);
    }
};
class Triangle :public Cpolygon
{ 
    public:
    int area()
    {
        return(width * height/2);
    }
};

int main(void)
{
    Rectangle rect;  // base class object
    Triangle tri;   // derive class object
    Cpolygon poly;  // derive class object

// Creating pointers from the base class and storing the objects in them
    Cpolygon *pol1 = &rect; 
    Cpolygon *pol2 = &tri;
    Cpolygon *pol3 = &poly;

    pol1->set_values(4,5);
    pol2->set_values(4,5);
    pol3->set_values(4,5);
    //rect.set_values(4,6);

    cout << pol1->area()<<endl;
    cout << pol2->area()<<endl;
    cout << pol3->area()<<endl;

    return (0);
}