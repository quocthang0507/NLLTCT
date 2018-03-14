#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	cout << setiosflags(ios::left)
		//Hang thu nhat
		<< setw(15) << "* * * * *"
		<< setw(15) << "* * * * *"
		<< "* * * * *"
		<< endl
		//Hang thu hai
		<< setw(15) << " * * * * *"
		<< setw(16) << "*       *"
		<< "*     *"
		<< endl
		//Hang thu ba
		<< setw(15) << "* * * * *"
		<< setw(17) << "*       *"
		<< "*   *"
		<< endl
		//Hang thu tu
		<< setw(15) << " * * * * *"
		<< setw(18) << "*       *"
		<< "* *"
		<< endl
		//Hang thu nam
		<< setw(15) << "* * * * *"
		<< setw(19) << "* * * * *"
		<< "*"
		<< endl;
	_getch();
	return 0;
}