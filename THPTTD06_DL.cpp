#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM LENH"
#define DOCUMENT "luyencode.net/problem/thpttd_06"
#define MAXSIZE 100

int DemLenh(string str) {
	int cnt = 0;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != str[i+1]) {
			i++;
		}
		cnt++;
	}
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int N;
	cout << "Nhap do dai: ";
	cin >> N;
	string str;
	cout << "Nhap chuoi: ";
	cin >> str;

	cout << DemLenh(str);
	
	return 0;
}
