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
		cout<<"\nNhap 1 so trong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap tu dong mang a";
	cout << endl << "2. Xem du lieu mang a";
	cout << endl << "3. Dem so lan xuat hien cua x trong a";
	cout << endl << "4. Dem va xuat cac so nguyen to trong a";
	cout << endl << "5. Tinh tong cac gia tri trong mang";
	cout << endl << "6. Tính tong cac gia tri chi xuat hien mot lan trong mang";
	cout << endl << "7. Tinh tong cac gia tri phan biet trong mang";
	cout << endl << "==========================================";
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	int x, kq;
	switch(menu)
	{
		case 0:
			system("CLS");
			cout << endl<<"\n0. Thoat khoi chuong trinh";
			break;
		case 1:
			system("CLS");
			cout << endl << "1. Nhap tu dong mang a";
			cout << "\nNhap kich thuoc n : ";
			cin >> n;
			NhapTuDong(a, n);
			system("CLS");
			cout << "\nDay so moi nhap:\n";
			XuatMang(a, n);
			break;
		case 2:
			cout << endl << "7. Xem du lieu day so";
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Dem so lan xuat hien cua x trong a";
			cout << "\nNhap gia tri can xet: x = ";
			cin >> x;
			kq = Dem_X(a, n, x);
			system("CLS");
			cout << "\nSo lan " << x << " xuat hien trong a: kq = " << kq;
			cout << "\nXem lai mang hien hanh de kiem tra :\n";
			XuatMang(a, n);
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Dem va xuat cac so nguyen to trong a";
			kq = Dem_NT(a, n);
			if (kq)
				cout << "\nSo luong cac so nguyen to trong a : kq = "<<kq;
			else
				cout << "\nKhong co so nguyen to nao trong a.";
			cout << "\nXem lai mang hien hanh de kiem tra :\n";
			XuatMang(a, n);	
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Tính tong cac phan tu trong mang";
			cout << "\nTong cac phan tu trong mang: sum = "
				<< TinhTong(a, n);
			cout << "\nXem lai mang hien hanh de kiem tra :\n";
			XuatMang(a, n);
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Tính tong cac phan tu chi xuat hien mot lan trong mang";
			cout << "\nTong cac phan tu trong mang chi xuat hien 1 lan: sum = "
				<< TinhTongDuyNhat(a, n);
			cout << "\nXem lai mang hien hanh de kiem tra :\n";
			XuatMang(a, n);
			break;
		case 7:
			system("CLS");
			cout << endl << "7. Tinh tong cac phan tu phan biet trong mang";
			kq = TinhTong_PhanBiet(a, n);
			cout << "\nTong cac phan tu phan biet trong a: sum = " << kq;
			cout << "\nXem lai mang hien hanh de kiem tra :\n";
			XuatMang(a, n);
			break;
	}
	_getch();
}
