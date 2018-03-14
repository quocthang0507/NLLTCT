void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, PhanSo &a, PhanSo &b);

void XuatMenu()
{
	cout << "\n==============He thong chuc nang=========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap phan so";
	cout << "\n2. Xem phan so";
	cout << "\n3. Rut gon phan so";
	cout << "\n4. Cong phan so";
	cout << "\n5. Tru phan so";
	cout << "\n6. Nhan 2 phan so";
	cout << "\n7. Chia phan so";
	cout << "\n8. So sanh 2 phan so";
	cout << "\n=================================================================";
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

void XuLyMenu(int menu, PhanSo &a, PhanSo &b)
{
	int kq;
	PhanSo c={0,1};
	switch (menu)
	{
		case 0:
			system("CLS");
			cout << "\n0. Thoat khoi chuong trinh\n";
			break;
		case 1:
			system("CLS");
			cout << "\n1. Nhap phan so\n";
			cout << "\nPhan so a : \n";
			a=Nhap_PS();
			cout << "\n===================================\n";
			cout << "\nPhan so b : \n";
			b=Nhap_PS();
		case 2:
			system("CLS");
			cout << "\n2. Xem phan so\n";
			cout << "\nPhan so da nhap : "; 
			cout << "\nPhan so a : ";
			XuatPS(a);
			cout << "\nPhan so b : ";
			XuatPS(b);
			break;
		case 3:
			system("CLS");
			cout << "\n3. Rut gon phan so\n";
			cout << "\nPhan so a ban dau : ";
			XuatPS(a);
			RutGon(a);
			cout << "\nPhan so a sau khi rut gon : ";
			XuatPS(a);
			cout << "\nPhan so b ban dau : ";
			XuatPS(b);
			RutGon(b);
			cout << "\nPhan so b sau khi rut gon : ";
			XuatPS(b);
			break;
		case 4:
			system("CLS");
			cout << "\n4. Cong 2 phan so\n";
			cout << "\nPhan so a : ";
			XuatPS(a);
			cout << "\nPhan so b : ";
			XuatPS(b);
			c=CongPhanSo(a,b);
			cout << "\nKet qua : ";
			XuatPS(c);
			break;
		case 5:
			system("CLS");
			cout << "\n5. Tru phan so\n";
			cout << "\nPhan so a : ";
			XuatPS(a);
			cout << "\nPhan so b : ";
			XuatPS(b);
			c=TruPhanSo(a,b);
			cout << "\nKet qua : ";
			XuatPS(c);
			break;
		case 6:
			system("CLS");
			cout << "\n6. Nhan 2 phan so\n";
			cout << "\nPhan so a : ";
			XuatPS(a);
			cout << "\nPhan so b : ";
			XuatPS(b);
			c=NhanPhanSo(a,b);
			cout << "\nKet qua : ";
			XuatPS(c);
			break;
		case 7:
			system("CLS");
			cout << "\n7. Chia phan so\n";
			cout << "\nPhan so a : ";
			XuatPS(a);
			cout << "\nPhan so b : ";
			XuatPS(b);
			c=ChiaPhanSo(a,b);
			cout << "\nKet qua : ";
			XuatPS(c);
			break;
		case 8:
			system("CLS");
			cout << "\n8. So sanh 2 phan so\n";
			cout << "\nPhan so a : ";
			XuatPS(a);
			cout << "\nPhan so b : ";
			XuatPS(b);
			kq=SoSanhPhanSo(a,b);
			if (kq==-1)
				cout << "\nPhan so a < Phan so b";
			else
				if (kq==0)
					cout << "\nPhan so a = Phan so b";
				else cout << "\nPhan so a > Phan so b";
			break;
	}
	_getch();
}