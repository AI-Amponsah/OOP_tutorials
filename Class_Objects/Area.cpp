#include <iostream>

using namespace std;

/**
  *Create a class called Quadrilateral. It should have private integer variables x and y. 
  *This class should have two functions: set_values will pass two integer values to the variables 
  *x and y while area will calculate and return the product of the two variables.
  *Create two objects from this class, square and rectangle.
  *Using set_values, set the x and y variables for square to 10 and 10.
  *Using set_values, set the x and y variables for rectangle to 5 and 10.
  *Using area, display the area values for square and rectangle on the console
  */
class Quadrilateral
{
	// creating private member data/ attributes
	private:
		int x;
		int y;
	// creating public member functions / methods
	public:
		void set_values(int length, int width)
		{
			x = length;
			y = width;
		}

		int area()
		{
			return x * y;
		}
};

int main(void)
{
	Quadrilateral square, rectangle;

	square.set_values(10, 10);
	rectangle.set_values(5, 10);

	cout << "Area of Rectangle is: " << rectangle.area() << " " << "and Area of square is : " << square.area() <<endl;

	return(0);
}
