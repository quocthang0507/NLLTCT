void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String a);

void XuatMenu()
{
	cout << "\n=================== Bang Menu ===================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Chuyen tat ca cac ky tu trong chuoi thanh ky tu thuong";
	cout << "\n4. Chuyen tat ca cac ky tu trong chuoi thanh ky tu HOA";
	cout << "\n5. Dao nguoc chuoi";
	cout << "\n6. Kiem tra chuoi co phai la chuoi doi xung";
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

void XuLyMenu(int menu, String a)
{
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
		_flushall();
		gets_s(a, MAX);
		cout << "\nNhan phim bat ky de tiep tuc";
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem chuoi\n";
		cout << "\nChuoi da nhap : " << a;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Chuyen tat ca cac ky tu trong chuoi thanh ky tu thuong\n";
		cout << "\nChuoi truoc khi chuyen : " << a;
		ChuyenKT_Thuong(a);
		cout << "\nChuoi sau khi chuyen : " << a;
		break;
	case 4:
		system("CLS");
		cout << "\n4. Chuyen tat ca cac ky tu trong chuoi thanh ky tu HOA\n";
		cout << "\nChuoi truoc khi chuyen : " << a;
		ChuyenKT_Hoa(a);
		cout << "\nChuoi sau khi chuyen : " << a;
		break;
	case 5:
		system("CLS");
		cout << "\n5. Dao nguoc chuoi\n";
		cout << "\nChuoi truoc khi dao : " << a;
		DaoNguocChuoi(a);
		cout << "\nChuoi sau khi dao : " << a;
		break;
	case 6:
		system("CLS");
		cout << "\n6. Kiem tra chuoi co phai la chuoi doi xung\n";
		if (KT_ChuoiDoiXung(a))
			cout << "\nDay la chuoi doi xung!";
		else cout << "\nDay khong phai la chuoi doi xung!";
		break;
	}
	_getch();
}