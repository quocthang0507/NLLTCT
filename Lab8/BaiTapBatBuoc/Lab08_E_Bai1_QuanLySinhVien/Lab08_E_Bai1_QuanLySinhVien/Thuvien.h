#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

struct BangDiemSV
{
	char MaSV[8];
	char HoTen[25];
	unsigned int NamSinh;
	char Lop[10];
	double DiemTB;
	char XepLoai[5];
};

void XuatKeNgangDon()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 76; i++)
		cout << NGANGDON;
	cout << ':';
}

void Nhap1SV(BangDiemSV& p)
{
	cout << "\nNhap ma sinh vien (toi da 7 ky tu) : ";
	gets_s(p.MaSV, 8);
	cout << "\nNhap ho va ten : ";
	gets_s(p.HoTen, 25);
	cout << "\nNhap nam sinh : ";
	cin >> p.NamSinh;
	cin.ignore();
	cout << "\nNhap lop : ";
	gets_s(p.Lop, 10);
	cout << "\nNhap diem trung binh : ";
	cin >> p.DiemTB;
	cin.ignore();
}

void NhapDS(BangDiemSV a[MAX], int& n)
{
	int i;
	cout << "\nNhap so luong sinh vien n = ";
	cin >> n;
	cin.ignore();
	for (i = 0; i < n; i++)
	{
		system("CLS");
		cout << "\nNhap thong tin cho sinh vien thu " << i + 1 << " : ";
		Nhap1SV(a[i]);
	}
}

void XuatKeNgang()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left) << ':';
	for (i = 1; i <= 76; i++)
		cout << NGANGDOI;
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(10) << "Ma SV"
		<< ':'
		<< setw(28) << "Ho va ten"
		<< ':'
		<< setw(10) << "Nam sinh"
		<< ':'
		<< setw(7) << "Lop"
		<< ':'
		<< setw(10) << "Diem TB"
		<< ':'
		<< setw(6) << "XLoai"
		<< ':';
	XuatKeNgang();
}
void Xuat1SV(BangDiemSV p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(10) << p.MaSV
		<< ':'
		<< setw(28) << p.HoTen
		<< ':'
		<< setw(10) << p.NamSinh
		<< ':'
		<< setw(7) << p.Lop
		<< ':'
		<< setw(10) << setiosflags(ios::fixed) << setprecision(1) << p.DiemTB
		<< ':'
		<< setw(6) << ' '
		<< ':';
}

void Xuat1SV_DD(BangDiemSV p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(10) << p.MaSV
		<< ':'
		<< setw(28) << p.HoTen
		<< ':'
		<< setw(10) << p.NamSinh
		<< ':'
		<< setw(7) << p.Lop
		<< ':'
		<< setw(10) << setiosflags(ios::fixed) << setprecision(1) << p.DiemTB
		<< ':'
		<< setw(6) << p.XepLoai
		<< ':';
}

void XuatDS(BangDiemSV a[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat1SV(a[i]);
		if ((i + 1) % 5 == 0)
			XuatKeNgangDon();
	}
	XuatKeNgang();
}

void XuatDS_DD(BangDiemSV a[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat1SV_DD(a[i]);
		if ((i + 1) % 5 == 0)
			XuatKeNgangDon();
	}
	XuatKeNgang();
}

void XuatDS_Lop(BangDiemSV a[MAX], int n)
{
	int i, j, dau, m = 0, dem = 0;
	BangDiemSV b[MAX];
	int vt[MAX];
	for (i = 0; i < n; i++)
	{
		dau = 1;
		for (j = 0; j < m && dau; j++)
			dau = dau && (_strcmpi(a[i].Lop, b[j].Lop) != 0);
		if (dau)
		{
			strcpy_s(b[m++].Lop, MAX, a[i].Lop);
			vt[m] = i; //Mảng vt dùng để lưu vị trí các phần tử a[i].Lop phân biệt
			dem++; //Xác định có bao nhiêu lớp khác nhau
		}
	}
	m = 1;
	XuatTieuDe();
	while (m <= dem)
	{
		for (i = 0; i < n; i++)
		{
			if (_strcmpi(a[i].Lop, a[vt[m]].Lop) == 0)
			{
				cout << endl;
				Xuat1SV_DD(a[i]);
			}
		}
		if (m < dem) XuatKeNgangDon();//Ngăn cách các lớp bằng dòng kẻ ngang và không kẻ ở dòng cuối cùng
		m++;
	};
	XuatKeNgang();
}

void HoanVi(BangDiemSV& p, BangDiemSV& q)
{
	BangDiemSV t;
	t = p;
	p = q;
	q = t;
}

void SapXep_DiemTB_Giam(BangDiemSV a[MAX], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i].DiemTB < a[j].DiemTB)
				HoanVi(a[i], a[j]);
}

void SapXep_Ten_Tang_MaSV_Tang(BangDiemSV a[MAX], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].HoTen, a[j].HoTen) > 0)
				HoanVi(a[i], a[j]);
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].HoTen, a[j].HoTen) == 0)
				if (_strcmpi(a[i].MaSV, a[j].MaSV) > 0)
					HoanVi(a[i], a[j]);
}

void XuatDS_TheoTen(BangDiemSV a[MAX], int n, char HoTen[25])
{
	int i, dem = 0;
	for (i = 0; i < n; i++)
		if (_strcmpi(a[i].HoTen, HoTen) == 0)
			dem++;
	if (!dem)
		cout << "\nKhong co sinh vien co ten la " << HoTen;
	else
	{
		cout << "\nCo " << dem << " sinh vien co ten la " << HoTen << ", danh sach nhu sau :\n";
		XuatTieuDe();
		for (i = 0; i < n; i++)
			if (_strcmpi(a[i].HoTen, HoTen) == 0)
			{
				cout << endl;
				Xuat1SV_DD(a[i]);
			}
		XuatKeNgang();
	}
}

void XuatDS_DiemTB_CaoNhat(BangDiemSV a[MAX], int n)
{
	int i, dem = 0;
	double max = a[0].DiemTB;
	for (i = 1; i < n; i++)
		if (max < a[i].DiemTB)
			max = a[i].DiemTB;
	for (i = 0; i < n; i++)
		if (a[i].DiemTB == max)
			dem++;
	cout << "\nCo " << dem << " sinh vien co diem trung binh cao nhat, danh sach nhu sau : \n";
	XuatTieuDe();
	for (i = 0; i < n; i++)
		if (a[i].DiemTB == max)
		{
			cout << endl;
			Xuat1SV_DD(a[i]);
		}
	XuatKeNgang();
}

void XepLoaiHocLuc(BangDiemSV a[MAX], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i].DiemTB <= 10 && a[i].DiemTB >= 8.5)
			strcpy_s(a[i].XepLoai, "Gioi");
		if (a[i].DiemTB < 8.5 && a[i].DiemTB >= 7)
			strcpy_s(a[i].XepLoai, "Kha");
		if (a[i].DiemTB < 7 && a[i].DiemTB >= 5.5)
			strcpy_s(a[i].XepLoai, "TB");
		if (a[i].DiemTB < 5.5 && a[i].DiemTB >= 4)
			strcpy_s(a[i].XepLoai, "Yeu");
		if (a[i].DiemTB < 4 && a[i].DiemTB >= 0)
			strcpy_s(a[i].XepLoai, "Kem");
	}
}