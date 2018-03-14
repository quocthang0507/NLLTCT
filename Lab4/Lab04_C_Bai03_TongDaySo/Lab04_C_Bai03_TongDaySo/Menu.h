#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);

void XuatMenu()
{
	cout << endl << "==== HE THONG CHUC NANG =======";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Tinh tong R";
	cout << endl << "2. Tinh tong S";
	cout << endl << "3. Tinh tong T";
	cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout<<"\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, unsigned int n)
{
	double sum=0;
	switch (menu)
	{
		case 0:
			cout << endl << "0. Thoat khoi chuong trinh";
			break;
		case 1:
			cout << endl << "1. Tinh tong R";
			sum = TinhTongR(n);
			cout << endl << "R = " << sum;
			break;
		case 2:
			cout << endl << "2. Tinh tong S";
			sum = TinhTongS(n);
			cout << endl << "S = " << sum;
			break;
		case 3:
			cout << endl << "3. Tinh tong T";
			sum = TinhTongT(n);
			cout << endl << "T = " << sum;
			break;
	}
	_getch();
}