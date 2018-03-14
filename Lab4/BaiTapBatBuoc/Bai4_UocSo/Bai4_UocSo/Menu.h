#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned long n);

void XuatMenu()
{
	cout << "\n======= CAC CHUC NANG CUA CHUONG TRINH =======";
	cout << "\n0. THOAT CHUONG TRINH";
	cout << "\n1. Xuat cac uoc so cua n";
	cout << "\n2. Dem so luong cac uoc so cua n";
	cout << "\n3. Tong cac uoc so";
	cout << "\n4. Tim so lon nhat <= luy thua cua 2";
	cout << "\n5. Kiem tra so hoan hao";
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

void XuLyMenu(int menu, unsigned long n)
{
	switch (menu)
	{
	case 0:
		cout << "\nTHOAT KHOI CHUONG TRINH";
		break;
	case 1:
		cout << "\nBan da chon chuc nang 1\n";
		CauA(n);
		break;
	case 2:
		cout << "\nBan da chon chuc nang 2\n";
		CauB(n);
		break;
	case 3:
		cout << "\nBan da chon chuc nang 3\n";
		CauC(n);
		break;
	case 4:
		cout << "\nBan da chon chuc nang 4\n";
		CauD(n);
		break;
	case 5:
		cout << "\nBan da chon chuc nang 5\n";
		CauE(n);
		break;
	}
	_getch();
}