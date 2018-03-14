void XuatMenu()
{
	cout << "\n======================HE THONG CHUC NANG======================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap ma tran";
	cout << "\n2. Xem ma tran";
	cout << "\n3. Kiem tra ma tran co phai la doi xung";
	cout << "\n4. Kiem tra ma tran co phai la tam giac tren";
	cout << "\n5. Kiem tra ma tran co phai la tam giac duoi";
	cout << "\n6. Kiem tra ma tran co phai la tam giac cheo";
	cout << "\n7. Kiem tra ma tran co phai la tam giac don vi";
	cout << "\n==============================================================";
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
		if (0<=stt && stt<=soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, MaTranVuong a, int &n)
{
	int t;
	switch(menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete []a;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap ma tran\n";
		cout << "\nNhap cap cua ma tran : ";
		cin >> n;
		do
		{
			cout << "\nBan muon nhap ma tran tu dong khong? Go 1 de DONG Y, 0 de TU NHAP : ";
			cin >> t;
		}
		while (t!=0 && t!=1);
		if (t==0)
			NhapMaTran(a,n);
		else NhapMaTranTD(a,n);
		cout << "\nMa tran da nhap : ";
		XuatMaTran(a,n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem ma tran\n";
		XuatMaTran(a,n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Kiem tra ma tran co phai la doi xung\n";
		cout << "\nXem lai ma tran : ";
		XuatMaTran(a,n);
		if (KT_DoiXung(a,n))
			cout << "\nDay la ma tran doi xung!";
		else cout << "\nDay khong phai la ma tran doi xung!";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Kiem tra ma tran co phai la tam giac tren\n";
		cout << "\nXem lai ma tran : ";
		XuatMaTran(a,n);
		if (KT_TamGiacTren(a,n))
			cout << "\nDay la ma tran tam giac tren!";
		else cout << "\nDay khong phai la ma tran tam giac tren!";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Kiem tra ma tran co phai la tam giac duoi\n";
		cout << "\nXem lai ma tran : ";
		XuatMaTran(a,n);
		if (KT_TamGiacDuoi(a,n))
			cout << "\nDay la ma tran tam giac duoi!";
		else cout << "\nDay khong phai la ma tran tam giac duoi!";
		break;
	case 6:
		system("CLS");
		cout << "\n6. Kiem tra ma tran co phai la tam giac cheo\n";
		cout << "\nXem lai ma tran : ";
		XuatMaTran(a,n);
		if (KT_TamGiacCheo(a,n))
			cout << "\nDay la ma tran tam giac cheo!";
		else cout << "\nDay khong phai la ma tran tam giac cheo!";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Kiem tra ma tran co phai la tam giac don vi\n";
		cout << "\nXem lai ma tran : ";
		XuatMaTran(a,n);
		if (KT_TamGiacDonVi(a,n))
			cout << "\nDay la ma tran tam giac don vi!";
		else cout << "\nDay khong phai la ma tran tam giac don vi!";
		break;
	}
	_getch();
}