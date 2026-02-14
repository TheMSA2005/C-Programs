#include <iostream>
using namespace std;
int main()
{
	int num,digit1,digit2,digit3,digit4;
	cout<< "Enter a number of 4-digit positive integer: ";
	cin>> num;
	if(num<=9999 && num>= 1000)
	{
		digit4=num%10;
		num=num/10;
		digit3=num%10;
		num=num/10;
		digit2=num%10;
		num=num/10;
		digit1=num%10;
		cout<<digit1 <<" " <<digit2 <<" " <<digit3 <<" " <<digit4 << endl;
		int sum=digit1+digit2+digit3+digit4;
		cout << "The sum is:" << sum;	
	}
	else
	{
		cout<<"Wrong input. Try Again!";
	}
}
