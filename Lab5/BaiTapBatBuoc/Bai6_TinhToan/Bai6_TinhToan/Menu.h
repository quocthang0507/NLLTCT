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
	cout << endl << "2. Tinh trung binh cong cua tat ca cac phan tu";
	cout << endl << "3. Tinh tong binh phuong cua tat ca cac phan tu";
	cout << endl << "4. Tinh do lech lon nhat giua 2 phan tu nam lien tiep";
	cout << endl << "5. Tinh tong cac so nguyen to co  2 chu so";
	cout << endl << "===========================================";
	cout << endl << "6. Chon lai bo du lieu moi cho day so";
	cout << endl << "===========================================";
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	double kq;
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
			cout << endl << "2. Tinh trung binh cong cua tat ca cac phan tu";
			kq=TrungBinhCong(a,n);
			cout << "\nKet qua : " << kq;
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Tinh tong binh phuong cua tat ca cac phan tu";
			kq=TongBinhPhuong(a,n);
			cout << "\nKet qua : " << kq;
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Tinh do lech lon nhat giua 2 phan tu nam lien tiep";
			kq=DoLechLonNhat(a,n);
			cout << "\nKet qua : " << kq;
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Tinh tong cac so nguyen to co  2 chu so";
			kq=TinhTongNT(a,n);
			cout << "\nKet qua : " << kq;
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Chon bo du lieu khac";
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