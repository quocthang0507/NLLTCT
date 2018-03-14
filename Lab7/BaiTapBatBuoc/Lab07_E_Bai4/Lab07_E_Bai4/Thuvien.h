#define MAX 100
#define CACH ' '

typedef char String[MAX];

int Dem_KT(String s, char x)
{
	int i, l=strlen(s), dem=0;
	for (i=0;i<l;i++)
		if (s[i]==x)
			dem++;
	return dem;
}

void KyTu_PB(String s)
{
	String b;
	int i, m, j, dau, l=strlen(s), dem;
	m = 0;
	for (i = 0; i < l; i++)
	{
		dau = 1;
		for (j = 0; j < m && dau; j++)
			dau = dau && (s[i] != b[j]);
		if (dau)
		{
			b[m++] = s[i];
			dem=Dem_KT(s,s[i]);
			cout << "\nKy tu '" << s[i] << "' xuat hien " << dem << " lan";
		}
	}
}

int ViTriDT_KT(String s, char x)
{
	int i, l=strlen(s), vt=-1;
	for (i=0;i<l;i++)
		if (s[i]==x)
		{
			vt=i;
			break;
		}
	return vt;
}

int ViTri_Chuoi(String s, String t)
{
	char *temp;
	int vt;
	temp=strstr(s,t);
	vt=(int)(temp-s);
	if (temp!=NULL)
		return vt;
	else return -1;
}

int DemTu(String s)
{
	int dem=0, i, l=strlen(s);
	if (s[0]!=0)
	{
		strcat(s," ");
		dem=1;
		for (i=0;i<l;i++)
			if (s[i]==' ' && ((s[i-1]>=65 && s[i-1]<=90) || (s[i-1]>=97 && s[i-1]<=122)))
				dem++;
	}
	return dem;
}

void DaoTu(String s)
{
	char *t, a[MAX];
	int l=strlen(s);
	for (int i=l-1;i>=0;i--)
		if (s[i]==' ')
		{
			t=s+i+1;
			s[i]='\0';
			break;
		}
	strcpy(a,strstr(s," "));
	l=strlen(s)-strlen(strstr(s," "));
	s[l]='\0';
	strcat(strcat(strcat(t,a)," "),s);
	strcpy(s,t);
	cout << s;
}