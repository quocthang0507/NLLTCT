#include <iostream>

using namespace std;

#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int ChuaX(DaySo a, int n, int x);
int Tim_VTDT_X(DaySo a, int n, int x);
int KiemTraMangTang(DaySo a, int n);
int TinhMax(DaySo a, int n);
int TimViTriMax_CuoiCung(DaySo a, int n);
int ChuaXChuaTruX(DaySo a, int n);

void NhapMang(DaySo a, int n)
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
	int i;
	for (i=0; i<n; i++)
		cout << a[i] << TAB;
}

int ChuaX(DaySo a, int n, int x)
{
	int i, kq;
	kq = 0;
	for (i=0; i<n; i++)
		if (a[i] == x)
		{
			kq = 1;
			break;
		}
	return kq;
}

int Tim_VTDT_X(DaySo a, int n, int x)
{
	int i, kq = -1;
	for (i=0; i<n; i++)
		if (a[i] == x)
		{
			kq = i;
			break;
		}
	return kq;
}

int KiemTraMangTang(DaySo a, int n)
{
	int i,
	kq = 1;
	for (i=0; i<n-1; i++)
		if (a[i] > a[i+1])
		{
			kq=0;
			break;
		}
	return kq;
}

int TinhMax(DaySo a, int n)
{
	int i, max;
	max = a[0];
	for (i=1; i<n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int TimViTriMax_CuoiCung(DaySo a, int n)
{
	int vt = 0, max = a[vt];
	int i;
	for (i = 1; i<n; i++)
		if (a[i] >= max)
		{
			vt = i;
			max = a[vt];
		}
	return vt;
}

int ChuaXChuaTruX(DaySo a, int n)
{
	int i, kq, x, kqTam;
	kq = 1;
	for (i = 0; i < n ; i++)
	{
		x = -a[i];
		kqTam = ChuaX(a, n, x);
		if (kqTam == 0)
		{
			kq = 0;
			break;
		}
	}
	return kq;
}