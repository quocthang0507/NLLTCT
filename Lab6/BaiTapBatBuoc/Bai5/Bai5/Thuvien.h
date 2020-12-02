//Thu tu: USD,JPY,GBP,EUR,THB,CNY,KRW,RUB,INR
string TienTe[9] = { "USD","JPY","GBP","EUR","THB","CNY","KRW","RUB","INR" };
double GiaTri[9] = { 1,104.35,0.7504,0.8356,30.24,6.572,1107.95,76,73.6406 };

/*
Đổi đơn vị tiền tệ
*/
double DoiTienTe(int id1, double value, int id2) {
	return GiaTri[0] / GiaTri[id1] * value * GiaTri[id2];
}

void XuatDanhSach() {
	cout << "Danh sach tien te: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << i << ". " << TienTe[i] << endl;
	}
}

int ChonTienTe() {
	XuatDanhSach();
	int i = -1;
	while (true)
	{
		cout << "Nhap so thu tu: ";
		cin >> i;
		if (0 <= i && i <= 9)
			break;
	}
	return i;
}