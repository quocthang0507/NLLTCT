#define MAX 100

typedef char String[MAX];

int TinhChieuDaiChuoi(String a);
void ChenDau_KT(char a[MAX], char x);
void ChenCuoi_KT(char a[MAX], char x);
int ChenKT_VT(char a[MAX], char x, int vt);
void XoaDau_KT(char a[MAX]);
void XoaCuoi_KT(char a[MAX]);
int XoaKT_VT(char a[MAX], int vt);
void CatDauChenCuoi(char a[MAX]);
void CatCuoiChenDau(char a[MAX]);
void Xoa_x(char a[MAX], char x);
void Thay_x_Bang_y(char a[MAX], char x, char y);

int TinhChieuDaiChuoi(String a)
{
	int i = 0;
	while (a[i])
		i++;
	return i;
}

void ChenDau_KT(char a[MAX], char x)
{
	int i;
	int l = TinhChieuDaiChuoi(a);
	for (i = l; i >= 0; i--)
		a[i + 1] = a[i];
	a[0] = x;
}

void ChenCuoi_KT(char a[MAX], char x)
{
	int l = TinhChieuDaiChuoi(a);
	a[l++] = x;
	a[l] = NULL;
}

int ChenKT_VT(char a[MAX], char x, int vt)
{
	int i, l, kq = 1;
	l = TinhChieuDaiChuoi(a);
	if (vt == 0)
	{
		ChenDau_KT(a, x);
	}
	else
		if (vt == l)
		{
			ChenCuoi_KT(a, x);
		}
		else
			if (0 < vt && vt < l)
			{
				for (i = l; i >= vt; i--)
					a[i + 1] = a[i];
				a[vt] = x;
			}
			else
				kq = 0;
	return kq;
}

void XoaDau_KT(char a[MAX])
{
	int i;
	for (i = 0; a[i] != NULL; i++)
		a[i] = a[i + 1];
	a[i - 1] = NULL;
}

void XoaCuoi_KT(char a[MAX])
{
	int i;
	for (i = 0; a[i] != NULL; i++);
	a[i - 1] = NULL;
}

int XoaKT_VT(char a[MAX], int vt)
{
	int i, l, kq = 1;
	l = TinhChieuDaiChuoi(a);
	if (vt == 0)
	{
		XoaDau_KT(a);
	}
	else
		if (vt == l - 1)
		{
			XoaCuoi_KT(a);
		}
		else
			if (0 < vt && vt < l - 1)
			{
				for (i = vt; i < l; i++)
					a[i] = a[i + 1];
				a[l - 1] = NULL;
				/*for (i = l-1; i > vt; i--)
					a[i - 1] = a[i];
				a[l-1] = NULL;*/
			}
			else
				kq = 0;
	return kq;
}

void CatDauChenCuoi(char a[MAX])
{
	int i;
	char x;
	x = a[0];
	for (i = 1; a[i] != NULL; i++)
		a[i - 1] = a[i];
	a[i - 1] = x;
}

void CatCuoiChenDau(char a[MAX])
{
	int i, l;
	char x;
	l = TinhChieuDaiChuoi(a);
	x = a[l - 1];
	for (i = l - 2; i >= 0; i--)
		a[i + 1] = a[i];
	a[0] = x;
}

void Xoa_x(char a[MAX], char x)
{
	int i, h = 0;
	for (i = 0; a[i] != NULL; i++)
		if (a[i] != x)
			a[h++] = a[i];
	a[h] = NULL;
}

void Thay_x_Bang_y(char a[MAX], char x, char y)
{
	int i;
	for (i = 0; a[i] != NULL; i++)
		if (a[i] == x)
			a[i] = y;
}