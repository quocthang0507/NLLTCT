void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DayDong a, int &n);

void XuatMenu()
{
	cout << "\n===========================HE THONG CHUC NANG===========================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap tu dong mang";
	cout << "\n2. Xem mang";
	cout << "\n3. Tinh gia tri nho nhat";
	cout << "\n4. Dem so duong chay cua mang";
	cout << "\n5. Tinh tong cac so nguyen to trong mang";
	cout << "\n6. Tim vi tri cuoi cung x xuat hien trong mang, neu co";
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
		if (0<= stt && stt <=soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DayDong a, int &n)
{
	int kq, x;
	switch(menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete []a;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap tu dong mang\n";
		cout << "\nNhap vao kich thuoc mang : ";
		cin >> n;
		NhapTuDong(a,n);
		cout << "\nMang da tao : \n";
		XuatMang(a,n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem mang\n";
		cout << "\nMang da nhap : \n";
		XuatMang(a,n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tinh gia tri nho nhat\n";
		kq=TinhMin(a,n);
		cout << "\nXem lai mang : \n";
		XuatMang(a,n);
		cout << "\nGia tri nho nhat cua mang la : " << kq;
		break;
	case 4:
		system("CLS");
		cout << "\n4. Dem so duong chay cua mang\n";
		kq=TinhSo_DC(a,n);
		cout << "\nXem lai mang : \n";
		XuatMang(a,n);
		cout << "\nSo duong chay cua mang la : " << kq;
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tinh tong cac so nguyen to trong mang\n";
		kq=TinhTong_NT(a,n);
		cout << "\nXem lai mang : \n";
		XuatMang(a,n);
		cout << "\nTong cac nguyen to trong day la : " << kq;
		break;
	case 6:
		system("CLS");
		cout << "\n6. Tim vi tri cuoi cung x xuat hien trong mang, neu co\n";
		cout << "\nNhap x = ";
		cin >> x;
		kq=Tim_Cscc(a,n,x);
		cout << "\nXem lai mang : \n";
		XuatMang(a,n);
		if (kq==-1)
			cout << "\nKhong co x = " << x << " o trong mang";
		else 
			cout << "\nTim thay x = " << x << " nam o vi tri " << kq << " trong mang";
		break;
	}
	_getch();
}