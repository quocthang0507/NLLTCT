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
		cout << "\nNhap 1 so trong khoang [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0<= stt &&stt <=soMenu)
			break;
	}
	return stt;
}

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Xem lai mang a";
	cout << endl << "2. Chen phan tu x tai vi tri cho truoc";
	cout << endl << "3. Chen phan tu x vao sau phan tu lon nhat (dau tien tim duoc)";
	cout << endl << "4. Chen phan tu x vao truoc so nguyen to dau tien";
	cout << endl << "5. Chen phan tu x vao sau moi phan tu y cho truoc";
	cout << endl << "6. Thay the gia tri nho nhat bang gia tri x cho truoc";
	cout << endl << "===========================================";
	cout << endl << "7. Chon lai bo du lieu moi cho day so";
	cout << endl << "===========================================";
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	int vt, x, t;
	switch (menu)
	{
		case 0:
			system("CLS");
			cout << endl<<"\n0. Thoat khoi chuong trinh\n";
			break;
		case 1:
			system("CLS");
			cout << endl << "1. Xem lai mang a";
			cout << "\nDay hien hanh : \n";
			XuatMang(a,n);
			break;
		case 2:
			system("CLS");
			cout << endl << "2. Chen phan tu x tai vi tri cho truoc";
			cout << endl << "Chon vi tri muon chen vao [0,...," << n-1 <<"] : ";
			cin >> vt;
			cout << endl << "Phan tu can chen vao la : ";
			cin >> x;
			cout << endl << "Mang truoc : \n";
			XuatMang(a,n);
			cout << endl << "Mang sau khi chen : \n";
			ChenBatKy(a,n,x,vt);
			XuatMang(a,n);
			break;
		case 3:
			system("CLS");
			cout << endl << "3. Chen phan tu x vao sau phan tu lon nhat (dau tien tim duoc)";
			cout << endl << "Phan tu can chen vao la : ";
			cin >> x;
			t=PhanTuLonNhat(a,n);
			vt=PhanTuDauTien(a,n,t);
			cout << endl << "Mang truoc : \n";
			XuatMang(a,n);
			cout << endl << "Mang sau khi chen : \n";
			ChenBatKy(a,n,x,vt+1); //Chen sau
			XuatMang(a,n);
			break;
		case 4:
			system("CLS");
			cout << endl << "4. Chen phan tu x vao truoc so nguyen to dau tien";
			for (int i=1;i<n;i++)
				if (KiemTraNT(a[i]))
				{
					vt=i;
					break;
				}
			cout << endl << "Phan tu can chen vao la : ";
			cin >> x;
			cout << endl << "Mang truoc : \n";
			XuatMang(a,n);
			cout << endl << "Mang sau khi chen : \n";
			ChenBatKy(a,n,x,vt); //Chen truoc
			XuatMang(a,n);
			break;
		case 5:
			system("CLS");
			cout << endl << "5. Chen phan tu x vao sau moi phan tu y cho truoc";
			int y;
			cout << endl << "Nhap phan tu y : ";
			cin >> y;
			cout << endl << "Phan tu can chen vao la : ";
			cin >> x;
			cout << endl << "Mang truoc : \n";
			XuatMang(a,n);
			cout << endl << "Mang sau khi chen : \n";
			ChenXTruocY(a,n,y,x);
			XuatMang(a,n);
			break;
		case 6:
			system("CLS");
			cout << endl << "6. Thay the gia tri nho nhat bang gia tri x cho truoc";
			cout << endl << "Phan tu can thay the vao la : ";
			cin >> x;
			cout << endl << "Mang truoc : \n";
			XuatMang(a,n);
			cout << endl << "Mang sau khi chen : \n";			
			ThayX(a,n,x);
			XuatMang(a,n);
			break;
		case 7:
			system("CLS");
			cout << endl << "7. Chon bo du lieu khac";
			cout << "\nNhap lai kich thuoc n : ";
			cin >> n;
			NhapMang(a, n);
			system("CLS");
			cout << "\nDay so moi nhap:\n";
			XuatMang(a, n);
			break;
	}
	_getch();
}