#include <iostream>
#include <conio.h>

using namespace std;

double CanBac2 (float a);

int main()
{
	float a, ketQua;
	cout << "Nhap so thuc duong a = ";
	cin >> a;
	ketQua=CanBac2(a);
	cout << "Ket qua: can bac hai cua " << a << " = " << ketQua;
	_getch();
	return 1;
}

double CanBac2 (float a)
{
	double Xn=1, X0;
	do
	{
		X0=Xn;
		Xn=(a/X0+X0)/2.0;
	}
	while ((((Xn-X0)>0)?(Xn-X0):-(Xn-X0))>pow(10,(float)-15));
	return Xn;
}