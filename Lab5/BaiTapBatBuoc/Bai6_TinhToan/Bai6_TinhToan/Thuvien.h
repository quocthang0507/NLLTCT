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

int TrungBinhCong(DaySo a, int n)
{
	double sum=0, tbc;
	for (int i=0;i<n;i++)
		sum+=a[i];
	tbc=sum/n;
	return tbc;
}

int TongBinhPhuong(DaySo a, int n)
{
	int sum=0;
	for (int i=0;i<n;i++)
		sum+=pow((float)a[i],2);
	return sum;
}

int DoLechLonNhat(DaySo a, int n)
{
	DaySo doLech;
	int max;
	max=a[0];
	for (int i=0;i<n-1;i++)
		doLech[i]=abs(a[i]-a[i+1]);
	for (int i=1;i<n;i++)
		if (doLech[i]>max)
			max=doLech[i];
	return max;
}

int KiemTraNT(int x)
{
	int i, kq;
	if (x<2) kq=0;
	else
	{
		kq=1;
		for (i=2;i<=(int)sqrt((double)x);i++)
			if (x%i==0)
			{
				kq=0;
				break;
			}
	}
	return kq;
}

int TinhTongNT(DaySo a, int n)
{
	int sum=0;
	for (int i=0;i<n;i++)
		if (KiemTraNT(a[i]))
			if (a[i]>10)
				sum+=a[i];
	return sum;
}