#include<iostream>

using namespace std;

void ThapHaNoi(int n, const char* cotNguon, const char* cotTrungGian, const char* cotDich)
{
	if (n == 1) {
		cout << "Chuyen " << cotNguon << " sang " << cotDich << endl;
		return;
	}
	// Chuyen n-1 cot nguon sang cot trung gian
	ThapHaNoi(n - 1, cotNguon, cotDich, cotTrungGian);
	// Chuyen dia thu n tu cot nguon sang cot dich
	ThapHaNoi(1, cotNguon, cotTrungGian, cotDich);
	// Chuyen n-1 dia tu cot trung gian ve cot dich
	ThapHaNoi(n - 1, cotTrungGian, cotNguon, cotDich);
}

int main() {
	char cotNguon[] = "Cot A", cotTrungGian[] = "Cot B", cotDich[] = "Cot C";
	int n;
	cout << "Nhap so dia n = ";
	cin >> n;
	ThapHaNoi(n, cotNguon, cotTrungGian, cotDich);
	return 1;
}