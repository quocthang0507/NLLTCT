#include <iostream>
#include <math.h>

using namespace std;

int KiemTraNT(unsigned long n)
{
	if (n == 2) {
		return 1;
	}
	else {
		for (int i = 2; i <= int(sqrt((float)n)); i++)
		{
			if (n%i == 0) {
				return 0;				
			}
		}
	}
	return 1;
}

void CauA (unsigned long n)
{
	int t=KiemTraNT(n);
	if (t==1)
		cout << "So ban nhap la so nguyen to";
	else cout << "So ban nhap khong phai la so nguyen to";
}

void CauB(unsigned long n)
{
	int dem = 0, so = 2, y=0;
	do
	{
		if (KiemTraNT(so))
		{
			cout << so << '\t';
			dem++;
			y++;
			if (y==5)
				cout << '\n';
			if (y>5)
				y=1;
		}
		so++;
	}
	while (so < n);
}

void CauC(unsigned long n)
{
	int dem = 0, so = 2;
	do
	{
		if (KiemTraNT(so))
			dem++;
		so++;
	}
	while (so < n);
	cout << "Co " << dem << " so nguyen to tu 1 den " << n;
}

void CauD(unsigned long n)
{
	int t, tong=0;
	for (int i=1;i<=n/2;i++)
		if ((n%i)==0)
		{
			t=KiemTraNT(i);
			if (t==1)
				tong+=i;
		}
	cout << "Tong cac uoc so nguyen to cua " << n << " la " << tong-1;
}

void CauE(unsigned long n)
{
   cout << n << " = ";
   int i=2, check=0;
   while(n!=1)
   {
	   if(n%i==0)
	   {
		   cout<<i;
		   n=n/i;
		   if(n==1)
			   check=1;
		   if(check==0)
			   cout<<'.';
	   }
	   else i++;
   }
}