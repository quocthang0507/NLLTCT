#include <iomanip>

#define SIZE 10

typedef int MaTranVuong[SIZE][SIZE];

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

void HoanVi2Cot(MaTranVuong &a, MaTranVuong c, int x, int y, int n)
{
	for (int i=0;i<n;i++)
	{
		c[i][x]=a[i][x];
		a[i][x]=a[i][y];
		a[i][y]=c[i][x];
	}
}

void HoanVi2Hang(MaTranVuong &a, MaTranVuong c, int x, int y, int n)
{
	for (int j=0;j<n;j++)
	{
		c[x][j]=a[x][j];
		a[x][j]=a[y][j];
		a[y][j]=c[x][j];
	}
}

void MaTranHoanVi(MaTranVuong &a, MaTranVuong c, int n)
{
	int i, j;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			c[j][i]=a[i][j];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			a[i][j]=c[i][j];
}