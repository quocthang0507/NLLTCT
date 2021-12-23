#define MAX 10
#define TAB '\t'

typedef int DaySo[MAX];

void NhapTuDong(DaySo a, int n, int min, int max);
void NhapDayPhanBiet(DaySo a, int n);
void XuatDaySo(DaySo a, int n);
void XuatDaySo_Doan(DaySo a, int l, int r);
void HoanVi(int& x, int& y);
void LietKe_HoanVi(DaySo a, int n, int k);

void NhapTuDong(DaySo a, int n, int min, int max)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		*(a + i) = min + rand() % (max - min + 1);
	}
}

void NhapDayPhanBiet(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(a + i) = i + 1;
	}
	srand((unsigned)time(NULL));
	for (int i = 0; i < n - 1; i++)
	{
		int vt = i + rand() % (MAX - i);
		HoanVi(a[i], a[vt]);
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

void HoanVi(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

void LietKe_HoanVi(DaySo a, int n, int k)
{
	int j;
	if (k == 1)
	{
		cout << endl;
		for (j = 0; j < n; j++)
		{
			cout << a[j] << TAB;
		}
	}
	else
		for (j = k - 1; j >= 0; j--)
		{
			HoanVi(a[k - 1], a[j]);
			LietKe_HoanVi(a, n, k - 1);
			HoanVi(a[j], a[k - 1]);
		}
}