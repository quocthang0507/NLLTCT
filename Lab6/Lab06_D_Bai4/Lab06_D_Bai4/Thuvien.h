#include <iomanip>

#define SIZE 10

typedef int MaTranVuong[SIZE][SIZE];

void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
void TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);
void TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);
void TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n);

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << endl <<"[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << endl << endl;
		for (j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
	}
}

void TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
}

void TinhHieu_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			c[i][j] = a[i][j] - b[i][j];
}

void TinhTich_2_MaTran(MaTranVuong a, MaTranVuong b, MaTranVuong c, int n)
{
	int i, j, k;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < n; k++)
					 c[i][j] += a[i][k] - b[k][j];
			}
}