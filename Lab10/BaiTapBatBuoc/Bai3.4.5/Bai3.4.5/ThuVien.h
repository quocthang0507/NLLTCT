#define MAX 100

typedef char Chuoi[MAX];
typedef int DaySo[MAX];

int UCLN(unsigned x, unsigned y);
void HoanVi(char& a, char& b);
void DaoNguocChuoi(Chuoi s, int i);
void NhapDaySo_TD(DaySo a, int& n, int min, int max);
void XuatDaySo(DaySo a, int n);
int DemX(DaySo a, int n, int x, int i);
bool KiemTra_NT(unsigned n, int i);
int DemNT(DaySo a, int n, int i);
void XuatNT(DaySo a, int n, int i);

int UCLN(unsigned x, unsigned y)
{
	if (y == 0)
		return x;
	return UCLN(y, x % y);
}

void HoanVi(char& a, char& b)
{
	char t = a;
	a = b;
	b = t;
}

void DaoNguocChuoi(Chuoi s, int i = 0)
{
	int l = strlen(s);
	if (i < l / 2)
	{
		HoanVi(s[i], s[l - 1 - i]);
		DaoNguocChuoi(s, ++i);
	}
	return;
}

void NhapDaySo_TD(DaySo a, int& n, int min, int max)
{
	srand(time(NULL));
	do
	{
		cout << "\nNhap kich thuoc day so n = ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		a[i] = min + rand() % (max - min + 1);
	}
}

void XuatDaySo(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '\t';
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}

int DemX(DaySo a, int n, int x, int i = 0)
{
	if (i == n)
		return 0;
	if (a[i] == x)
		return 1 + DemX(a, n, x, ++i);
	return DemX(a, n, x, ++i);
}

bool KiemTra_NT(unsigned n, int i = 2)
{
	if (n < 2)
		return false;
	else if (n == 2)
		return true;
	if (i <= sqrt(n))
		if (n % i == 0)
			return false;
		else
			return KiemTra_NT(n, ++i);
	return true;
}

int DemNT(DaySo a, int n, int i = 0)
{
	if (i == n)
		return 0;
	if (KiemTra_NT(a[i]))
		return 1 + DemNT(a, n, ++i);
	return DemNT(a, n, ++i);
}

void XuatNT(DaySo a, int n, int i = 0)
{
	if (i == n)
		return;
	if (KiemTra_NT(a[i]))
	{
		cout << a[i] << '\t';
	}
	XuatNT(a, n, ++i);
}