#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0<= stt &&stt <=soMenu)
			break;
	}
	return stt;
}

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Xem lai mang a";
	cout << endl << "2. Sap xep so duong tang dan, cac so khac giu nguyen vi tri";
	cout << endl << "3. Sap cac phan tu sao cho so 0 nam cuoi mang, cac so khac o dau mang va tang dan";
	cout << endl << "4. Sap cac ohan tu sao cho so 0 nam dau mang, so am o giua va giam dan, so duong o cuoi va tang";
	cout << endl << "5. Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan";
	cout << endl << "6. Sap cac so nguyen to nam dau mang va tang, so con lai nam o cuoi va giam dan";
	cout << endl << "===========================================";
	cout << endl << "7. Chon lai bo du lieu moi cho day so";
	cout << endl << "===========================================";
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	switch (menu)
	{
		case 0:
			system("CLS");
			cout << endl<<"\n0. Thoat khoi chuong trinh\n";
			break;
		case 1:
			system("CLS");
			cout << endl << "1. Xem lai mang a";
			cout << "\nDay hien hanh : \n";
			XuatMang(a,n);
			break;
		case 2:
			system("CLS");
			cout << endl << "2. Sap xep so duong tang dan, cac so khac giu nguyen vi tri";
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Sap cac phan tu sao cho so 0 nam cuoi mang, cac so khac o dau mang va tang dan";
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Sap cac ohan tu sao cho so 0 nam dau mang, so am o giua va giam dan, so duong o cuoi va tang";
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan";
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Sap cac so nguyen to nam dau mang va tang, so con lai nam o cuoi va giam dan";
			break;
		case 7:
			system("CLS");
			cout << endl << "7. Chon bo du lieu khac";
			cout << "\nNhap lai kich thuoc n : ";
			cin >> n;
			NhapMang(a, n);
			system("CLS");
			cout << "\nDay so moi nhap:\n";
			XuatMang(a, n);
			break;
	}
	_getch();
}