#include <iostream>
#include <conio.h>

using namespace std;

#include "Thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	char kt;
	double a[MAX][MAX], ketQua;
	int n;
	do
	{
		system("CLS");
		cout<< "\nNhap n = ";
		cin >> n;
		NhapMaTran(a, n);
		system("CLS");
		cout << "\nMa tran vua nhap : ";
		XuatMaTran(a,n);
		double s=TongS(a, n);
		double t=TongT(a, n);
		cout << "\nTong S = " << s;
		cout << "\nTong T = " << t;
		_getch();
		cout << "\n\nNhan ESC neu muon THOAT!";
		kt=_getch();
	}
	while (kt!=27);
}