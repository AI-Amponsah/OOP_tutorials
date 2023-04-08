#include <iostream>
#include <list>
using namespace std;

/**
  *This code is to implement encapsulation.

  */
class YoutubeChannel //Base class
{
	private:
		string Name;
		string OwnerName;
		list<string> PublishedVideoTitles;
		int SubscriberCount;
	public:
		YoutubeChannel(string name, string ownerName) // constructor
		{
			Name = name;
			OwnerName = ownerName;
		}
		void GetInfo()
		{
			cout << "Name: " << Name << endl;
			cout << "OwnerName: " << OwnerName << endl;
			cout << "Number of Subscribers: " << SubscriberCount << endl;

			cout << "videos:"<< endl;

			for(string videoTitle : PublishedVideoTitles)
			{
				cout << videoTitle << endl;
			}
			cout << endl;
		}
		void Subscribe()
		{
			SubscriberCount = SubscriberCount + 1;

		}

		void Unsubscribe()
		{
			if (SubscriberCount > 0)
				SubscriberCount--;
		}


		string getName()
		{
			return (Name);
		}

		void setName(string name)
		{
			Name = name;
		}

		void PublishVideo(string title)
		{
			PublishedVideoTitles.push_back(title);

		}
};


int main(void)
{
	YoutubeChannel ytChannel("Code_with_Kremlin", "Kremlin");
	ytChannel.PublishVideo("Expandables");

	ytChannel.Unsubscribe();
	ytChannel.GetInfo();

	for (int i = 0; i < 20; i++)
	{
		ytChannel.Subscribe();
	}
	ytChannel.GetInfo();
return (0);
}
