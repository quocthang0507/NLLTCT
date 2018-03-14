#include <iomanip>

#define TAB '\t'
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

int MaTranDoiXung(MaTranVuong a, int n)
{
	int i, j, temp=0;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			if (a[i][j]!=a[j][i])
				temp++;
	if (temp==0) return 1;
	else return 0;
}

int MaTranTamGiacTren(MaTranVuong a, int n)
{
	int i, j, temp=0;
	for (i = 0; i < n ; i++)
		for (j = 0; j < i; j++)
			if (a[i][j]!=0)
				temp++;
	if (temp==0) return 1;
	else return 0;
}

int  MaTranTamGiacDuoi(MaTranVuong a, int n)
{
	int i, j, temp=0;
	for (i = 0; i < n-1; i++)
		for (j = i+1; j < n; j++)
			if (a[i][j]!=0) //Neu cac phan tu phia tren duong cheo chinh khac 0
				temp++; //Tang gia tri bien 'temp'
	if (temp==0) return 1; //'temp'=0 nghia la cac phan tu phia tren duong cheo chinh bang 0, la ma tran tam giac duoi
	else return 0; //Nguoc lai la khong phai
}

int MaTranCheo(MaTranVuong a, int n)
{
	int i, j, temp1=0, temp2=0;
	for (i = 0; i < n ; i++)
		for (j = 0; j < i; j++)
			if (a[i][j]!=0)
				temp1++;
	for (i = 0; i < n-1; i++)
		for (j = i+1; j < n; j++)
			if (a[i][j]!=0)
				temp2++;
	if (temp1==0 && temp2==0) return 1;
	else return 0;
}

int MaTranDonVi(MaTranVuong a, int n)
{
	int i, j, temp=0, temp1=0, temp2=0;
	for (i = 0; i < n; i++)
		if (a[i][i]!=1)
			temp++;
	if (temp==0)
	{
		for (i = 0; i < n ; i++)
			for (j = 0; j < i; j++)
				if (a[i][j]!=0)
					temp1++;
		for (i = 0; i < n-1; i++)
			for (j = i+1; j < n; j++)
				if (a[i][j]!=0)
					temp2++;
		if (temp1==0 && temp2==0) return 1;
		else return 0;
	}
	else return 0;
}