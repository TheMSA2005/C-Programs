#include <iostream>
using namespace std;
int main()
{
	int sec,min,hours;
	cout<< "Enter no. of seconds:";
	cin>> sec;
	hours=sec/3600;
    sec=sec-(hours*3600);
    min=sec/60;
    sec=sec-(min*60);
    cout<< hours << " hr " << min << " min " << sec << " sec";
	return 0;
}
