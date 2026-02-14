#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<< "Enter any two integers:";
	cin >> num1 >> num2;
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<< "The number are now reversed, SEE!" <<"  " << num1 << "  " << num2;
	return 0;
}
