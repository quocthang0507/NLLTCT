void XuatMenu()
{
	cout << "\n=====================HE THONG CHUC NANG=====================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap chuoi ky tu";
	cout << "\n2. Xem chuoi ky tu";
	cout << "\n3. Dem so khoang trang";
	cout << "\n4. Tim vi tri xuat hien cua chuoi t trong chuoi s";
	cout << "\n5. Tim vi tri xuat hien dau tien cua ky tu x cho truoc trong chuoi s";
	cout << "\n6. Dao vi tri cua tu dau va tu cuoi trong chuoi s";
	cout << "\n7. Doi ky tu dau tien trong chuoi s sang chu hoa, con lai la chu thuong";
	cout << "\n8. Liet ke tung ky tu va so lan xuat hien cua chung trong chuoi s";
	cout << "\n9. Dem so tu trong chuoi s";
	cout << "\n============================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang tu [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0<=stt && stt <=soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, ChuoiDong s)
{
	int kq;
	char x;
	ChuoiDong t;
	t=new char [MAX];
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete []s;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap chuoi ky tu\n";
		cout << "\nNhap chuoi : ";
		_flushall();
		gets_s(s,MAX);
		cout << "\nChuoi da nhap : " << s;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem chuoi ky tu\n";
		cout << "\nChuoi da nhap : " << s;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Dem so khoang trang\n";
		kq=DemKhoangTrang(s);
		cout << "\nChuoi da nhap : " << s << endl;
		cout << "\nTrong chuoi tren co tat ca " << kq << " khoang trang";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tim vi tri xuat hien cua chuoi t trong chuoi s\n";
		cout << "\nChuoi s = " << s << endl;
		cout << "\nNhap chuoi t = ";
		_flushall();
		gets_s(t,MAX);
		kq=ViTri_Chuoi(s,t);
		if (kq==-1)
			cout << "\nKhong co chuoi t trong chuoi s";
		else
			cout << "\nChuoi t nam vi tri thu " << kq << " trong chuoi s";
		delete []t;
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tim vi tri xuat hien dau tien cua ky tu x cho truoc trong chuoi s\n";
		cout << "\nXem lai chuoi : " << s << endl;
		cout << "\nNhap ky tu x = ";
		cin >> x;
		kq=ViTri_DT_x(s,x);
		cout << "\nKy tu '" << x << "' nam vi tri thu " << kq << " trong chuoi s";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Dao vi tri cua tu dau va tu cuoi trong chuoi s\n";
		cout << "\nChuoi ban dau : " << s << endl;
		DaoTu(s);
		cout << "\nChuoi sau khi dao : " << s;
		break;
	case 7:
		system("CLS");
		cout << "\n7. Doi ky tu dau tien trong chuoi s sang chu hoa, con lai la chu thuong\n";
		cout << "\nChuoi ban dau : " << s << endl;
		DoiChuHoa(s);
		cout << "\nChuoi sau khi doi : " << s;
		break;
	case 8:
		system("CLS");
		cout << "\n8. Liet ke tung ky tu va so lan xuat hien cua chung trong chuoi s\n";
		cout << "\nXem lai chuoi : " << s << endl;
		LietKeKyTu(s);
		break;
	case 9:
		system("CLS");
		cout << "\n9. Dem so tu trong chuoi s\n";
		kq=DemTu(s);
		cout << "\nXem lai chuoi : " << s << endl;
		cout << "\nChuoi tren co tat ca la " << kq << " tu";
		break;
	}
	_getch();
}