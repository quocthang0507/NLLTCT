#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

struct TaiLieu
{
	char MaTL[11];
	char TuaDe[25];
	char LoaiTL[10];
	unsigned int NamXB;
	char TacGia[50];
	char NhaXB[10];
	unsigned long Gia;
};

void ChenTL(char* MaTL, char* TuaDe, char* LoaiTL, unsigned NamXB, char* TacGia, char* NhaXB, unsigned long Gia, TaiLieu* a, int& n);
void TaoDanhSach(TaiLieu* a, int& n);
void XuatKeNgangDoi();
void XuatKeNgangDon();
void XuatTieuDe();
void Xuat1TL(TaiLieu p);
void XuatDanhSach(TaiLieu* a, int n);
unsigned long TinhTongGia(TaiLieu* a, int n);
void TimSach_NhaXB_TheoNamXB(TaiLieu* a, int n, char* NhaXB, unsigned NamXB);
void TimBaiBaoKH_TheoTacGia(TaiLieu* a, int n, char* tacGia);
int ThongKe_SoLuong_TheoLoai(TaiLieu* a, int n, char* loaiTaiLieu);
void TimTaiLieu_TheoNam(TaiLieu* a, int n, unsigned nam);
void LayTatCa_NamXB(TaiLieu* a, int n, int* danhSachNam, int& soNam);
void HoanVi_SoNguyen(int& a, int& b);
void HoanVi_TaiLieu(TaiLieu& a, TaiLieu& b);
void SapXep_MangSoNguyen(int* a, int n);
void XuatDanhSach_TheoNam(TaiLieu* a, int n);
void TimTaiLieu_TheoMaTaiLieu(TaiLieu* a, int n, char* maTL);
void SapXep_TaiLieu_TuaDe(TaiLieu* a, int n);

void ChenTL(char* MaTL, char* TuaDe, char* LoaiTL, unsigned NamXB, char* TacGia, char* NhaXB, unsigned long Gia, TaiLieu* a, int& n)
{
	if (n < MAX)
	{
		strcpy_s((a + n)->MaTL, MAX, MaTL);
		strcpy_s((a + n)->TuaDe, MAX, TuaDe);
		strcpy_s((a + n)->LoaiTL, MAX, LoaiTL);
		(a + n)->NamXB = NamXB;
		strcpy_s((a + n)->TacGia, MAX, TacGia);
		strcpy_s((a + n)->NhaXB, MAX, NhaXB);
		(a + n)->Gia = Gia;
		n++;
	}
}

void TaoDanhSach(TaiLieu* a, int& n)
{
	ChenTL("100153", "10000 cau hoi vi sao", "Sach", 2007, "Nhieu tac gia", "Tre", 25000, a, n);
	ChenTL("100159", "210 bai luan Tieng Anh", "Sach", 2005, "Tran Cong, Nhan", "GD", 30000, a, n);
	ChenTL("101830", "Nhung giai Nobel TK XIX", "Bao KH", 2010, "Nhieu tac gia", "TH", 20000, a, n);
	ChenTL("101001", "Hoa hoc tro ky 81", "Tap chi", 2016, "", "Tre", 23000, a, n);
	ChenTL("100739", "Luan van ve moi truong", "Luan van", 2008, "Nguyen Duc, Dong", "", 32000, a, n);
	ChenTL("100987", "SGK lop 12 - Can ban", "Sach", 2017, "Nhieu tac gia", "GD", 210000, a, n);
	ChenTL("123456", "SGK lop 12 - Nang cao", "Sach", 2017, "Nhieu tac gia", "GD", 220000, a, n);
	ChenTL("102467", "Bao Muc tim ky 33", "Tap chi", 2012, "", "Tre", 17000, a, n);
	ChenTL("135790", "TH bai luan truong DH DL", "Luan van", 2016, "Nhieu tac gia", "GD", 31000, a, n);
	ChenTL("101987", "Bi quyet lam giau", "Sach", 2013, "Auger, Mandeno", "TH", 75000, a, n);
	ChenTL("123890", "Giai ma giac mo", "Sach", 2006, "Nguyen Van, Chung", "Tre", 45000, a, n);
	ChenTL("171514", "Vu tru ky bi", "Bao KH", 2009, "Brian, Greene", "Tre", 19000, a, n);
	ChenTL("101019", "Tap chi HTV so 110", "Tap chi", 2007, "", "TH", 25000, a, n);
}

void XuatKeNgangDoi()
{
	int i;
	cout << endl;
	cout << setiosflags(ios::left) << ':';
	for (i = 1; i <= 92; i++)
		cout << NGANGDOI;
	cout << ':';
}

void XuatKeNgangDon()
{
	int i;
	cout << endl;
	cout << setiosflags(ios::left) << ':';
	for (i = 1; i <= 92; i++)
		cout << NGANGDON;
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(7) << "Ma TL"
		<< ':'
		<< setw(25) << "Tua de"
		<< ':'
		<< setw(8) << "Loai TL"
		<< ':'
		<< setw(6) << "Nam XB"
		<< ':'
		<< setw(25) << "Tac gia"
		<< ':'
		<< setw(6) << "Nha XB"
		<< ':'
		<< setw(9) << "Gia"
		<< ':';
	XuatKeNgangDoi();
}

void Xuat1TL(TaiLieu p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(7) << p.MaTL
		<< ':'
		<< setw(25) << p.TuaDe
		<< ':'
		<< setw(8) << p.LoaiTL
		<< ':'
		<< setw(6) << p.NamXB
		<< ':'
		<< setw(25) << p.TacGia
		<< ':'
		<< setw(6) << p.NhaXB
		<< ':'
		<< setw(9) << p.Gia
		<< ':';
}

void XuatDanhSach(TaiLieu* a, int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat1TL(*(a + i));
		if ((i + 1) % 5 == 0)
			XuatKeNgangDon();
	}
	XuatKeNgangDoi();
}

unsigned long TinhTongGia(TaiLieu* a, int n)
{
	unsigned long tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += ((TaiLieu) * (a + i)).Gia;
	}
	return tong;
}

void TimSach_NhaXB_TheoNamXB(TaiLieu* a, int n, char* nhaXB, unsigned namXB)
{
	XuatTieuDe();
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		TaiLieu t = *(a + i);
		if (_strcmpi(t.NhaXB, nhaXB) == 0 && t.NamXB == namXB && _strcmpi(t.LoaiTL, "Sach") == 0)
		{
			cout << endl;
			dem++;
			Xuat1TL(t);
			if (dem % 5 == 0)
				XuatKeNgangDon();
		}
	}
	XuatKeNgangDoi();
}

void TimBaiBaoKH_TheoTacGia(TaiLieu* a, int n, char* tacGia)
{
	XuatTieuDe();
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		TaiLieu t = *(a + i);
		if (_strcmpi(t.TacGia, tacGia) == 0 && _strcmpi(t.LoaiTL, "Bao KH") == 0)
		{
			cout << endl;
			dem++;
			Xuat1TL(t);
			if (dem % 5 == 0)
				XuatKeNgangDon();
		}
	}
	XuatKeNgangDoi();
}

int ThongKe_SoLuong_TheoLoai(TaiLieu* a, int n, char* loaiTaiLieu)
{
	int soLuong = 0;
	for (int i = 0; i < n; i++)
	{
		TaiLieu t = *(a + i);
		if (_strcmpi(t.LoaiTL, loaiTaiLieu) == 0)
			soLuong++;
	}
	return soLuong;
}

void TimTaiLieu_TheoNam(TaiLieu* a, int n, unsigned nam)
{
	cout << "\n\t\tCAC TAI LIEU XUAT BAN TRONG NAM " << nam << endl;
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		TaiLieu t = *(a + i);
		if (t.NamXB == nam)
		{
			cout << endl;
			Xuat1TL(t);
		}
	}
	XuatKeNgangDoi();
}

void LayTatCa_NamXB(TaiLieu* a, int n, int* danhSachNam, int& soNam)
{
	bool daCo = false;
	for (int i = 0; i < n; i++)
	{
		TaiLieu t = *(a + i);
		if (i == 0)
		{
			*danhSachNam = t.NamXB;
			soNam++;
		}
		else
		{
			for (int j = 0; j < soNam; j++)
				if (*(danhSachNam + j) == t.NamXB)
					daCo = true;
			if (!daCo)
			{
				*(danhSachNam + soNam) = t.NamXB;
				soNam++;
			}
		}
	}
}

void HoanVi_SoNguyen(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void HoanVi_TaiLieu(TaiLieu& a, TaiLieu& b)
{
	TaiLieu t = a;
	a = b;
	b = t;
}

void SapXep_MangSoNguyen(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(a + i) > * (a + j))
				HoanVi_SoNguyen(*(a + i), *(a + j));
		}
	}
}

void XuatDanhSach_TheoNam(TaiLieu* a, int n)
{
	int* danhSachNam = new int[n];
	int soNam = 0;
	LayTatCa_NamXB(a, n, danhSachNam, soNam);
	SapXep_MangSoNguyen(danhSachNam, soNam);
	for (int i = 0; i < soNam; i++)
	{
		int nam = *(danhSachNam + i);
		cout << endl;
		TimTaiLieu_TheoNam(a, n, nam);
	}
}

void TimTaiLieu_TheoMaTaiLieu(TaiLieu* a, int n, char* maTL)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		TaiLieu t = *(a + i);
		if (_strcmpi(t.MaTL, maTL) == 0)
		{
			cout << endl;
			Xuat1TL(t);
		}
	}
	XuatKeNgangDoi();
}

void SapXep_TaiLieu_TuaDe(TaiLieu* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			TaiLieu t1 = *(a + i);
			TaiLieu t2 = *(a + j);
			if (_strcmpi(t1.TuaDe, t2.TuaDe) > 0)
				HoanVi_TaiLieu(*(a + i), *(a + j));
		}
	}
}