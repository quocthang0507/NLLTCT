#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapTuDong(DaySo a, int &n)
{
	int i;
	cout << endl << "Nhap kich thuoc mang : ";
	cin >> n;
	srand((unsigned) time(NULL));
	for (i = 0; i<n; i++)
		a[i] = -20+rand() %41;
}

void XuatMang(DaySo a, int n)
{
	int i;
	cout << endl;
	for (i=0; i<n; i++)
		cout << a[i] << TAB;
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

int Dem_X(DaySo a, int n, int x)
{
	int i, dem = 0;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int TimMin(DaySo a, int n)
{
	int i;
	int min=a[0];
	for (i=1;i<n;i++)
		if (a[i]<min)
			min=a[i];
	return min;
}

void TimViTri(DaySo a, int n, int x)
{
	for (int i=0;i<n;i++)
		if (a[i]==x)
			cout << i << TAB;
}

void XuatMin_VT_SoLan(DaySo a, int n)
{
	int min=TimMin(a,n);
	int soLan=Dem_X(a, n, min);
	cout << "\nGia tri nho nhat cua day la : " << min
		<< "\nXuat hien : " << soLan << " lan"
		<< "\nTai vi tri [0,..," << n << "] : ";
	TimViTri(a,n,min);
}

int TimMax(DaySo a, int n)
{
	int i;
	int max=a[0];
	for (i=1;i<n;i++)
		if (a[i]>max)
			max=a[i];
	return max;
}

void XoaMax(DaySo a, int &n)
{
	int i,j;
	int max=TimMax(a,n);
	for (i=n-1;i>=0;i--)
		if (a[i]==max)
		{
			for (j=i;j<n-1;j++)
				a[j]=a[j+1];
			n--;
		}
}

int KTNT(int x)
{
	int i, m,
	kq;
	if (x < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((double)x);
		kq = 1;
		for (i = 2; i <= m; i++)
			if (x % i == 0)
			{
				kq = 0;
				break;
			}
	}
	return kq;
}

void HoanVi(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void SapDay(DaySo a, int n)
{
	int i, j, mc;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			mc = (KTNT(a[i])==0 && a[i]>=0 && KTNT(a[j])==0 && a[j] >=0 && a[i]>a[j]) ||
				(KTNT(a[i])==0 && a[i]<0 && KTNT(a[j])==0 && a[j]<0 && a[i]>a[j]) ||
				(KTNT(a[i])==0 && a[i]>=0 && KTNT(a[j])==0 && a[j]<0) ||
				(KTNT(a[i])==0 && a[i]>=0 && KTNT(a[j])!=0 && a[j]>0) ||
				(KTNT(a[i])==0 && a[i]<0 && KTNT(a[j])!=0 && a[j]>0) ||
				(KTNT(a[i])!=0 && a[i]>0 && KTNT(a[j])!=0 && a[j]>0 && a[i]<a[j]);
			if (mc)
				HoanVi(a[i], a[j]);
		}
}