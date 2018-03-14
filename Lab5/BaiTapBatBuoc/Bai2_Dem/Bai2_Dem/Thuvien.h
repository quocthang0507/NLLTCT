#include <algorithm>
#include <math.h>

#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int &n)
{
	int i;
	for (i=0;i<n;i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
	for (int i=0;i<n;i++)
		cout << a[i] << TAB;
}

int So3ChuSo(DaySo a, int n)
{
	int dem=0;
	for (int i=0;i<n;i++)
		if (a[i]>99 && a[i]<1000)
			dem++;
	return dem;
}

int NamNgoaiPhamVi(DaySo a, int n, double min, double max)
{
	int dem=0;
	for (int i=0;i<n;i++)
		if (a[i]<min || a[i]>max)
			dem++;
	return dem;
}

int KTSoChinhPhuong(int x)
{
	int i, kq;
	if (x<2)
		kq=0;
	else
	{
		kq=0;
		for (i=2;i<MAX;i++)
			if (sqrt((float)x)==i)
			{
				kq=1;
				break;
			}
	}
	return kq;
}

int DemSoChinhPhuong(DaySo a, int n)
{
	int dem=0;
	for (int i=0;i<n;i++)
		if (KTSoChinhPhuong(a[i]))
			dem++;
	return dem;
}

int DemX(DaySo a, int n, int x, int vt)
{
	int i, dem = 0;
	for (i = vt; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int SoDuongChay(DaySo a, int n)
{
	int dem;
	if (n==1)
		dem =1;
	else
		if (n>1)
			if (*(a+n-1)<*(a+n-2))
				dem=SoDuongChay(a,n-1)+1;
			else dem=SoDuongChay(a,n-1);
	return dem;
}