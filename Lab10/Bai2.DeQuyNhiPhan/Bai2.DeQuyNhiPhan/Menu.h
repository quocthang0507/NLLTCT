void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "\n===========================HE THONG CHUC NANG===========================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Xuat n so Fibonacci dau tien";
	cout << "\n2. Xuat to hop chap k trong n";
	cout << "\n3. Tim gia tri min, max trong doan a[l..r] cua mang a[0..n-1]";
	cout << "\n========================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << soMenu << "] de chon mang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu)
{
	unsigned k, n, l, r, kq, min, max;
	DaySo a;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Xuat n so Fibonacci dau tien\n";
		cout << "\nNhap n = ";
		cin >> n;
		cout << "\n" << n << " so fibonacci dau tien la:\n";
		Xuat_n_Fibonacci(n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xuat to hop chap k trong n\n";
		do {
			cout << "\nNhap n = ";
			cin >> n;
			cout << "\nNhap k = ";
			cin >> k;
		} while (k < 0 || k > n);
		kq = Tinh_Cnk(n, k);
		cout << "\nChinh hop chap k = " << k << " cua n = " << n << " phan tu la " << kq;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tim gia tri min, max trong doan a[l..r] cua mang a[0..n-1]\n";
		cout << "\nNhap kich thuoc day so n = ";
		cin >> n;
		NhapTuDong(a, n, 1, 10);
		XuatDaySo(a, n);
		do {
			cout << "\nNhap chi so ben trai l = ";
			cin >> l;
			cout << "\nNhap chi so ben phai r = ";
			cin >> r;
		} while (l > r || l < 0 || r >= n);
		cout << "\nDay so trong doan a[" << l << ".." << r << "] la:\n";
		XuatDaySo_Doan(a, l, r);
		MinMax(a, l, r, min, max);
		cout << "\nGia tri nho nhat la: " << min;
		cout << "\nGia tri lon nhat la: " << max;
		break;
	}
	_getch();
}