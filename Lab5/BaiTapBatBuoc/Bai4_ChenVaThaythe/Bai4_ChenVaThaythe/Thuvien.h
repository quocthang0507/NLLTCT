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

void ChenBatKy(DaySo a, int &n, int x, int vt)
{
	for (int i=n-1;i>vt-1;i--)
		a[i+1]=a[i];
	a[vt]=x;
	n++;
}

int PhanTuLonNhat(DaySo a, int n)
{
	int max=a[0];
	for (int i=1;i<n;i++)
		if (a[i]>max)
			max=a[i];
	return max;
}

int PhanTuDauTien(DaySo a, int n, int x)
{
	int vt=0;
	for (int i=1;i<n;i++)
		if (a[i]==x)
		{
			vt=i;
			break;
		}
	return vt;
}

int KiemTraNT(int x)
{
	int kq;
	if (x<2) kq=0;
	else
	{
		kq=1;
		for (int i=2;i<=(int)sqrt((double)x);i++)
			if (x%i==0)
			{
				kq=0;
				break;
			}
	}
	return kq;
}

void ChenXTruocY(DaySo a, int &n, int y, int x)
{
	int i,vt=0,t=0;
	for (i=0;i<n;i++)
		if (a[i] == y)
		{
			t=1;
			vt=i;
			ChenBatKy(a,n,x,vt+1);
		}
	if (t==0)
		ChenBatKy(a,n,x,0);
}

int PhanTuNhoNhat(DaySo a, int n)
{
	int min=a[0];
	for (int i=1;i<n;i++)
		if (a[i]<min)
			min=a[i];
	return min;
}

void ThayX(DaySo a, int &n, int x)
{
	int min;
	min=PhanTuNhoNhat(a,n);
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == min)
			a[i] = x;
}