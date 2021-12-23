#define MAX 100

typedef int MaTranVuong[MAX][MAX];

void NhapTuDong(MaTranVuong a, int& n, int min, int max);
bool Ghi_MaTran(char* filename, MaTranVuong a, int n);
bool Xuat_MaTran(char* filename);

void NhapTuDong(MaTranVuong a, int& n, int min, int max)
{
	do
	{
		cout << "\nNhap cap cua ma tran n = ";
		cin >> n;
	} while (n <= 0);
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = min + rand() % (max - min + 1);
		}
	}
}

bool Ghi_MaTran(char* filename, MaTranVuong a, int n)
{
	ofstream out(filename);
	if (!out)
		return false;
	out << n;
	for (int i = 0; i < n; i++)
	{
		out << endl;
		for (int j = 0; j < n; j++)
		{
			out << a[i][j] << '\t';
		}
	}
	out.close();
	return true;
}

bool Xuat_MaTran(char* filename)
{
	int n, x;
	ifstream in(filename);
	if (!in)
		return false;
	in >> n;
	cout << "\nKich thuoc cua ma tran: " << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			in >> x;
			cout << x << '\t';
		}
	}
	in.close();
	return true;
}