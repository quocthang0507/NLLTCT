#include <iostream>
#include <conio.h>

using namespace std;

void DayHarmonic (unsigned n);

int main()
{
	unsigned n;
	cout << "Nhap n = ";
	cin >> n;
	DayHarmonic(n);
	_getch();
	return 1;
}

void DayHarmonic (unsigned n)
{
	double tong=0;
	unsigned int i=1;
	while (i<=n)
	{
		tong=tong+1/i;
		i++;
	}
	cout << tong;
}