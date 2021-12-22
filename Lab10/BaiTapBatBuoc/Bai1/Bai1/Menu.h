void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "======== HE THONG CHUC NANG ========";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Dao nguoc so nguyen duong n";
	cout << "\n2. Dem so luong chu so co trong so nguyen duong n";
	cout << "\n3. Tim chu so co gia tri lon nhat trong so nguyen duong n";
	cout << "\n4. Doi sang he nhi phan so nguyen duong n";
	cout << "\n5. Tim chu so dau tien trong n";
	cout << "\n===================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so stt (1 <= stt <= " << soMenu << ") de chon menu, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu)
{
	system("cls");
	unsigned n, kq;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		cout << "\n1. Dao nguoc so nguyen duong n\n";
		NhapN(n);
		kq = DaoNguocSo(n);
		cout << "\nSo dao nguoc cua n = " << n << " la: " << kq;
		break;
	case 2:
		cout << "\n2. Dem so luong chu so co trong so nguyen duong n\n";
		NhapN(n);
		kq = DemSoChuSo(n);
		cout << "\nSo nguyen duong n = " << n << " co so chu so la: " << kq;
		break;
	case 3:
		cout << "\n3. Tim chu so co gia tri lon nhat trong so nguyen duong n\n";
		NhapN(n);
		kq = TimChuSoLonNhat(n);
		cout << "\nSo nguyen duong n = " << n << " co chu so lon nhat la: " << kq;
		break;
	case 4:
		cout << "\n4. Doi sang he nhi phan so nguyen duong n\n";
		NhapN(n);
		kq = DoiSoNhiPhan(n);
		cout << "\nSo nguyen duong n = " << n << " doi sang so nhi phan la: " << kq;
		break;
	case 5:
		cout << "\n5. Tim chu so dau tien trong n\n";
		NhapN(n);
		kq = TimChuSoDauTien(n);
		cout << "\nSo nguyen duong n = " << n << " co chu so dau tien la: " << kq;
		break;
	default:
		break;
	}
	_getch();
}