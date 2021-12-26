#define MAX 100

typedef int* MaTranVuong;

void NhapMaTran(MaTranVuong& a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << endl << "[" << i << "][" << j << "] = ";
			cin >> *(a + i * n + j);
		}
}

void NhapMaTranTD(MaTranVuong& a, int n)
{
	int i, j;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(a + i * n + j) = rand() % 2;
}

void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << endl << endl;
		for (j = 0; j < n; j++)
			cout << setw(4) << *(a + i * n + j);
	}
	cout << endl;
}

int KT_DoiXung(MaTranVuong a, int n)
{
	//Ma tran doi xung la ma tran co cac phan tu nam doi xung voi nhau qua duong cheo chinh
	//Nghia la: a[i][j]=a[j][i]
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (*(a + i * n + j) != *(a + j * n + i))
				return 0;
	return 1;
}

int KT_TamGiacTren(MaTranVuong a, int n)
{
	//Ma tran tam giac tren la ma tran co cac phan tu nam duoi duong cheo chinh bang 0
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < i; j++)
			if (*(a + i * n + j) != 0)
				return 0;
	return 1;
}

int KT_TamGiacDuoi(MaTranVuong a, int n)
{
	//Ma tran tam giac duoi la ma tran co cac phan tu nam tren duong cheo chinh bang 0
	int i, j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (*(a + i * n + j) != 0)
				return 0;
	return 1;
}

int KT_TamGiacCheo(MaTranVuong a, int n)
{
	//Ma tran tam giac cheo la ma tran co cac phan tu nam ngoai duong cheo chinh bang 0
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (j != i && *(a + i * n + j) != 0)
				return 0;
	return 1;
}

int KT_TamGiacDonVi(MaTranVuong a, int n)
{
	//Ma tran tam giac don vi la ma tran co cac phan tu nam tren duong cheo chinh bang 1, tat ca phan tu khac deu bang 0
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if ((i != j && *(a + i * n + j) != 0) || (i == j && *(a + i * n + j) != 1))
				return 0;
	return 1;
}