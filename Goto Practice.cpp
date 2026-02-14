#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter any number u like:";
	cin>> x;
	if(x==5)
	goto BurgerKing;
	cout<<"Thi shit gettin ignored\n";
	BurgerKing:
	cout<<"This is gettin printed";
	return 0;
}
