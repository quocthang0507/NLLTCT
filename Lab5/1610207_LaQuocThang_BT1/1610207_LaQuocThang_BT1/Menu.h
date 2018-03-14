#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << endl << "======= CAC CHUC NANG CUA CHUONG TRINH ======="
		<< endl << "0. THOAT CHUONG TRINH"
		<< endl << "1. Tinh e^(x)"
		<< endl << "2. Tinh sin(x)"
		<< endl << "3. Tinh can bac hai cua x"
		<< endl << "==============================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << endl << "\nNhap so thu tu chuc nang : ";
		cin >> stt;
		if (0<=stt && stt<=soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu)
{
	double ketQua, x;
	switch(menu)
	{
	case 0:
		cout << endl << "Nhan phim bat ky de THOAT";
		break;
	case 1:
		cout << endl << "Ban da chon chuc nang 1: Tinh e^(x)\n";
		cout << endl << "Nhap gia tri x = ";
		cin >> x;
		ketQua=TinhEx(x);
		cout << "Ket qua cua phep toan e^(" << x << ") la : " << ketQua;
		break;
	case 2:
		cout << endl << "Ban da chon chuc nang 2: Tinh sin(x)\n";
		cout << endl << "Nhap gia tri cho x (don vi do) = ";
		cin >> x;
		ketQua=TinhSinx(x);
		cout << "Ket qua cua phep toan sin(" << x << ") la : " << ketQua;
		break;
	case 3:
		cout << endl << "Ban da chon chuc nang 3: Tinh can bac hai\n";
		do
		{
			cout << endl << "Nhap gia tri cho x (so thuc khong am) = ";
			cin >> x;
		}
		while (x<0);
		ketQua=TinhCanBac2(x);
		cout << "Ket qua cua phep toan can bac hai cua " << x << " la : " << ketQua;
		break;
	}
	_getch();
}