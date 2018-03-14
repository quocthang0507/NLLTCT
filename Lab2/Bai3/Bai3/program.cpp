#include <iostream>
#include <conio.h>

using namespace std;

void ThongBao();
void XuatKyTu(short ma);
void XuatPhuongTrinh(float a, float b);

int main()
{
	ThongBao();
	XuatKyTu(157);

	short dollar = 36, ma;
	XuatKyTu(dollar);

	cout << endl << "Nhap 1 so trong doan [30 .. 255] : ";
	cin >> ma;
	XuatKyTu(ma);

	XuatPhuongTrinh(2.3, 5);

	float p, q = 10;
	XuatPhuongTrinh(7.5, q);

	cout << endl << "Nhap 1 so thuc : ";
	cin >> p;

	XuatPhuongTrinh(p,q);

	_getch();
	return 1;
}

void ThongBao()
{
	cout << endl << "Ban phai hoan thanh bai tap nay ";
}

void XuatKyTu(short ma)
{
	char kyTu = (char)ma;
	cout << endl << ma << " <=> " << kyTu;
}

void XuatPhuongTrinh(float a, float b)
{
	cout << endl << a << " * x + " << b << " = 0";
}