#include <iostream>
using namespace std;

class Cpolygon
{ 
    protected:
        int width, height;
    public:
        void set_values(int a, int b)
        {
            width = a;
            height = b;
        }
};

class Rectangle :public Cpolygon
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
    Rectangle rect;
    Triangle tri;

    Cpolygon *pol1 = &rect;
    Cpolygon *pol2 = &tri;

    pol1->set_values(4,5);
    pol2->set_values(4,5);
    //rect.set_values(4,6);

    cout << rect.area()<<endl;
    cout << tri.area()<< endl;

    return (0);
}