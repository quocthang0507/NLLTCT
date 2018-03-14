void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, MaTranVuong c, int & n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong";
	cout << endl << "2. Xem ma tran vuong";
	cout << endl << "3. Tong 2 ma tran cung cap";
	cout << endl << "4. Hieu 2 ma tran cung cap";
	cout << endl << "5. Tich 2 ma tran";
	cout << endl << "===========================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout<<"\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, MaTranVuong c, int &n)
{
	double sum,p;
	switch (menu)
	{
		case 0:
			system("CLS");
			cout << endl<<"\nThoat khoi chuong trinh\n";
			break;
		case 1:
			system("CLS");
			cout << endl << "1. Nhap ma tran vuong";
			cout << "\nNhap cap ma tran vuong : n = ";
			cin >> n;
			cout << "\nNhap ma tran thu nhat : ";
			NhapMaTran(a, n);
			cout << "\nNhap ma tran thu hai : ";
			NhapMaTran(b, n);
			system("CLS");
			cout << "\nMa tran vuong thu nhat:\n";
			XuatMaTran(a, n);
			cout << "\nMa tran vuong thu hai:\n";
			XuatMaTran(b,n);
			break;
		case 2:
			system("CLS");
			cout << endl << "2. Xem ma tran vuong";
			cout << "\nMa tran vuong thu nhat : \n";
			XuatMaTran(a, n);
			cout << "\nMa tran vuong thu hai : \n";
			XuatMaTran(b, n);
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Tong 2 ma tran cung cap";
			cout << "\nKet qua : ";
			TinhTong_2_MaTran(a, b, c, n);
			XuatMaTran(c, n);
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Hieu 2 ma tran cung cap";
			cout << "\nKet qua : ";
			TinhHieu_2_MaTran(a, b, c, n);
			XuatMaTran(c, n);
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Tich 2 ma tran";
			cout << "\nKet qua : ";
			TinhTich_2_MaTran(a, b, c, n);
			XuatMaTran(c, n);
			break;
	}
	_getch();
}