#define PI 3.1415926

double TinhGiaiThua(int n)
{
	if (n==0 || n==1)
		return 1;
	else return n*TinhGiaiThua(n-1);
}

double TinhEx(double x)
{
	double e=0,t=1;
	int i=0;
	while (t>0.00001) //Do chinh xac 10^-5
	{
		t=pow(x,i)/TinhGiaiThua(i);
		e+=t;
		i++;
	}
	return e;
}

double TinhSinx(double x)
{
	double sin=0,t=1;
	int i=0;
	while (t>0.00001) //Do chinh xac 10^-5
	{
		t=pow((x*PI/180),(2*i+1))/TinhGiaiThua(2*i+1);
		if (i%2==0) sin=sin+t;
		else sin=sin-t;
		i++;
	}
	return sin;
}

double TinhCanBac2 (double x)
{
	double Xn=1, X0=0;
	if (x==0) return 0;
	else 
		while (abs(Xn-X0)>0.00001) //Do chinh xac 10^-5
		{
			X0=Xn;
			Xn=(x/X0+X0)/2;
		}
	return Xn;
}