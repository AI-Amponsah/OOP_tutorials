#include <iostream>

using namespace std;


class publication
{
	private:
		string title;
		float price;
	public:
		void getdata()
		{
			cout << "Enter book title: ";
			cin >> title;
			cout << "Enter price: ";
			cin >> price;
		}

		void putdata()
		{
			cout << "The title of the book is: " << title <<endl;
			cout << "Amount is:$ " << price << endl;
		}

};
class book : public publication
{
	private:
		int page_count;
	public:
		void getdata()
		{
			publication :: getdata();
			cout << "Enter page count: ";
			cin >> page_count;
		}

		void putdata()
		{
			publication :: putdata();
			cout << "The page number is: "<< page_count << endl;
		}

};

class tape : publication
{
	private:
		float play_time;
	public:
		void getdata()
		{
			 publication :: getdata();
			 cout << "Enter play time: ";
			 cin >> play_time;
		}

		void putdata()
		{
			publication :: putdata();
			cout << "The play_time is: "<< play_time << endl;

		}
};
int main(void)
{
	publication pub1;
	book  book1;
	tape tape1;

	pub1.getdata();
	pub1.putdata();

	book1.getdata();
	book1.putdata();

	tape1.getdata();
	tape1.putdata();

	return (0);
}

