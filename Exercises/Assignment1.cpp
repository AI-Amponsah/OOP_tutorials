#include <iostream>
using namespace std;

long int hms_to_secs(int , int, int);

int main(){
    char  temp;
    int hrs, mins, secs;
    do{
        cout << "Enter time (HH:MM:SS): ";
        cin >> hrs >> temp >> mins >> temp >> secs;
        float total_Seconds = hms_to_secs(hrs, mins, secs);
        cout << "Total seconds: " << total_Seconds << endl;

    }while(1);
    return 0;
}

long int  hms_to_secs(int hrs, int mins, int secs)
{
    long int total_Seconds = 3600 * hrs + 60 * mins + secs;
    return total_Seconds;
}