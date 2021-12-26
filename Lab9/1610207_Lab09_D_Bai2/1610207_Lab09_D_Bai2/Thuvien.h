typedef int* MaTranVuong;

void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(a + i * n + j) = -20 + rand() % 40;
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

MaTranVuong TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	int i, j;
	MaTranVuong c;
	c = new int[n * n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(c + i * n + j) = *(a + i * n + j) + *(b + i * n + j);
	return c;
}

MaTranVuong TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	MaTranVuong c;
	int i, j;
	c = new int[n * n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(c + i * n + j) = *(a + i * n + j) - *(b + i * n + j);
	return c;
}

MaTranVuong TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, int n)
{
	MaTranVuong c;
	int i, j, k;
	c = new int[n * n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			*(c + i * n + j) = 0;
			for (k = 0; k < n; k++)
				*(c + i * n + j) += *(a + i * n + k) * *(b + k * n + j);
		}
	return c;
}