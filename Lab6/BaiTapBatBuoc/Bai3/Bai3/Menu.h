void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int & n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong";
	cout << endl << "2. Xem ma tran vuong";
	cout << endl << "3. Hoan vi hai cot j va h cua ma tran";
	cout << endl << "4. Hoan vi hai hang i va k cua ma tran";
	cout << endl << "5. Tim ma tran hoan vi";
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

void XuLyMenu(int menu, MaTranVuong &a, MaTranVuong c, int &n)
{
	int x, y;
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
			cout << "\nNhap ma tran : ";
			NhapMaTran(a, n);
			system("CLS");
			cout << "\nXem lai ma tran vua nhap : ";
			XuatMaTran(a,n);
			break;
		case 2:
			system("CLS");
			cout << endl << "2. Xem ma tran vuong";
			XuatMaTran(a, n);
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Hoan vi hai cot j va h cua ma tran";
			cout << endl << "\nNhap cot thu nhat [0,..," << n-1 << "] : ";
			cin >> x;
			cout << endl << "Nhap cot thu hai [0,..," << n-1 << "] : ";
			cin >> y;
			cout << endl << "Ma tran truoc khi hoan vi : ";
			XuatMaTran(a,n);
			cout << endl << "Ma tran sau khi hoan vi : ";
			HoanVi2Cot(a,c,x,y,n);
			XuatMaTran(a,n);
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Hoan vi hai hang i va k cua ma tran";
			cout << endl << "\nNhap hang thu nhat [0,..," << n-1 << "] : ";
			cin >> x;
			cout << endl << "Nhap hang thu hai [0,..," << n-1 << "] : ";
			cin >> y;
			cout << endl << "Ma tran truoc khi hoan vi : ";
			XuatMaTran(a,n);
			cout << endl << "Ma tran sau khi hoan vi : ";
			HoanVi2Hang(a,c,x,y,n);
			XuatMaTran(a,n);
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Tim ma tran hoan vi";
			cout << endl << "Ma tran truoc khi hoan vi : ";
			XuatMaTran(a,n);
			cout << endl << "Ma tran sau khi hoan vi : ";
			MaTranHoanVi(a,c,n);
			XuatMaTran(a,n);
			break;
	}
	_getch();
}