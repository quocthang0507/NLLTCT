#define MAX 100

typedef int MaTranVuong[MAX][MAX];

int Read_Matrix(char* filename, MaTranVuong a, int& n)
{
	ifstream in(filename);
	if (!in)
		return 0;
	in >> n;
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			in >> a[i][j];
		}
	}
	in.close();
	return 1;
}

void XuatMaTran(MaTranVuong a, int n)
{
	cout << "\nKich thuoc ma tran la " << n << "x" << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << '\t' << a[i][j] << '\t';
		}
	}
}