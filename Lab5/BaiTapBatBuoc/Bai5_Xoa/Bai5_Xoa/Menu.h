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
	cout << endl << "2. Xoa phan tu nam tai vi tri cho truoc";
	cout << endl << "3. Xoa phan tu x dai tien tim duoc";
	cout << endl << "4. Xoa moi phan tu x";
	cout << endl << "5. Xoa tat ca cac phan tu trung nhau, chi giu lai 1 phan tu trong so cac phan tu trung do";
	cout << endl << "6. Xoa cac phan tu nam ngoai doan";
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
			cout << endl << "2. Xoa phan tu nam tai vi tri cho truoc";
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Xoa phan tu x dai tien tim duoc";
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Xoa moi phan tu x";
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Xoa tat ca cac phan tu trung nhau, chi giu lai 1 phan tu trong so cac phan tu trung do";
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Xoa cac phan tu nam ngoai doan";
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