#include <iostream>
#include <conio.h>

using namespace std;

int NhapSoNguyen();

int main()
{
	int x, y, z;
	x=NhapSoNguyen();
	y=NhapSoNguyen();
	cout << x << " + " << y << " = " << x+y;
	z=(x+y)*NhapSoNguyen();
	cout << endl << "z = " << z;
	_getch();
	return 1;
}

int NhapSoNguyen()
{
	int so;
	cout << endl << "Nhap mot so nguyen : ";
	cin >> so;
	return so;
}