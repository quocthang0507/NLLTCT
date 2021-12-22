void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "======== HE THONG CHUC NANG ========";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tinh uoc chung lon nhat cua hai so nguyen duong";
	cout << "\n2. Xuat xau ky tu dao nguoc";
	cout << "\n\nCac chuc nang lien quan day so\n";
	cout << "\n3. Dem so lan xuat hien cua x trong day a";
	cout << "\n4. Dem cac so nguyen to trong day a";
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
	unsigned x, y, kq;
	int n;
	Chuoi s, s_copy;
	DaySo a;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		cout << "\n1. Tinh uoc chung lon nhat cua hai so nguyen duong\n";
		do {
			cout << "\nNhap so nguyen duong x = ";
			cin >> x;
			cout << "\nNhap so nguyen duong y = ";
			cin >> y;
		} while (x <= 0 || y <= 0);
		kq = UCLN(x, y);
		cout << "\nUCLN(" << x << ", " << y << ") = " << kq;
		break;
	case 2:
		cout << "\n2. Xuat xau ky tu dao nguoc\n";
		cout << "\nNhap chuoi s = ";
		cin.ignore();
		gets_s(s);
		strcpy_s(s_copy, s);
		DaoNguocChuoi(s_copy);
		cout << "\nChuoi dao nguoc cua \"" << s << "\" la: " << s_copy;
		break;
	case 3:
		cout << "\n3. Dem so lan xuat hien cua x trong day a\n";
		NhapDaySo_TD(a, n, 1, 10);
		cout << "\nDay so hien tai la: \n";
		XuatDaySo(a, n);
		cout << "\nNhap so can tim x = ";
		cin >> x;
		kq = DemX(a, n, x);
		if (!kq)
			cout << "\nKhong tim thay x = " << x << " trong day so tren";
		else
			cout << "\nx = " << x << " xuat hien " << kq << " lan trong day so tren";
		break;
	case 4:
		cout << "\n4. Dem cac so nguyen to trong day a\n";
		NhapDaySo_TD(a, n, 1, 10);
		cout << "\nDay so hien tai la: \n";
		XuatDaySo(a, n);
		kq = DemNT(a, n);
		if (!kq)
			cout << "\nKhong tim thay so nguyen to trong day so tren";
		else
		{
			cout << "\nCo " << kq << " so nguyen to xuat hien trong day so tren";
			cout << "\nCac so nguyen to duoc tim thay:\n";
			XuatNT(a, n);
		}
		break;
	default:
		break;
	}
	_getch();
}