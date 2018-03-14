#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned long n);

void XuatMenu()
{
	cout << "\n======= CAC CHUC NANG CUA CHUONG TRINH =======";
	cout << "\n0. THOAT CHUONG TRINH";
	cout << "\n1. Doi sang he nhi phan";
	cout << "\n2. Doi sang he bat phan";
	cout << "\n3. Doi sang he thap luc phan";
	cout << "\n4. Doi sang he co so 7";
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
	long ketQua;
	switch (menu)
	{
	case 0:
		cout << "\n THOAT KHOI CHUONG TRINH";
		break;
	case 1:
		cout << "\n Ban da chon chuc nang 1\n";
		DoiCoSo(n,2);
		break;
	case 2:
		cout << "\n Ban da chon chuc nang 2\n";
		DoiCoSo(n,8);
		break;
	case 3:
		cout << "\n Ban da chon chuc nang 3\n";
		DoiCoSo(n,16);
		break;
	case 4:
		cout << "\n Ban da chon chuc nang 4\n";
		DoiCoSo(n,7);
		break;
	}
	_getch();
}