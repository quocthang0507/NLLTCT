void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(DaySo a, int menu, int &n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap tu dong day so nguyen trong khoang [-20;+20]";
	cout << endl << "2. Xem day so";
	cout << endl << "3. Tinh tong cac gia tri khac nhau trong day";
	cout << endl << "4. Xuat so lan xuat hien cua gia tri nho nhat va vi tri cua no";
	cout << endl << "5. Xoa tat ca cac phan tu trong day co gia tri lon nhat";
	cout << endl << "6. Sap day: Dau day la cac so nguyen to giam dan";
	cout << endl << "   Tiep theo la cac so khong nguyen to tang dan";
	cout << endl << "===========================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout<<"\nNhap 1 so trong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(DaySo a, int menu, int &n)
{
	int ketQua;
	switch (menu)
	{
		case 0:
			system("CLS");
			cout << endl <<"Thoat khoi chuong trinh";
			break;
		case 1:
			system("CLS");
			cout << endl << "1. Nhap tu dong day so nguyen trong khoang [-20;+20]\n";
			NhapTuDong(a,n);
			system("CLS");
			cout << endl << "Day so vua tao : \n";
			XuatMang(a,n);
			break;
		case 2:
			system("CLS");
			cout << endl << "2. Xem day so\n";
			XuatMang(a,n);
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Tinh tong cac gia tri khac nhau trong day\n";
			ketQua=TinhTong_PhanBiet(a,n);
			cout << endl << "Ket qua : " << ketQua;
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Xuat so lan xuat hien cua gia tri nho nhat va vi tri cua no\n";
			cout << endl << "Xem lai day so : \n";
			XuatMang(a,n);
			XuatMin_VT_SoLan(a,n);
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Xoa tat ca cac phan tu trong day co gia tri lon nhat\n";
			cout << endl << "Day so ban dau : \n";
			XuatMang(a,n);
			cout << endl << "Day sau khi xoa : \n";
			XoaMax(a,n);
			XuatMang(a,n);
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Sap day: Dau day la cac so nguyen to giam dan"
				<< endl << "    Tiep theo la cac so khong nguyen to tang dan";
			cout << endl << "Day so ban dau : \n";
			XuatMang(a,n);
			cout << endl << "\nDay sau khi sap : \n";
			SapDay(a,n);
			XuatMang(a,n);
			break;
	}
	_getch();
}