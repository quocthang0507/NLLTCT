#define MAX 20
#define THOAT 0

struct Date
{
	int Ngay;
	int Thang;
	int Nam;
};

struct NhanVien
{
	int MaSo;
	char HoTen[MAX];
	Date NgaySinh;
	char DiaChi[MAX];
	double Luong;
};

bool Doc_CauTruc(char* filename, NhanVien ds[MAX], int& n);
void Xuat_NV(NhanVien ds[MAX], int n);

bool Doc_CauTruc(char* filename, NhanVien ds[MAX], int& n)
{
	ifstream in(filename);
	if (!in)
		return false;
	int maSoNV;
	char hoTen[MAX];
	char diaChi[MAX];
	double luong;
	int ngay, thang, nam;

	n = 0;

	/*in >> maSoNV; ds[n].MaSo = maSoNV;
	in >> hoTen; strcpy_s(ds[n].HoTen, hoTen);
	in >> ngay; ds[n].NgaySinh.Ngay = ngay;
	in >> thang; ds[n].NgaySinh.Thang = thang;
	in >> nam; ds[n].NgaySinh.Nam = nam;
	in >> diaChi; strcpy_s(ds[n].DiaChi, diaChi);
	in >> luong; ds[n].Luong = luong;*/

	do {
		in >> maSoNV; ds[n].MaSo = maSoNV;
		in >> hoTen; strcpy_s(ds[n].HoTen, hoTen);
		in >> ngay; ds[n].NgaySinh.Ngay = ngay;
		in >> thang; ds[n].NgaySinh.Thang = thang;
		in >> nam; ds[n].NgaySinh.Nam = nam;
		in >> diaChi; strcpy_s(ds[n].DiaChi, diaChi);
		in >> luong; ds[n].Luong = luong;
		n++;
	} while (!in.eof());
	in.close();
}

void Xuat_NV(NhanVien ds[MAX], int n)
{
	cout << setiosflags(ios::left)
		<< setw(20) << "Ma so"
		<< setw(20) << "Ho Ten"
		<< setw(20) << "N.Sinh"
		<< setw(20) << "Dia Chi"
		<< setw(20) << "Luong"
		<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(20) << ds[i].MaSo
			<< setw(20) << ds[i].HoTen
			<< setw(2) << ds[i].NgaySinh.Ngay
			<< '/'
			<< setw(2) << ds[i].NgaySinh.Thang
			<< '/'
			<< setw(14) << ds[i].NgaySinh.Nam
			<< setw(20) << ds[i].DiaChi
			<< setiosflags(ios::fixed) << setprecision(0)
			<< setw(20) << ds[i].Luong;
		cout << endl;
	}
}