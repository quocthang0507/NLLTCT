#include <iostream>

using namespace std;

void DaGiacLoi (int n);

int main()
{
	int n;
	cout << "Nhap va so dinh cua da giac loi : ";
	cin >> n;
	DaGiacLoi(n);
	return 0;
}

void DaGiacLoi (int n)
{
	int duongCheo, soDo;
	duongCheo=(n*(n-3))/2;
	soDo=(n-2)*180;
	cout << "Da giac " << n << " dinh co "
		<< "tong so duong cheo la " << duongCheo
		<< " tong so do cac goc la " << soDo << " do \n";
}