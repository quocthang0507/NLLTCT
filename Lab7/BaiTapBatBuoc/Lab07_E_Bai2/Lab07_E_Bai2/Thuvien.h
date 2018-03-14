#define MAX 50

typedef char SoTuNhienLon[MAX];

int Chuyen_KySo_So(char x)
{
	return x-'0';
}

char Chuyen_So_KySo(int so)
{
	char x=(char)(so+'0');
	return x;
}

void Chuyen_Chuoi_Sang_Mang(SoTuNhienLon m, int a[MAX], int &l)
{
	int i;
	l=strlen(m);
	for (i=0;i<l;i++)
		a[i]=Chuyen_KySo_So(m[i]);
}

void DaoNguocMang(int a[MAX], int l)
{
	int i, j, tam;
	for (i=0, j=l-1;i<j;i++,j--)
	{
		tam=a[i];
		a[i]=a[j];
		a[j]=tam;
	}
}

void ChuyenMang_Sang_Chuoi(int a[MAX], int l, SoTuNhienLon m)
{
	int i;
	for (i=0;i<l;i++)
		m[i]=Chuyen_So_KySo(a[i]);
	m[l]=NULL;
}

void CongMang(int a[MAX], int la, int b[MAX], int lb, int c[MAX], int &lc)
{
	int nho, i;
	lc=la>=lb?la:lb;
	if (lc>lb)
		for (i=lb;i<lc;i++)
			b[i]=0;
	if (lc>la)
		for (i=la;i<lc;i++)
			a[i]=0;
	nho=0;
	for (i=0;i<lc;i++)
	{
		c[i]=a[i]+b[i]+nho;
		if (c[i]>9)
		{
			c[i]=c[i]-10;
			nho=1;
		}
		else
			nho=0;
	}
	if (nho==1)
	{
		c[lc]=nho;
		lc++;
	}
}

void CongSoTuNhienLon(SoTuNhienLon m, SoTuNhienLon n, SoTuNhienLon t)
{
	int a[MAX], b[MAX], c[MAX];
	int la, lb, lc;
	Chuyen_Chuoi_Sang_Mang(m, a, la);
	Chuyen_Chuoi_Sang_Mang(n, b, lb);
	DaoNguocMang(a, la);
	DaoNguocMang(b, lb);
	CongMang(a, la, b, lb, c, lc);
	DaoNguocMang(c, lc);
	ChuyenMang_Sang_Chuoi(c, lc, t);
}