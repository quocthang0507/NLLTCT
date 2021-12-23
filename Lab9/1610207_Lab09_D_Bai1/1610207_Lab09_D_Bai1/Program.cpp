#include <iostream>
#include <time.h>

using namespace std;

void XuatGiaTri_SoLan_PhanBiet(int* a, int n);
void NhapTuDong(int* a, int n, int min, int max);
void XuatMang(int* a, int n);

#define MAX 100
#define TAB '\t'

int main()
{
	int a[MAX], n;
	do {
		cout << "Nhap kich thuoc n = ";
		cin >> n;
	} while (n <= 0);
	cout << "\nMang da nhap tu dong: \n";
	NhapTuDong(a, n, 1, 10);
	XuatMang(a, n);
	XuatGiaTri_SoLan_PhanBiet(a, n);
	return 1;
}

void NhapTuDong(int* a, int n, int min, int max)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		*(a + i) = min + rand() % (max - min + 1);
	}
}

void XuatMang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(a + i) << '\t';
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}

void XuatGiaTri_SoLan_PhanBiet(int* a, int n)
{
	int i,//duyet a
		dau; //danh dai a[i] da co trong b chua
	int* b, //luu cac gia tri phan biet
		j,//duyet b
		* c, //luu so lan xuat hien cua cac b[j]
		m;// kich thuoc cua b, c
	m = 0;
	b = new int[n];
	for (i = 0; i < n; i++)
	{
		dau = 1;
		for (j = 0; j < m && dau; j++)
			dau = dau && (*(a + i) != *(b + j));
		if (dau)
		{
			*(b + m) = *(a + i);
			m++;
		}
	}
	c = new int[n];
	int k;
	for (k = 0; k < m; k++)
		*(c + k) = 0;
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
			if (a[i] == *(b + j))
			{
				*(c + j) = *(c + j) + 1;
			}
	}
	cout << "\nCac gia tri phan biet trong a va so lan xuat hien cac gia tri nay:\n";
	for (k = 0; k < m; k++)
	{
		cout << "\nGia tri " << *(b + k) << " xuat hien " << *(c + k) << " lan.";
	}
	delete[]b;
	delete[]c;
}