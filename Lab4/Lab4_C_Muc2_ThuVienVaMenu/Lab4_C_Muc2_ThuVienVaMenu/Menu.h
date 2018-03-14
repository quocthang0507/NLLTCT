void XuatMenu();
int ChonMenu (int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "\n====== HE THONG CHUC NANG ======";
	cout << "\n0. THOAT KHOI CHUONG TRINH";
	cout << "\n1. Chuc nang 1";
	cout << "\n2. Chuc nang 2";
	cout << "\n3. Chuc nang 3";
	cout << "\n4. Chuc nang 4";
	cout << "\n================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu;
		cout << "\nNhap 1 so stt (1<= stt <= " << soMenu
			<< ") de chon menu : stt = ";
		cin >> stt;
		if (0<= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. THOAT KHOI CHUONG TRINH.\N";
		break;
	case 1:
		cout << "\n1. Ban da chon chuc nang 1";
		break;
	case 2:
		cout << "\n2. Ban da chon chuc nang 2";
		break;
	case 3:
		cout << "\n3. Ban da chon chuc nang 3";
		break;
	case 4:
		cout << "\n4. Ban da chon chuc nang 4";
		break;
	}
	_getch();
}