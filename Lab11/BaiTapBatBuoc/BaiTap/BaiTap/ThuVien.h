#define MAX 100


struct Date
{
	int Ngay;
	int Thang;
	int Nam;
};

struct NhanVien
{
	char MaNV[7];
	char Ho[10];
	char TenLot[10];
	char Ten[10];
	Date NgaySinh;
	char DiaChi[20];
	double Luong;
};

typedef int DaySo[MAX];
typedef NhanVien DanhSach[MAX];

bool Doc_DaySo_CoKichThuoc(char* filename, DaySo a, int& n);
bool Doc_DaySo_KoKichThuoc(char* filename, DaySo a, int& n);
void Xuat_DaySo(DaySo a, int n);
bool Doc_MangNhanVien(char* filename, DanhSach ds, int& n);
void Xuat_MangNhanVien(DanhSach ds, int n);

bool Doc_DaySo_CoKichThuoc(char* filename, DaySo a, int& n)
{
	ifstream in(filename);
	if (!in)
		return false;
	in >> n;
	for (int i = 0; i < n; i++)
	{
		in >> a[i];
	}
	in.close();
	return true;
}

bool Doc_DaySo_KoKichThuoc(char* filename, DaySo a, int& n)
{
	ifstream in(filename);
	if (!in)
		return false;
	n == 0;
	for (int i = 0; i < n; i++)
	{
		n++;
		in >> a[i];
	}
	in.close();
	return true;
}

void Xuat_DaySo(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '\t';
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}

bool Doc_MangNhanVien(char* filename, DanhSach ds, int& n)
{
	ifstream in(filename);
	if (!in)
		return false;
	char maNV[7];
	char ho[10];
	char tenLot[10];
	char ten[10];
	Date ngaySinh;
	char diaChi[20];
	double luong;
	n = 0;
	do
	{
		in >> maNV; strcpy_s(ds[n].MaNV, maNV);
		in >> ho; strcpy_s(ds[n].Ho, ho);
		in >> tenLot; strcpy_s(ds[n].TenLot, tenLot);
		in >> ten; strcpy_s(ds[n].Ten, ten);
		in >> ngaySinh.Ngay; ds[n].NgaySinh.Ngay = ngaySinh.Ngay;
		in >> ngaySinh.Thang; ds[n].NgaySinh.Thang = ngaySinh.Thang;
		in >> ngaySinh.Nam; ds[n].NgaySinh.Nam = ngaySinh.Nam;
		in >> diaChi; strcpy_s(ds[n].DiaChi, diaChi);
		in >> luong; ds[n].Luong = luong;
		n++;
	} while (!in.eof());
	in.close();
	return true;
}

void Xuat_MangNhanVien(DanhSach ds, int n)
{
	cout << setiosflags(ios::left)
		<< setw(10) << "Ma NV"
		<< setw(10) << "Ho"
		<< setw(10) << "Ten Lot"
		<< setw(10) << "Ten"
		<< setw(17) << "N.Sinh"
		<< setw(15) << "Dia Chi"
		<< setw(15) << "Luong"
		<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << ds[i].MaNV
			<< setw(10) << ds[i].Ho
			<< setw(10) << ds[i].TenLot
			<< setw(10) << ds[i].Ten
			<< setw(4) << ds[i].NgaySinh.Ngay
			<< setw(4) << ds[i].NgaySinh.Thang
			<< setw(9) << ds[i].NgaySinh.Nam
			<< setw(15) << ds[i].DiaChi
			<< setiosflags(ios::fixed) << setprecision(0) 
			<< setw(15) << ds[i].Luong;
		cout << endl;
	}
}