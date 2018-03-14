#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, double n);

void XuatMenu()
{
	cout << "\n======= CAC CHUC NANG CUA CHUONG TRINH =======";
	cout << "\n0. THOAT CHUONG TRINH";
	cout << "\n1. Tinh sin(x)";
	cout << "\n2. Tinh cos(x)";
	cout << "\n3. Tinh e(x)";
	cout << "\n==============================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system ("CLS");
		XuatMenu();
		cout << "\nNhap so thu tu menu : ";
		cin >> stt;
		if (0<=stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, double n)
{
	double ketQua;
	switch (menu)
	{
	case 0:
		cout << "\nTHOAT KHOI CHUONG TRINH";
		break;
	case 1:
		cout << "\nBan da chon chuc nang 1\n";
		ketQua=CauA(n);
		cout << "sin(" << n << ") = " << ketQua;
		break;
	case 2:
		cout << "\nBan da chon chuc nang 2\n";
		ketQua=CauB(n);
		cout << "cos(" << n << ") = " << ketQua;
		break;
	case 3:
		cout << "\nBan da chon chuc nang 3\n";
		ketQua=CauC(n);
		cout << "e^(" << n << ") = " << ketQua;
		break;
	}
	_getch();
}