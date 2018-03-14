#include <algorithm>

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

int KiemTraNT(int n)
{
	int i,kq;
	if (n<2) kq=0;
	else 
	{
		kq=1;
		for (i=2;i<=(int)sqrt((double)n);i++)
			if (n%i==0)
			{
				kq=0;
				break;
			}
	}
	return kq;
}

int NguyenToCuoiCung(DaySo a, int n)
{
	int vt=-1;
	for (int i=0;i<n;i++)
		if (KiemTraNT(a[i]))
			vt=i;
	return vt;
}

void XuatHienNhieuNhat(DaySo a, int n)
{
	sort(a,a+n);
	int i=0, max =0, vt=0, soLan;
	while (i<n)
	{
		soLan=1;
		while (a[i]==a[i+1])
		{
			soLan++;
			i++;
		}
		if (max<soLan)
		{
			max=soLan;
			vt=i;
		}
		i++;
	}
	cout << "\nPhan tu xuat hien nhieu nhat la " << a[vt] << " voi " << max << " lan";
}

int TimMin(DaySo a, int n)
{
	int i,min = a[0];
	for (i=1; i<n; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}

void NhoNhat_DauTien(DaySo a, int n)
{
	int min, vt;
	min=TimMin(a,n);
	for (int i=0;i<n;i++)
		if (a[i]==min)
		{
			vt=i;
			break;
		}
	cout << "\nPhan tu nho nhat la " << min << " va xuat hien dau tien tai vi tri" << vt;
}

void SoAmLonNhat(DaySo a, int n)
{
	int max=a[0], vt=0;
	for (int i=0;i<n;i++)
		if (a[i]<0)
			if (a[i]>max)
			{
				max=a[i];
				vt=i;
			}
	if (vt)
		cout << "\nSo am lon nhat la " << max << " tai vi tri so " << vt;
	else cout << "\nKhong co so am trong day";
}

void SoDuongNhoNhat(DaySo a, int n)
{
	int min=a[0], vt=0;
	for (int i=0;i<n;i++)
		if (a[i]>0)
			if (a[i]<min)
			{
				min=a[i];
				vt=i;
			}
	if (vt)
		cout << "\nSo duong nho nhat la " << min << " tai vi tri so " << vt;
	else cout << "\nKhong co so duong trong day";
}