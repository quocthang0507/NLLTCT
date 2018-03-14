#define MAX 100

typedef char String[MAX];

void gets_s_NhapChuoi(String a, char kt)
{
	cout << "\nNhap chuoi: "<< kt <<" = ";
	_flushall();
	gets_s(a,MAX);
}

void NhapChuoi(String a, char kt)
{
	int i = 0;
	char x;
	cout << "\nNhap Chuoi: " << kt << " : ";
	_flushall();
	x = _getch();
	while (x != 13)
	{
		a[i++] = x;
		x = _getch();
	}
	a[i] = NULL;
}

void XuatChuoi(String a)
{
	cout << a;
}

int strlen_TinhChieuDaiChuoi(String a)
{
	int l = strlen(a);
	return l;
}

void strcat_s_Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b)
{
	strcat_s(a, MAX, b);
}

void strcpy_s_Chep_ChuoiSau_Qua_ChuoiTruoc(String a, String b)
{
	strcpy_s(a, MAX, b);
}

int _strcmpi_SoSanhChuoi_KPB(String a, String b)
{
	return _strcmpi(a, b);
}

int strcmp_SoSanhChuoi_PB(String a, String b)
{
	return strcmp(a, b);
}

void Noi_ChuoiSau_VaoSau_ChuoiTruoc(String a, String b)
{
	int i, l;
	l = strlen_TinhChieuDaiChuoi(a);
	for (i = 0; b[i] != NULL; i++)
		a[l++] = b[i];
	a[l] = NULL;
}

void Chep_ChuoiSau_Qua_ChuoiTruoc(String a, String b)
{
	int i;
	for (i = 0; (a[i] = b[i]) != NULL; i++);
}

char Chuyen_KT_Hoa(char x)
{
	if ('a' <= x && x <= 'z')
		x = x - 32;
	return x;
}

int SoSanhChuoi_KPB(String a, String b)
{
	int i;
	for (i = 0; a[i] != NULL && b[i] != NULL; i++)
	{
		if (Chuyen_KT_Hoa(a[i]) < Chuyen_KT_Hoa(b[i]))
			return -1;
		if (Chuyen_KT_Hoa(a[i]) > Chuyen_KT_Hoa(b[i]))
			return 1;
	}
	if (a[i] != NULL)
		return 1;
	if (b[i] != NULL)
		return -1;
	return 0;
}

int SoSanhChuoi_PB(String a, String b)
{
	int i;
	for (i = 0; a[i] != NULL && b[i] != NULL; i++)
	{
		if (a[i] < b[i])
			return -1;
		if (a[i] > b[i])
			return 1;
	}
	if (a[i] != NULL)
		return 1;
	if (b[i] != NULL)
		return -1;
	return 0;
}