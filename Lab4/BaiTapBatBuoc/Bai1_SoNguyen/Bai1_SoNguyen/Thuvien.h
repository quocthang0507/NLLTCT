#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

void cauA (unsigned long n);
double cauB (unsigned long n);
double cauC (unsigned long n);
double cauD (unsigned long n);
void cauE (unsigned long n);
double cauF (unsigned long n);
void cauG (unsigned long n);
double cauH (unsigned long n);

void cauA (unsigned long n)
{
	int y=0;
	for (int i=1;i<=n;i++)
	{
		cout << i << '\t';
		y++;
		if (y==10)
			cout << '\n';
		if (y>10)
			y=1;
	}
}

double cauB (unsigned long n)
{
	int demSo=0;
	for (int i=1;i<=n;i++)
	{
		if (i%3==0 && i%4!=0)
			demSo++;
	}
	return demSo;
}

double cauC (unsigned long n)
{
	int doDai=0;
	while(n)
    {        
		n=n/10;
		doDai++;
    }
	return doDai;
}

double cauD (unsigned long n)
{
	int soDao=0;
	while (n > 0)
	{
		int t = n % 10;
		soDao = soDao * 10 + t;
		n = n / 10;
    }
	return soDao;
}

void cauE (unsigned long n)
{
	int tong=0;
	while(n)
	{
		tong+=n%10;
		n/=10;                
	}
	cout << tong;
}

double cauF (unsigned long n)
{
	int soDauTien = 0;
    while (n > 0)
    {
        int t = n % 10;
        soDauTien = t;
        n = n / 10;
    }
    return soDauTien;
}

void cauG (unsigned long n)
{
	for(int i = 1;i<n;i++)
	{
		int tong=0;
		for(int j=1; j<i;j++)
			if(i%j==0)
				tong+=j;
		if(i==tong)
			cout << i << '\t';
	}
}

double cauH (unsigned long n)
{
	int max;
	max=(int)((sqrt((float)8*n+1)-1)/2);
	return max;
}