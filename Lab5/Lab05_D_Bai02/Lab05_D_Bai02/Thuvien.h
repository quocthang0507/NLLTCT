#include <iostream>

using namespace std;

#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int Dem_X(DaySo a, int n, int x);
int Dem_NT(DaySo a, int n);
int KiemTra_NT(int x);
int TinhTong(DaySo a, int n);
int TinhTongDuyNhat(DaySo a, int n);
int TinhTong_PhanBiet(DaySo a, int n);

void NhapTuDong(DaySo a, int n)
{
	srand((unsigned) time(NULL));
	for (int i = 0; i<n; i++)
	{
		a[i] = (MAX / 2 - rand() % MAX) / 2;
	}
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i=0; i<n; i++)
		cout << a[i] << TAB;
}

int Dem_X(DaySo a, int n, int x)
{
	int i, dem = 0;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int KiemTra_NT(int x)
{
	int i, m,
	kq;
	if (x < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((double)x);
		kq = 1;
		for (i = 2; i <= m;i++)
			if (x % i == 0)
			{
				kq = 0;
				break;
			}
	}
	return kq;
}

int Dem_NT(DaySo a, int n)
{
	int i, dem = 0;
	cout << "\nCac so nguyen to trong a:\n";
	for (i = 0; i < n;i++)
		if (KiemTra_NT(a[i]))
		{
			dem++;
			cout << a[i] << TAB;
		}
	return dem;
}

int TinhTong(DaySo a, int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int TinhTongDuyNhat(DaySo a, int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
		if (Dem_X(a, n, a[i])==1)
			sum += a[i];
	return sum;
}

int TinhTong_PhanBiet(DaySo a, int n)
{
	DaySo b;
	int i, m, j, dau, sum = 0;
	m = 0;
	for (i = 0; i < n; i++)
	{
		dau = 1;
		for (j = 0; j < m && dau; j++)
			dau = dau && (a[i] != b[j]);
		if (dau)
		{
			b[m++] = a[i];
			sum += a[i];
		}
	}
	return sum;
}