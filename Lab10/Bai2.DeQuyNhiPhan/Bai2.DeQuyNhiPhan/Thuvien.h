#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

int Fibonacci(int n);
void Xuat_n_Fibonacci(int n);
int Tinh_Cnk(int n, int k);
void MinMax(DaySo a, int l, int r, unsigned& Min, unsigned& Max);
void NhapTuDong(DaySo a, int n, int min, int max);
void XuatDaySo(DaySo a, int n);
void XuatDaySo_Doan(DaySo a, int l, int r);

void NhapTuDong(DaySo a, int n, int min, int max)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		*(a + i) = min + rand() % (max - min + 1);
	}
}

void XuatDaySo(DaySo a, int n)
{
	cout << "\nDay so ngau nhien hien tai la: \n";
	XuatDaySo_Doan(a, 0, n - 1);
}

void XuatDaySo_Doan(DaySo a, int l, int r)
{
	int dem = 1;
	for (int i = l; i <= r; i++, dem++)
	{
		cout << *(a + i) << TAB;
		if (dem % 10 == 0)
			cout << endl;
	}
}

int Fibonacci(int n)
{
	int kq;
	if (n == 0)
		kq = 0;
	else if (n == 1)
		kq = 1;
	else if (n > 1)
		kq = Fibonacci(n - 1) + Fibonacci(n - 2);
	return kq;
}

void Xuat_n_Fibonacci(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << Fibonacci(i) << TAB;
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}

int Tinh_Cnk(int n, int k)
{
	int kq;
	if (k == 0 || k == n)
		kq = 1;
	else
		if (0 < k && k < n)
			kq = Tinh_Cnk(n - 1, k) + Tinh_Cnk(n - 1, k - 1);
	return kq;
}

void MinMax(DaySo a, int l, int r, unsigned& min, unsigned& max)
{
	unsigned int min1, min2, max1, max2;
	if (l == r)
	{
		min = *(a + l);
		max = *(a + l);
	}
	else
	{
		MinMax(a, l, (l + r) / 2, min1, max1);
		MinMax(a, (l + r) / 2 + 1, r, min2, max2);
		if (min1 < min2)
			min = min1;
		else
			min = min2;
		if (max1 > max2)
			max = max1;
		else
			max = max2;
	}
}