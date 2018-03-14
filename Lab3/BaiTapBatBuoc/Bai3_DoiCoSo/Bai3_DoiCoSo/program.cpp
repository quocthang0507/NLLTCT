#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void Xuat(int so);
unsigned int TimLuyThua(unsigned int b, unsigned int n);
void DoiCoSo(unsigned int n, unsigned int b);

int main()
{
	unsigned int n, b;
	cout << "Nhap so can doi = ";
	cin >> n;
	do
	{
		cout << "Nhap co so (2<=b<=16) = ";
		cin >> b;
	}
	while (b>16 || b<2);
	cout << "Ket qua : " << n << " co so 10 " << " = ";
	DoiCoSo(n, b);
	cout << " co so " << b << endl;
	_getch();
	return 1;
}

void Xuat(int so)
{
	switch(so)
	{
	case 10:
		cout << 'A';
		break;
	case 11:
		cout << 'B';
		break;
	case 12:
		cout << 'C';
		break;
	case 13:
		cout << 'D';
		break;
	case 14:
		cout << 'E';
		break;
	case 15:
		cout << 'F';
		break;
	default: cout << so;
	}
}

unsigned int TimLuyThua(unsigned int b, unsigned int n)
{
	unsigned luyThua, i;
	for (i=0;pow((float)b, (float)i)<=n;i++)
		luyThua=i;
	return pow((float)b, (float)luyThua);
}

void DoiCoSo(unsigned int n, unsigned int b)
{
	unsigned v, so;
	v=TimLuyThua(b, n);
	while (v>0)
	{
		if (n<v)
			Xuat(0);
		else
			while (n>=v)
			{
				so=n/v;
				Xuat(so);
				n=n-so*v;
			}
		v=v/b;
	}
}