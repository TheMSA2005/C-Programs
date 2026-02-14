#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two digits:";
	cin>> a >> b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"Value after swapping : " << a << " " << b;
}
