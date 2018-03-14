#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

struct TaiLieu
{
	char MaTL[10];
	char TuaDe[25];
	char LoaiTL[10];
	unsigned int NamXB;
	char TacGia[20];
	char NhaXB[10];
	unsigned long Gia;
};

void ChenTL(char *MaTL, char *TuaDe, char *LoaiTL, unsigned NamXB, char *TacGia, char *NhaXB, unsigned long Gia, TaiLieu*a, int &n)
{
	if (n<MAX)
	{
		strcpy_s((a+n)->MaTL,MAX,MaTL);
		strcpy_s((a+n)->TuaDe,MAX,TuaDe);
		strcpy_s((a+n)->LoaiTL,MAX,LoaiTL);
		(a+n)->NamXB=NamXB;
		strcpy_s((a+n)->TacGia,MAX,TacGia);
		strcpy_s((a+n)->NhaXB,MAX,NhaXB);
		(a+n)->Gia=Gia;
		n++;
	}
}

void TaoDanhSach(TaiLieu *a, int &n)
{
	ChenTL("100153","10000 cau hoi vi sao","Sach",2007,"","Tre",25000,a,n);
	ChenTL("100159","210 bai luan Tieng Anh","Sach",2005,"","GD",30000,a,n);
	ChenTL("101830","Nhung giai Nobel TK XIX","Bao KH",2010,"","TH",20000,a,n);
	ChenTL("101001","Hoa hoc tro ky 81","Tap chi",2016,"","Tre",23000,a,n);
	ChenTL("100739","Luan van ve moi truong","Luan van",2008,"","",32000,a,n);
	ChenTL("100987","SGK lop 12 - Can ban","Sach",2017,"","GD",210000,a,n);
	ChenTL("123456","SGK lop 12 - Nang cao","Sach",2017,"","GD",220000,a,n);
	ChenTL("102467","Bao Muc tim ky 33","Tap chi",2012,"","Tre",17000,a,n);
	ChenTL("135790","TH bai luan truong DH DL","Luan van",2016,"","",31000,a,n);
	ChenTL("101987","Bi quyet lam giau","Sach",2013,"","TH",75000,a,n);
	ChenTL("123890","Giai ma giac mo","Sach",2006,"","Tre",45000,a,n);
	ChenTL("171514","Vu tru ky bi","Bao KH",2009,"","Tre",19000,a,n);
	ChenTL("101019","Tap chi HTV so 110","Tap chi",2007,"","TH",25000,a,n);
}

void XuatKeNgangDoi()
{
	int i;
	cout << endl;
	cout << setiosflags(ios::left) << ':';
	for (i=1;i<=77;i++)
		cout << NGANGDOI;
	cout << ':';
}

void XuatKeNgangDon()
{
	int i;
	cout << endl;
	cout << setiosflags(ios::left) << ':';
	for (i=1;i<=77;i++)
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
		<< setw(10) << "Tac gia"
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
		<< setw(10) << p.TacGia
		<< ':'
		<< setw(6) << p.NhaXB
		<< ':'
		<< setw(9) << p.Gia
		<< ':';
}

void XuatDanhSach(TaiLieu *a, int n)
{
	int i;
	XuatTieuDe();
	for (i=0;i<n;i++)
	{
		cout << endl;
		Xuat1TL(*(a+i));
		if ((i+1)%5==0)
			XuatKeNgangDon();
	}
	XuatKeNgangDoi();
}