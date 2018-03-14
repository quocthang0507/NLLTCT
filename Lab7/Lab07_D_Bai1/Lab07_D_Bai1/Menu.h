void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String a, String b);

void XuatMenu()
{
	cout << "\n=================== Bang Menu ===================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. gets_s : Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. strlen_Tinh chieu dai chuoi";
	cout << "\n4. strcat_s_Noi chuoi sau vao sau chuoi truoc";
	cout << "\n5. strcpy_s_Chep chuoi sau vao chuoi truoc";
	cout << "\n6. _strcmpi_So sanh chuoi _ khong phan biet KT thuong, HOA";
	cout << "\n7. strcmp_So sanh chuoi _ phan biet KT thuong, HOA";
	cout << "\n8. Noi chuoi sau vao sau chuoi truoc";
	cout << "\n9. Chep chuoi sau qua chuoi truoc";
	cout << "\n10. So sanh chuoi _ khong phan biet KT thuong, HOA";
	cout << "\n11. So sanh chuoi _ phan biet KT thuong, HOA";
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

void XuLyMenu(int menu, String a, String b)
{
	int kq;
	switch (menu)
	{
		case 0:
			system("CLS");
			cout << "\n0. Thoat khoi chuong trinh\n";
			break;
		case 1:
			system("CLS");
			cout << "\n1. gets_s_Nhap chuoi a: ";
			gets_s_NhapChuoi(a, 'a');
			cout << "\nChuoi a vua nhap: ";
			XuatChuoi(a);
			gets_s_NhapChuoi(b,'b');
			cout << "\nChuoi b vua nhap: ";
			XuatChuoi(b);
			cout << "\nNhan phim bat ky de tiep tuc";			
			break;
		case 2:
			system("CLS");
			cout << "\n2. Xem chuoi";
			cout << "\nChuoi a: ";
			XuatChuoi(a);
			cout << "\nChuoi b: ";
			XuatChuoi(b);
			cout << "\nNhan phim bat ky de tiep tuc";
			break;
		case 3:
			system("CLS");
			cout << "\n3. strlen_Tinh chieu dai chuoi";
			cout << "\nChuoi a: ";
			XuatChuoi(a);
			cout << "\nChieu dai chuoi a: l = " << strlen_TinhChieuDaiChuoi(a);
			cout << "\nChuoi b: ";
			XuatChuoi(b);
			cout << "\nChieu dai chuoi b: l = " << strlen_TinhChieuDaiChuoi(b);
			cout << "\nNhan phim bat ky de tiep tuc";
			break;
		case 4:
			system("CLS");
			cout << "\n4. strcat_s_Noi chuoi sau vao sau chuoi truoc";
			cout << "\nChuoi truoc : a = ";
			XuatChuoi(a);
			cout << "\nChieu sau : b = ";
			XuatChuoi(b);
			strcat_s_Noi_ChuoiSau_VaoSau_ChuoiTruoc(a, b);
			cout << "\nChuoi truoc sau khi noi : a = ";
			XuatChuoi(a);
			break;
		case 5:
			system("CLS");
			cout << "\n5. strcpy_s_Chep chuoi sau qua chuoi truoc";
			cout << "\nChuoi sau : b = ";
			XuatChuoi(b);
			strcpy_s_Chep_ChuoiSau_Qua_ChuoiTruoc(a, b);
			cout << "\nChuoi truoc a,do b chep qua : a = ";
			XuatChuoi(a);
			break;
		case 6:
			system("CLS");
			cout << "\n6. _strcmpi _ So sanh chuoi _khong phan biet KT thuong, HOA";
			cout << "\nChuoi a = ";
			XuatChuoi(a);
			cout << "\nChieu b = ";
			XuatChuoi(b);
			kq = _strcmpi_SoSanhChuoi_KPB(a, b);
			if (kq > 0)
				cout << "\na > b";
			else
				if(kq < 0)
					cout << "\na < b";
				else
					cout << "\na == b";
			break;
		case 7:
			system("CLS");
			cout << "\n7. strcmp _ So sanh chuoi _ phan biet KT thuong, HOA";
			cout << "\nChuoi a = ";
			XuatChuoi(a);
			cout << "\nChieu b = ";
			XuatChuoi(b);
			kq = strcmp_SoSanhChuoi_PB(a, b);
			if (kq > 0)
				cout << "\na > b";
			else
				if (kq < 0 )
					cout << "\na < b";
				else
					cout << "\na == b";
			break;
		case 8:
			system("CLS");
			cout << "\n8.Noi chuoi sau vao sau chuoi truoc";
			cout << "\nChuoi truoc : a = ";
			XuatChuoi(a);
			cout << "\nChieu sau : b = ";
			XuatChuoi(b);
			Noi_ChuoiSau_VaoSau_ChuoiTruoc(a, b);
			cout << "\nChuoi truoc sau khi noi : a = ";
			XuatChuoi(a);
			break;
		case 9:
			system("CLS");
			cout << "\n9. Chep chuoi sau qua chuoi truoc";
			cout << "\nChuoi sau : b = ";
			XuatChuoi(b);
			Chep_ChuoiSau_Qua_ChuoiTruoc(a, b);
			cout << "\nChuoi truoc a,do b chep qua : a = ";
			XuatChuoi(a);
			break;
		case 10:
			system("CLS");
			cout << "\n10. So sanh chuoi _khong phan biet KT thuong, HOA";
			cout << "\nChuoi a = ";
			XuatChuoi(a);
			cout << "\nChieu b = ";
			XuatChuoi(b);
			kq = SoSanhChuoi_KPB(a, b);
			if (kq == 1)
				cout << "\na > b";
			else
				if(kq == -1)
					cout << "\na < b";
				else
					cout << "\na == b";			
			break;
		case 11:
			system("CLS");
			cout << "\n7. So sanh chuoi _ phan biet KT thuong, HOA";
			cout << "\nChuoi a = ";
			XuatChuoi(a);
			cout << "\nChieu b = ";
			XuatChuoi(b);
			kq = SoSanhChuoi_PB(a, b);
			if (kq == 1)
				cout << "\na > b";
			else
				if (kq == -1)
					cout << "\na < b";
				else
					cout << "\na == b";
			break;
	}
	_getch();
}