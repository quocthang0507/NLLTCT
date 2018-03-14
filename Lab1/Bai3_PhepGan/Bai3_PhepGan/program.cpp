#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x;
	int y;
	int z;
	cout << "Nhap so nguyen x = ";
	cin >> x;
	cout << "Nhap so nguyen y = ";
	cin >> y;
	cout << "Ket qua cac phep tinh" << endl;
	z=x+y;
	cout << "x + y = " << z << endl;
	z=x-y;
	cout << "x - y = " << z << endl;
	z=x*y;
	cout << "x * y = " << z << endl;
	z=x/y;
	cout << "x / y = " << z << endl;
	z=x%y;
	cout << "x % y = " << z << endl;
	_getch();
	return 0;
}