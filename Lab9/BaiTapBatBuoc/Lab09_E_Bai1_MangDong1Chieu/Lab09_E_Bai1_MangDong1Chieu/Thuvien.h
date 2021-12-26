#define TAB '\t'

typedef int* DayDong;

void NhapTuDong(DayDong a, int n)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		*(a + i) = -20 + rand() % 41; //[-20;20]
}

void XuatMang(DayDong a, int n)
{
	int i;
	cout << endl;
	for (i = 0; i < n; i++)
		cout << *(a + i) << TAB;
	cout << endl;
}

int TimMax(DayDong a, int n)
{
	int max;
	if (n == 1)
		max = *(a + 0);
	else if (n > 1)
		if (TimMax(a, n - 1) < *(a + n - 1))
			max = *(a + n - 1);
		else
			max = TimMax(a, n - 1);
	return max;
}

int TinhTong(DayDong a, int n)
{
	int tong;
	if (n == 1)
		tong = *(a + 0);
	else if (n > 1)
		tong = TinhTong(a, n - 1) + *(a + n - 1);
	return tong;
}

int TinhSoDC(DayDong a, int n)
{
	int kq;
	if (n == 1)
		kq = 1;
	else
		if (n > 1)
			if (*(a + n - 1) < *(a + n - 2))
				kq = TinhSoDC(a, n - 1) + 1;
			else
				kq = TinhSoDC(a, n - 1);
	return kq;
}

int DemX(DayDong a, int x, int n)
{
	int dem = 0;
	if (n == 1)
		if (*a == x)
			dem = 1;
		else dem = 0;
	else if (n > 1)
		if (*(a + n - 1) == x)
			dem = DemX(a, x, n - 1) + 1;
		else
			dem = DemX(a, x, n - 1);
	return dem;
}

int DemSoDuong(DayDong a, int n)
{
	int dem;
	if (n == 1)
		if (*a > 0)
			dem = 1;
		else
			dem = 0;
	else
		if (*(a + n - 1) > 0)
			dem = 1 + DemSoDuong(a, n - 1);
		else
			dem = DemSoDuong(a, n - 1);
	return dem;
}