void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, BangDiemSV a[MAX], int &n);

void XuatMenu()
{
	cout << "\n=======================HE THONG CHUC NANG=======================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Tao bang diem sinh vien";
	cout << "\n2. Xem bang diem sinh vien";
	cout << "\n3. Xem bang diem day du";
	cout << "\n4. Xuat bang diem sinh vien theo tung lop";
	cout << "\n5. Sap bang diem sinh vien giam dan theo diem trung binh";
	cout << "\n6. Sap xep va xuat bang diem tang dan theo ho ten, neu trung, sap tang theo ma sinh vien";
	cout << "\n7. Tim va xuat thong tin cua sinh vien co ten cho truoc";
	cout << "\n8. Tim va xuat thong tin cua cac sinh vien co diem trung binh cao nhat";
	cout << "\n9. Xep loai hoc luc cua sinh vien dua vao diem trung binh";
	cout << "\n================================================================";
	cout << "\n(Du lieu da duoc khoi tao san, nhan 1 de tao lai bo du lieu moi)";
	cout << "\n================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0<=stt && stt <=soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, BangDiemSV a[MAX], int &n)
{
	char HoTen[25];
	switch(menu)
	{
	case 0:
		system("CLS");
		cout << "\nThoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Tao bang diem sinh vien\n";
		NhapDS(a,n);
		system("CLS");
		XuatDS(a,n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem bang diem sinh vien\n";
		XuatDS(a,n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Xem bang diem day du\n";
		if (strcmpi(a[1].XepLoai," ")==0)
			cout << "\nVui long chon chuc nang 9 de xep loai truoc khi vao chuc nang nay";
		else XuatDS_DD(a,n);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Xuat bang diem sinh vien theo tung lop\n";
		XuatDS_Lop(a,n);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Sap bang diem sinh vien giam dan theo diem trung binh\n";
		cout << "\nDanh sach ban dau : \n";
		XuatDS_DD(a,n);
		cout << "\n\nDanh sach sau khi sap xep theo yeu cau : \n";
		SapXep_DiemTB_Giam(a,n);
		XuatDS_DD(a,n);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Sap xep va xuat bang diem tang dan theo ho ten, neu trung, sap tang theo ma sinh vien\n";
		cout << "\nDanh sach ban dau : \n";
		XuatDS_DD(a,n);
		cout << "\n\nDanh sach sau khi sap xep theo yeu cau : \n";
		SapXep_Ten_Tang_MaSV_Tang(a,n);
		XuatDS_DD(a,n);
		break;
	case 7:
		system("CLS");
		cout << "\n7. Tim va xuat thong tin cua sinh vien co ten cho truoc\n";
		cout << "\nNhap ten can tim : ";
		cin >> HoTen;
		XuatDS_TheoTen(a,n,HoTen);
		break;
	case 8:
		system("CLS");
		cout << "\n8. Tim va xuat thong tin cua cac sinh vien co diem trung binh cao nhat\n";
		XuatDS_DiemTB_CaoNhat(a,n);
		break;
	case 9:
		system("CLS");
		cout << "\n9. Xep loai hoc luc cua sinh vien dua vao diem trung binh\n";
		cout << "\nDanh sach sau khi xep loai : \n";
		XepLoaiHocLuc(a,n);
		XuatDS_DD(a,n);
		break;
	}
	_getch();
}