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
	cout << endl << "2. Mang a khong chua phan tu 0";
	cout << endl << "3. Mang a co chua 3 phan tu nam lien tiep co gia tri lien tiep";
	cout << endl << "4. Mang a chua ca phan tu 0 lan 1";
	cout << endl << "5. Mang a chua phan tu co gia tri bang trung binh cong cua cac phan tu";
	cout << endl << "6. Mang a khong chua gia tri am";
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
			cout << endl << "2. Mang a khong chua phan tu 0";
			KiemTra0(a,n);
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Mang a co chua 3 phan tu nam lien tiep co gia tri lien tiep";
			LienTiep(a,n);
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Mang a chua ca phan tu 0 lan 1";
			Chua0Chua1(a,n);
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Mang a chua phan tu co gia tri bang trung binh cong cua cac phan tu";
			TrungBinhCong(a,n);
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Mang a khong chua gia tri am";
			ChuaGiaTriAm(a,n);
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