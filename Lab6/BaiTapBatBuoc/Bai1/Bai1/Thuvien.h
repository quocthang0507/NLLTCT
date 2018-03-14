#define MAX 10
#define TAB '\t'

typedef double MaTranVuong[MAX][MAX];

void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			cout << endl << "[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i=0;i<n;i++)
	{
		cout << endl << endl;
		for (j=0;j<n;j++)
			cout << TAB << a[i][j];
	}
}

double TimSoDuongNN(MaTranVuong a, int i, int n)
{
	int temp=0;
	double mini;
	for (int j=0;j<n;j++)
		if (a[i][j]>0)
			temp++;
	if (temp!=0)
	{
		for (int j=0;j<n;j++)
			if (a[i][j]>0)
			{
				mini=a[i][j];
				break;
			}
		for (int j=1;j<n;j++)
			if (a[i][j]>0)
				if (mini>a[i][j])
					mini=a[i][j];
		return mini;
	}
	else return 0;
}

double TimSoAmLN(MaTranVuong a, int j, int n)
{
	int temp=0;
	double maxj;
	for (int i=0;i<n;i++)
		if (a[i][j]<0)
			temp++;
	if (temp!=0)
	{
		for (int i=0;i<n;i++)
			if (a[i][j]<0)
			{
				maxj=a[i][j];
				break;
			}
		for (int i=1;i<n;i++)
			if (a[i][j]<0)
				if (maxj<a[i][j])
					maxj=a[i][j];
		return maxj;
	}
	else return 0;
}

int TongS(MaTranVuong a, int n)
{
	double sum=0;
	for (int i=0;i<n;i++)
		sum+=TimSoDuongNN(a,i,n);
	return sum;
}

double TongT(MaTranVuong a, int n)
{
	double sum=0;
	for (int j=0;j<n;j++)
		sum+=TimSoAmLN(a,j,n);
	return sum;
}