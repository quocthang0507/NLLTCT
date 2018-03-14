#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int &n)
{
	int i;
	for (i=0;i<n;i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
	for (int i=0;i<n;i++)
		cout << a[i] << TAB;
}

void KiemTra0(DaySo a, int n)
{
	int kt=0;
	for (int i=0;i<n;i++)
		if (a[i]==0)
			kt++;
	if (kt>0) cout << "\nPhat bieu sai!";
	else cout << "\nPhat bieu dung!";
}

void LienTiep(DaySo a, int n)
{
	int kq=0;
	for (int i=0;i<n;i++)
		if (a[i]+1==a[i+1] && a[i+1]+1==a[i+2])
		{
			kq=1;
			break;
		}
	if (kq==0)
		cout << "\nPhat bieu sai!";
	else cout << "\nPhat bieu dung!";
}

void Chua0Chua1(DaySo a, int n)
{
	int kt=0, kt1=0;
	for (int i=0;i<n;i++)
		if (a[i]==0) 
		{
			kt=1;
			break;
		}
	for (int i=0;i<n;i++)
		if (a[i]==1)
		{
			kt1=1;
			break;
		}
	if (kt!=0 && kt1!=0) cout << "\nPhat bieu dung!";
	else cout << "\nPhat bieu sai!";
}

void TrungBinhCong(DaySo a, int n)
{
	double sum=0, tbc;
	int kq=0;
	for (int i=0;i<n;i++)
		sum+=a[i];
	tbc=sum/n;
	for(int i=0;i<n;i++)
		if (a[i]==tbc)
		{
			kq=1;
			break;
		}
	if (kq==0) cout << "\nPhat bieu sai!";
	else cout << "\nPhat bieu dung!";
}

void ChuaGiaTriAm(DaySo a, int n)
{
	int kt=0;
	for (int i=0;i<n;i++)
		if (a[i]<0)
			kt++;
	if (kt>0) cout << "\nPhat bieu sai!";
	else cout << "\nPhat bieu dung!";
}