#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Tinh dien tich hinh vuong";
	cout << endl << "2. Tinh dien tich hinh chu nhat";
	cout << endl << "3. Tinh dien tich hinh tam giac";
	cout << endl << "4. Tinh dien tich hinh tron";
	cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so de chon menu ( 0 <= stt <= " << soMenu << " ) : stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu)
{
	double a, b, c, r, dienTich;
	switch (menu)
	{
		case 0:
			cout << endl << "0. Thoat khoi chuong trinh";
			break;
		case 1:
			cout << endl << "1. Tinh dien tich hinh vuong";
			cout << endl << "Nhap do dai canh hinh vuong : ";
			cin >> a;
			dienTich = DienTichHinhVuong(a);
			cout << endl << "Dien tich hinh vuong canh "
				<< a << " la " << dienTich;
			break;
		case 2:
			cout << endl << "2. Tinh dien tich hinh chu nhat";
			cout << endl << "Nhap chieu dai hinh CN : ";
			cin >> a;
			cout << endl << "Nhap chieu rong hinh CN : ";
			cin >> b;
			dienTich = DienTichHinhChuNhat(a, b);
			cout << endl << "Dien tich hinh chu nhat "
				<< " co chieu dai = " << a
				<< " chieu rong = " << b << " la " << dienTich;
			break;
		case 3:
			cout << endl << "3. Tinh dien tich hinh tam giac";
			cout << endl << "Nhap do dai canh a : ";
			cin >> a;
			cout << endl << "Nhap do dai canh b : ";
			cin >> b;
			cout << endl << "Nhap do dai canh c : ";
			cin >> c;
			dienTich = DienTichTamGiac(a, b, c);
			cout << endl << "Dien tich hinh tam giac "
				<< " co 3 canh a = " << a << ", b = " << b
				<< ", c = " << c << " la " << dienTich;
			break;
		case 4:
			cout << endl << "4. Tinh dien tich hinh tron";
			cout << endl << "Nhap do dai ban kinh : ";
			cin >> a;
			dienTich = DienTichHinhTron(a);
			cout << endl << "Dien tich hinh tron ban kinh "
				<< a << " la " << dienTich;
			break;
	}
}