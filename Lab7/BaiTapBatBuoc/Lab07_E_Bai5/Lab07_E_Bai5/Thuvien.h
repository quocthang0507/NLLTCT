#define MAX 50

typedef char ChuoiKySo[MAX];
typedef int ChuoiSo[MAX];

int Chuyen_KySo_So(char x)
{
	if ('0' <= x && x <= '9')
		return (int)(x - '0');
	return NULL;
}

long long ChuyenDoi(ChuoiKySo a)
{
	long long soNguyenDai = 0;
	int length = strlen(a);
	for (int i = 0; i < length; i++)
	{
		soNguyenDai *= 10;
		soNguyenDai += Chuyen_KySo_So(a[i]);
	}
	return soNguyenDai;
}

void ChuyenKySoThanhSo(ChuoiKySo a)
{
	ChuoiSo t;
	int i, l = strlen(a);
	for (i = 0; i < l; i++)
		t[i] = Chuyen_KySo_So(a[i]);
	cout << t;
}