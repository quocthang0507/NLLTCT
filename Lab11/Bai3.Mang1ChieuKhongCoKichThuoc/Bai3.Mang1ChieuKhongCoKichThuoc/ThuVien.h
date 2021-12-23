#define MAX 100

typedef int DaySo[MAX];

int Read_Array(char* filename, DaySo a, int& n)
{
	ifstream in(filename);
	if (!in)
		return 0;
	n = 0;
	while (!in.eof())
	{
		in >> a[n];
		n++;
	}
	in.close();
	return 1;
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '\t';
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}