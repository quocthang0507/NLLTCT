#define MAX 100
#define TAB '\t'

void NhapTuDong(int a[MAX], int &n)
{
	int i;
	cout << "\nNhap kich thuoc n : ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i<n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void XuatMang(int a[MAX], int n)
{
	int i;
	for (i = 0; i<n; i++)
		cout << a[i] << TAB;
}

void Tim_Day_GiaTri_PhanBiet(int a[MAX], int n, int b[MAX], int c[MAX], int &m)
{
	int i, j, dau;
	for (i = 0; i < n; i++)
		c[i] = 1; 
	m = 0;
	for (i = 0; i < n; i++)
	{
		dau = 0;
		for (j = 0; j < m; j++)
		if (a[i] == b[j])
		{
			dau = 1;
			c[j]++;
			break;
		}
		if (!dau)
		{
			b[m] = a[i];
			m++;
		}
	}
}