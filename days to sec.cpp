#include <iostream>
using namespace std;
int main()
{
	int day,hour,min,sec;
	cout<<"Enter no. of days: ";
	cin>> day;
	cout<<"Enter no. of hours: ";
	cin>> hour;
	cout<<"Enter no. of mins: ";
	cin>> min;
	cout<<"Enter no. of sec: ";
	cin>> sec;
	sec=(day*86400)+(hour*3600)+(min*60)+sec;
	cout<< sec << " sec";
	return 0;
}
