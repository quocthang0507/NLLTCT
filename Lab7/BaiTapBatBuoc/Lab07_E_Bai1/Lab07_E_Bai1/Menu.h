void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String a);

void XuatMenu()
{
	cout << "\n=================== Bang Menu ===================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Tinh chieu dai chuoi";
	cout << "\n4. Chen ky tu x vao dau chuoi";
	cout << "\n5. Chen ky tu x vao cuoi chuoi";
	cout << "\n6. Chen ky tu x vao chuoi a tai vi tri cho truoc";
	cout << "\n7. Xoa ky tu dau chuoi";
	cout << "\n8. Xoa ky tu cuoi chuoi";
	cout << "\n9. Xoa ky tu tai vi tri cho truoc";
	cout << "\n10. Cat ky tu dau chuoi roi chen vao vi tri cuoi chuoi (da cat)";
	cout << "\n11. Cat ky tu cuoi chuoi roi chen vao vi tri dau chuoi (da cat)";
	cout << "\n12. Xoa tat ca ky tu x cho truoc khoi chuoi";
	cout << "\n13. Thay the tat ca ky tu x trong chuoi thanh ky tu y";
	cout << "\n=================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout<<"\n\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, String a)
{
	char x, y; 			
	int vt, kq;
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
			gets_s(a,MAX);
			cout << "\nNhan phim bat ky de tiep tuc";			
			break;
		case 2:
			system("CLS");
			cout << "\n2. Xem chuoi\n";
			cout << "\nChuoi da nhap : " << a;
			break;
		case 3:
			system("CLS");
			cout << "\n3. Tinh chieu dai chuoi\n";
			cout << "\nChuoi co chieu dai la : " << TinhChieuDaiChuoi(a);
			break;
		case 4:
			system("CLS");
			cout << "\n4. Chen ky tu x vao dau chuoi\n";
			cout << "\nNhap ky tu x can chen vao dau chuoi : ";
			cin >> x;
			cout << "\nChuoi truoc khi chen : " << a;
			ChenDau_KT(a,x);
			cout << "\nChuoi sau khi chen : " << a;
			break;
		case 5:
			system("CLS");
			cout << "\n5. Chen ky tu x vao cuoi chuoi\n";
			cout << "\nNhap ky tu x can chen vao cuoi chuoi : ";
			cin >> x;
			cout << "\nChuoi truoc khi chen : " << a;
			ChenCuoi_KT(a,x);
			cout << "\nChuoi sau khi chen : " << a;
			break;
		case 6:
			system("CLS");
			cout << "\n6. Chen ky tu x vao chuoi a tai vi tri cho truoc\n";
			cout << "\nNhap vi tri can chen : ";
			cin >> vt;
			cout << "\nNhap ky tu x can chen vao vi tri " << vt << " : ";
			cin >> x;
			cout << "\nChuoi truoc khi chen : " << a;
			ChenKT_VT(a,x,vt);
			cout << "\nChuoi sau khi chen : " << a;
			break;
		case 7:
			system("CLS");
			cout << "\n7. Xoa ky tu dau chuoi\n";
			cout << "\nChuoi truoc khi xoa : " << a;
			XoaDau_KT(a);
			cout << "\nChuoi sau khi xoa ky tu dau : " << a;
			break;
		case 8:
			system("CLS");
			cout << "\n8. Xoa ky tu cuoi chuoi\n";
			cout << "\nChuoi truoc khi xoa : " << a;
			XoaCuoi_KT(a);
			cout << "\nChuoi sau khi xoa ky tu cuoi : " << a;
			break;
		case 9:
			system("CLS");
			cout << "\n9. Xoa ky tu tai vi tri cho truoc\n";
			cout << "\nNhap vi tri can xoa: ";
			cin >> vt;
			cout << "\nChuoi truoc khi xoa : " << a;
			XoaKT_VT(a,vt);
			cout << "\nChuoi sau khi xoa tai vi tri " << vt << " : " << a;
			break;
		case 10:
			system("CLS");
			cout << "\n10. Cat ky tu dau chuoi roi chen vao vi tri cuoi chuoi (da cat)\n";
			cout << "\nChuoi truoc khi cat : " << a;
			CatDauChenCuoi(a);
			cout << "\nChuoi sau khi cat : " << a;
			break;
		case 11:
			system("CLS");
			cout << "\n11. Cat ky tu cuoi chuoi roi chen vao vi tri dau chuoi (da cat)\n";
			cout << "\nChuoi truoc khi cat : " << a;
			CatCuoiChenDau(a);
			cout << "\nChuoi sau khi cat : " << a;
			break;
		case 12:
			system("CLS");
			cout << "\n12. Xoa tat ca ky tu x cho truoc khoi chuoi\n";
			cout << "\nNhap ky tu x can xoa khoi chuoi : ";
			cin >> x;
			cout << "\nChuoi truoc khi xoa : " << a;
			Xoa_x(a,x);
			cout << "\nChuoi sau khi xoa ky tu '" << x << "' : " << a;
			break;
		case 13:
			system("CLS");
			cout << "\n13. Thay the tat ca ky tu x trong chuoi thanh ky tu y\n";
			cout << "\nNhap ky tu x : ";
			cin >> x;
			cout << "\nNhap ky tu y : ";
			cin >> y;
			cout << "\nChuoi truoc khi thay the : " << a;
			Thay_x_Bang_y(a, x, y);
			cout << "\nChuoi sau khi thay the cac ky tu '" << x << "' thanh " << y << " : " << a;
			break;
	}
	_getch();
}