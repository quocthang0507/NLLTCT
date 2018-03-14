#include <iostream>

using namespace std;

int DayFibonacci(unsigned n)
{
	int t1=0, t2=1, t3;
	for (int i=2;i<n;i++)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
	}
	return t3;
}

int CauA(unsigned n)
{
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else return DayFibonacci(n+1);
}

void CauB(unsigned n)
{
	int t;
	cout << "Cac so fionacci nho hon hoac bang " << n << " la : ";
	for (int i=0;CauA(i)<=n;i++)
	{
		t=CauA(i);
		cout << t << ' ';
	}
}

void CauC(unsigned n)
{
	int t;
	cout << n << " so fibonacci dau tien la : ";
	for (int i=0;i<=n;i++)
	{
		t=CauA(i);
		cout << t << ' ';
	}
}