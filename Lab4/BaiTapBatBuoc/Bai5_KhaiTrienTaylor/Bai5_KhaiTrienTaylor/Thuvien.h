#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.1415926

double TGT(int n)
{
	if(n == 0 || n == 1)
        return 1;
    else
        return n*TGT(n-1);
}

double CauA(double x)
{
	double sin=0, t=1;
	int i=0;
	while(t>0.00001)
	{
		t=pow((x*PI/180),(2*i+1))/TGT(2*i+1);
		if (i%2==0)
			sin=sin+t;
		else 
			sin=sin-t;
		i++;
	}
	return sin;

}

double CauB(double x)
{
	double cos=0,t=1;
	int i=0;
	while (t>0.00001)
	{
		t=pow((x*PI/180),(2*i))/TGT(2*i);
		if (i%2==0)
			cos=cos+t;
		else
			cos=cos-t;
		i++;
	}
	return cos;
}

double CauC(double x)
{
	double e=0,t=1;
	int i=0;
	while (t>0.00001)
	{
		t=pow(x,i)/TGT(i);
		e+=t;
		i++;
	}
	return e;
}