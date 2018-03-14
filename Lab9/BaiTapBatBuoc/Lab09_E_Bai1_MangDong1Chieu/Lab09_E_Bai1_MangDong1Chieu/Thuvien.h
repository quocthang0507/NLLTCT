#define TAB '\t'

typedef int *DayDong;

void NhapTuDong(DayDong a, int n)
{
	int i;
	srand((unsigned)time(NULL));
	for (i=0;i<n;i++)
		*(a+i)=-20+rand()%40;
}

void XuatMang(DayDong a, int n)
{
	int i;
	cout << endl;
	for (i=0;i<n;i++)
		cout << *(a+i) << TAB;
	cout << endl;
}

int TimMax(DayDong a, int n)
{
	int kq;
	if (n==1)
		kq=*(a+0);
	else
		if (n>1)
			if (TimMax(a,n-1)<*(a+n-1))
				kq=*(a+n-1);
			else
				kq=TimMax(a,n-1);
	return kq;
}

int TinhTong(DayDong a, int n)
{
	int kq;
	if (n==1)
		kq=*(a+0);
	else
		if (n>1)
			kq=TinhTong(a,n-1)+*(a+n-1);
	return kq;
}

int TinhSoDC(DayDong a, int n)
{
	int kq;
	if (n==1)
		kq=1;
	else
		if (n>1)
			if (*(a+n-1)<*(a+n-2))
				kq=TinhSoDC(a,n-1)+1;
			else
				kq=TinhSoDC(a,n-1);
	return kq;
}

int DemX(DayDong a, int x, int n)
{
	int kq;
	if (n==1)
		if (*a==x)
			kq=1;
		else kq=0;
	else
		if (n>1)
			if (*(a+n-1)==x)
				kq=DemX(a,x,n-1)+1;
			else 
				kq=DemX(a,x,n-1);
	return kq;
}