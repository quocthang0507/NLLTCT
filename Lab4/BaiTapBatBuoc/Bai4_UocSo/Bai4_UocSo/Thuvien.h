#include <iostream>
#include <math.h>

using namespace std;

void CauA(unsigned n)
{
	cout << "Cac uoc so cua " << n << " la ";
	for (int i=1;i<=n/2;i++)
		if ((n%i)==0)
			cout <<  i << ", ";
	cout << n;
}

void CauB(unsigned n)
{
	int dem=0;
	for (int i=1;i<=n/2;i++)
		if ((n%i)==0)
			dem++;
	cout << "Co " << dem+1 << " so uoc chung cua " << n;
}

void CauC(unsigned n)
{
	int tong=0;
	for (int i=1;i<=n/2;i++)
		if ((n%i)==0)
			tong+=i;
	cout << "Tong cac uoc so cua " << n << " la " << tong+n;
}

void CauD(unsigned n)
{
	int luyThua;
	for (int i=1;pow(2,(float)i)<=n;i++)
		luyThua=i;
	cout << "So lon nhat nho hon hoac bang " << n << " ma luy thua cua 2 la " << luyThua;
}

void CauE(unsigned n)
{
	int t=0;
	for (int i=1;i<=n/2;i++)
		if ((n%i)==0)
			t+=i;
	if (n==(t+n)/2.0)
		cout << n << " la so hoan chinh";
	else cout << n << " khong la so hoan chinh";
}