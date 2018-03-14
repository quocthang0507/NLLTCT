#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, double n);

void XuatMenu()
{
	cout << "\n======= CAC CHUC NANG CUA CHUONG TRINH =======";
	cout << "\n0. THOAT CHUONG TRINH";
	cout << "\n1. Xuat so fibonacci thu n";
	cout << "\n2. Liet ke so fibonacci nho hon hoac bang n";
	cout << "\n3. Liet ke n so fibonacci dau tien";
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
		ketQua=CauA(n-1);
		cout << "So fibonacci thu " << n << " la : " << ketQua;
		break;
	case 2:
		cout << "\nBan da chon chuc nang 2\n";
		CauB(n);
		break;
	case 3:
		cout << "\nBan da chon chuc nang 3\n";
		CauC(n-1);
		break;
	}
	_getch();
}