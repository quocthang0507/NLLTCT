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

void XuLyMenu(int menu, DaySo a, int &n)
{
	int x, kq;
	switch(menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		cout << endl << "1. Kiem tra x nam trong mang a";
		cout << endl << "Nhap gia tri x : ";
		cin >> x;
		kq = ChuaX(a, n, x);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << endl << "Mang co chua " << x;
		else
			cout << endl << "Mang khong chua " << x;
		break;
	case 2:
		cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
		cout << endl << "Nhap gia tri x : ";
		cin >> x;
		kq = Tim_VTDT_X(a, n, x);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq == -1)
			cout << endl << "Mang khong chua " << x;
		else
			cout << "\nVi tri dau tien " << x<<" xuat hien trong a la : "<<kq;
		break;
	case 3:
		cout << endl << "3. Kiem tra mang a tang";
		kq = KiemTraMangTang(a,n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << endl << "a La Mang tang.";
		else
			cout << endl << "a không phai Mang tang.";
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim phan tu lon nhat";
		kq = TinhMax(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << "\nMax[0,..," << n << "] = " << kq;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tim vi tri cuoi cung gia tri lon nhat";
		kq = TimViTriMax_CuoiCung(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << endl << "Vi tri xuat hien cuoi cung cua gia tri lon nhat la "
			<< kq;
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Neu a chua x thi cung chua -x";
		kq = ChuaXChuaTruX(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << endl << "phat bieu dung ";
		else
			cout << endl << "phat bieu sai ";
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Xem du lieu day so";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 8:
		system("CLS");
		cout << endl << "8. Chon bo du lieu khac";
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

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Kiem tra x nam trong mang a";
	cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
	cout << endl << "3. Kiem tra mang a la day tang";
	cout << endl << "4. Tim phan tu lon nhat";
	cout << endl << "5. Tim vi tri cuoi cung gia tri lon nhat xuat hien";
	cout << endl << "6. Neu a chua x thi cung chua -x";
	cout << endl << "7. Xem du lieu day so";
	cout << endl << "==========================================";
	cout << endl << "8. Chon lai bo du lieu moi cho day so";
	cout << endl << "==========================================";
}