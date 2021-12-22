void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "======== HE THONG CHUC NANG ========";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tinh tong n so le duong dau tien";
	cout << "\n2. Tinh tich n so le duong dau tien";
	cout << "\n3. Tinh tong: 1+(1.2)+(1.2.3)+...+(1.2...n)";
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
		cout << "\n1. Tinh tong n so le duong dau tien\n";
		NhapN(n);
		kq = TinhTong_N_SoLe_DauTien(n);
		cout << "\nTong " << n << " so le duong dau tien la : " << kq;
		break;
	case 2:
		cout << "\n2. Tinh tich n so le duong dau tien\n";
		NhapN(n);
		kq = TinhTich_N_SoLe_DauTien(n);
		cout << "\nTich " << n << " so le duong dau tien la: " << kq;
		break;
	case 3:
		cout << "\n3. Tinh tong: 1+(1.2)+(1.2.3)+...+(1.2...n)\n";
		NhapN(n);
		kq = TinhTongGiaiThua(n);
		cout << "\nTong " << n << " n giai thua dau tien la: " << kq;
		break;
	default:
		break;
	}
	_getch();
}