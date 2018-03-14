#include <iostream>
#include <conio.h>

using namespace std;

int TimUCLN(int m, int n);
int TimBCNN(int m, int n);
void TimUC(int m, int n);

int main()
{
	unsigned m, n, UCLN, BCNN;
	cout << "Nhap vao so nguyen duong m = ";
	cin >> m;
	cout << "Nhap vao so nguyen duong n = ";
	cin >> n;
	UCLN=TimUCLN(m, n);
	BCNN=TimBCNN(m, n);
	cout << "Uoc chung cua " << m << " va " << n << " la : "; TimUC(m, n);
	cout << "\nUoc chung lon nhat cua " << m << " va " << n << " la : " << UCLN;
	cout << "\nBoi chung nho nhat cua " << m << " va " << n << " la : " << BCNN;
	_getch();
	return 1;
}

void TimUC(int m, int n)
{
	int i=1;
	while (i<=m&&i<=n)
	{
		if (m%i==0&&n%i==0)
			cout << i << '\t';
		i++;
	}
}

int TimUCLN (int m, int n)
{
	if (n==0) return m;
	else return TimUCLN(n,m%n);
	/*while (m!=n)
	{
		if (m>n)
			m=m-n;
		else
			n=n-m;
	}
	return m;*/
}

int TimBCNN(int m, int n)
{
	int BCNN;
	BCNN=m*n/TimUCLN(m,n);
	return BCNN;
}