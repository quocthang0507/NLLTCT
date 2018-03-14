#include <iostream>

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);

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
		
void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap tu dong day a";
	cout << endl << "2. Xem du lieu day a";
	cout << endl << "3. Chen x vao dau day";
	cout << endl << "4. Xoa phan tu dau day";
	cout << endl << "5. Cat phan tu dau day roi chen vao cuoi day";
	cout << endl << "6. Thay the cac gia tri x trong a bang gia tri y";
	cout << endl << "7. Sap day tang dan";
	cout << endl << "8. Sap day theo yeu cau :Duong Tang - Am Giam - Khong";
	cout << endl << "==========================================";
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	double x, y;
	switch (menu)
	{
		case 0:
			system("CLS");
			cout << endl<<"\n0. Thoat khoi chuong trinh.\n";
			break;
		case 1:
			system("CLS");
			cout << endl << "1. Nhap tu dong day a";
			NhapTuDong(a, n);
			system("CLS");
			cout << "\nDay so moi nhap:\n";
			XuatMang(a, n);
			break;
		case 2:
			system("CLS");
			cout << endl << "2. Xem du lieu day a";
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Chen x vao dau day";
			cout << "\nNhap gia tri can chen: x = ";
			cin >> x;
			cout << "\nKich thuoc mang hien hanh : n = " << n;
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			ChenDauDay(a, n, x);
			cout << "\n\nKich thuoc mang ket qua : n = " << n;
			cout << "\nDay so ket qua sau khi chen "<<x<<" vao dau day :\n";
			XuatMang(a, n);
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Xoa phan tu dau day";
			cout << "\nKich thuoc mang hien hanh : n = " << n;
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			XoaDauDay(a, n);
			cout << "\n\nKich thuoc mang ket qua : n = " << n;
			cout << "\nDay so ket qua sau khi xoa gia tri dau :\n";
			XuatMang(a, n);
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Cat phan tu dau day roi chen vao cuoi day";
			cout << "\nKich thuoc mang hien hanh : n = " << n;
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			CatDau_ChenCuoi(a, n);
			cout << "\n\nKich thuoc mang ket qua : n = " << n;
			cout << "\nDay so ket qua sau khi cat gia tri dau roi chen vao cuoi day:\n";
			XuatMang(a, n);
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Thay the cac gia tri x trong a bang gia tri y";
			cout << "\nNhap gia tri can thay the: x = ";
			cin >> x;
			cout << "\nNhap gia tri thay the: y = ";
			cin >> y;
			cout << "\nKich thuoc mang hien hanh : n = " << n;
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			Thay_X_Bang_Y(a, n, x,y);
			cout << "\n\nKich thuoc mang ket qua : n = " << n;
			cout << "\nDay so ket qua sau khi thay " << x << " bang gia tri "<<y<<":\n";
			XuatMang(a, n);
			break;
		case 7:
			system("CLS");
			cout << endl << "7. Sap day tang dan";
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			SapTang(a, n);
			cout << "\nDay so sau khi sap tang:\n";
			XuatMang(a, n);
			break;
		case 8:
			system("CLS");
			cout << endl << "8. Sap day theo yeu cau :Duong Tang - Am Giam - Khong";
			cout << "\nDay so hien hanh:\n";
			XuatMang(a, n);
			Sap_DuongTang_AmGiam_Khong(a, n);
			cout << "\nDay so sau khi sap theo yeu cau:\n";
			XuatMang(a, n);
			break;
	}
	_getch();
}