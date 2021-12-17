void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String s);

void XuatMenu()
{
	cout << "\n=================== Bang Menu ===================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Dem so luong ky tu x xuat hien trong chuoi";
	cout << "\n4. Xuat cac gia tri ky tu phan biet va so lan xuat hien tuong ung";
	cout << "\n5. Tim vi tri xuat hien dau tien cua ky tu x trong chuoi";
	cout << "\n6. Tim vi tri xuat hien cua chuoi t trong chuoi s";
	cout << "\n7. Dem so tu trong chuoi s";
	cout << "\n8. Dao vi tri cua tu dau va tu cuoi";
	cout << "\n=================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\n\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, String s)
{
	char x;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		cout << "\nNhan phim bat ky de THOAT";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap chuoi\n";
		cout << "\nMoi nhap chuoi : ";
		cin.ignore();
		gets_s(s, MAX);
		cout << "\nNhan phim bat ky de tiep tuc";
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem chuoi\n";
		cout << "\nChuoi da nhap : " << s;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Dem so luong ky tu x xuat hien trong chuoi\n";
		cout << "\nNhap ky tu x : ";
		cin >> x;
		cout << "\nXem lai chuoi : " << s;
		cout << "\n\nKy tu '" << x << "' xuat hien " << Dem_KT(s, x) << " lan";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Xuat cac gia tri ky tu phan biet va so lan xuat hien tuong ung\n";
		cout << "\nXem lai chuoi : " << s << endl;
		KyTu_PB(s);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tim vi tri xuat hien dau tien cua ky tu x trong chuoi\n";
		cout << "\nNhap ky tu x can tim : ";
		cin >> x;
		if (ViTriDT_KT(s, x) != -1)
			cout << "\nXem lai chuoi : " << s
			<< "\nKy tu '" << x << "' xuat hien dau tien tai vi tri " << ViTriDT_KT(s, x);
		else cout << "\nKhong co ky tu '" << x << "' trong chuoi";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Tim vi tri xuat hien cua chuoi t trong chuoi s\n";
		String t;
		cout << "\nChuoi s : " << s;
		cout << "\nNhap chuoi t : ";
		_flushall();
		gets_s(t, MAX);
		if (ViTri_Chuoi(s, t) != -1)
			cout << "\nChuoi t can tim o vi tri thu " << ViTri_Chuoi(s, t) << " trong chuoi s";
		else cout << "\nKhong ton tai chuoi t trong chuoi s";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Dem so tu trong chuoi s\n";
		cout << "\nXem lai chuoi : " << s;
		cout << "\nChuoi s co " << DemTu(s) << " tu";
		break;
	case 8:
		system("CLS");
		cout << "\n8. Dao vi tri cua tu dau va tu cuoi\n";
		cout << "\nXem lai chuoi ban dau : " << s;
		cout << "\nChuoi sau khi dao : ";
		DaoTu(s);
		break;
	}
	_getch();
}