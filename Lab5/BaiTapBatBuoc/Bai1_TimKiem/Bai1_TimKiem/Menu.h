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
	cout << endl << "2. Tim vi tri cua so nguyen to cuoi cung trong mang a";
	cout << endl << "3. Tim phan tu xuat hien nhieu nhat va so lan xuat hien";
	cout << endl << "4. Tim phan tu co gia tri nho nhat trong mang va vi tri xuat hien dau tien";
	cout << endl << "5. Tim so am lon nhat va vi tri cua no";
	cout << endl << "6. Tim so duong nho nhat va vi tri cua no";
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
			cout << endl << "2. Tim vi tri cua so nguyen to cuoi cung trong mang a";
			int vt;
			vt=NguyenToCuoiCung(a,n);
			cout << "\nVi tri so nguyen to cuoi cung trong doan [0,...," << n-1 << "] la : " << vt;
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Tim phan tu xuat hien nhieu nhat va so lan xuat hien";
			XuatHienNhieuNhat(a,n);
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Tim phan tu co gia tri nho nhat trong mang va vi tri xuat hien dau tien";
			NhoNhat_DauTien(a,n);
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Tim so am lon nhat va vi tri cua no";
			SoAmLonNhat(a,n);
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Tim so duong nho nhat va vi tri cua no";
			SoDuongNhoNhat(a,n);
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