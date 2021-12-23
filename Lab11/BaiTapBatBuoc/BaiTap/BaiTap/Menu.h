void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, DanhSach ds, int& kt_a, int& kt_ds);

void XuatMenu()
{
	cout << "\n=========== HE THONG CHUC NANG ================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Chuyen du lieu so nguyen vao mang mot chieu";
	cout << "\n2. Chuyen du lieu cau truc vao mang cau truc";
	cout << "\n===============================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\nChon chuc nang [0.." << soMenu << "] = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, DanhSach ds, int& kt_a, int& kt_ds)
{
	char filename[MAX];
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh\n";
		break;
	case 1:
		cout << "\n1. Chuyen du lieu so nguyen vao mang mot chieu\n";
		cout << "\nNhap ten tap tin de mo: ";
		cin >> filename;
		if (Doc_DaySo_CoKichThuoc(filename, a, kt_a))
		{
			cout << "\nDu lieu tu tap tin: \n";
			Xuat_DaySo(a, kt_a);
		}
		else
			cout << "\nLoi khi doc tap tin!";
		break;
	case 2:
		cout << "\n2. Chuyen du lieu cau truc vao mang cau truc\n";
		cout << "\nNhap ten file de mo: ";
		cin >> filename;
		if (Doc_MangNhanVien(filename, ds, kt_ds))
		{
			cout << "\nDu lieu tu tap tin: \n";
			Xuat_MangNhanVien(ds, kt_ds);
		}
		else
			cout << "\nLoi khi doc tap tin!";
		break;
	}
	_getch();
}