#include <iostream>
#include <conio.h>

using namespace std;

double TinhBieuThuc(double x, double y, char k);

int main()
{
	double x, y, ketQua;
	char k;
	cout << "Trong cac phep toan duoi day \n"
		<< " + \t - \t * \t / \n"
		<< "Ban muon thuc hien phep toan nao? ";
	cin >> k;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	ketQua=TinhBieuThuc(x, y, k);
	cout << x << " " << k <<  " " << y << " = " << ketQua;
	_getch();
	return 1;
}

double TinhBieuThuc(double x, double y, char k)
{
	switch (k)
	{
		case '+':
			return x+y;
			break;
		case '-':
			return x-y;
			break;
		case '*':
			return x*y;
			break;
		case '/':
			return x/y;
			break;
		default: return 0;
	}
}