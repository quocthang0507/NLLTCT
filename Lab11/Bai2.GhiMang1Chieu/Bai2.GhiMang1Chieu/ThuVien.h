#define MAX 100

typedef int DaySo[MAX];

void NhapTuDong(DaySo a, int& n, int min, int max);
int Write_Array(DaySo a, int n, char* filename);
int Read_Array(char* filename);

void NhapTuDong(DaySo a, int& n, int min, int max)
{
	do
	{
		cout << "\nNhap kich thuoc n = ";
		cin >> n;
	} while (n <= 0);
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = min + rand() % (max - min + 1);
	}
}

int Write_Array(DaySo a, int n, char* filename)
{
	ofstream out(filename);
	if (!out)
	{
		return 0;
	}
	out << n;
	out << '\n';
	for (int i = 0; i < n; i++)
	{
		out << a[i];
		out << '\t';
	}
	out.close();
	return 1;
}

int Read_Array(char* filename)
{
	int n, x;
	ifstream in(filename);
	if (!in)
	{
		return 0;
	}
	in >> n;
	cout << "\nKich thuoc mang: " << n << '\n';
	for (int i = 0; i < n; i++)
	{
		in >> x;
		cout << x << '\t';
	}
	in.close();
	return 1;
}