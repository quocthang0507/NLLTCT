#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x, y;
	cout << "x++ bang " << x++ << endl;
	cout << "x-- bang " << x-- << endl;
	cout << "++x bang " << ++x << endl;
	cout << "--x bang " << --x << endl;
	x=x/y;
	cout << "x = x/y " << x << endl;
	y = x%y;
	cout << "y = x%y " << y << endl;
	x*=y;
	cout << "x*=y " << y << endl;
	return 0;
}