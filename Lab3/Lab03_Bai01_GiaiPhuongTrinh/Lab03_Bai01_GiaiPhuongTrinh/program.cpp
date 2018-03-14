#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

void GiaiPhuongTrinhBacHai(float a, float b, float c);
float NhapMotSoKhacKhong();

int main()
{
	float a, b, c;
	a = NhapMotSoKhacKhong();
	cout << endl << "Nhap he so b : ";
	cin >> b;
	cout << endl << "Nhap he so c : ";
	cin >> c;
	GiaiPhuongTrinhBacHai(a, b, c);
	_getch();
	return 1;
}

float NhapMotSoKhacKhong()
{
	float so=0;
	while (so == 0)
	{
		cout << endl << "Nhap mot so thuc (khac 0) : ";
		cin >> so;
	}
	return so;
}

void GiaiPhuongTrinhBacHai(float a, float b, float c)
{
	float delta, x; 
	delta = b * b - 4 * a * c;
	if (delta < 0)
	{
		cout << endl << "Phuong trinh vo nghiem";
	}
	else if (delta == 0.0)
	{
		x = -b / (2 * a);
		cout << endl << "Phuong trinh co nghiem kep x = " << x;
	}
	else
	{
		cout << endl << "Phuong trinh co 2 nghiem phan biet : ";
		x = (-b + sqrt(delta)) / (2 * a);
		cout << "x1 = " << setprecision(5) << x;
		x = (-b - sqrt(delta)) / (2 * a);
		cout << " va x2 = " << setprecision(5) << x;
	}
}