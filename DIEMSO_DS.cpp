#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DIEM SO"
#define DOCUMENT "luyencode.net/problem/diemso"
#define MAXSIZE 100

int tinhDiem(string str) {
	int res = 0, cnt = 0;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'N') {
			cnt = 0;
			continue;
		}
		
		cnt++;
		res += cnt;
	}
	
	return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	string str;
	cout << "Nhap chuoi: ";
	cin >> str;
	
	cout << tinhDiem(str);
		
	return 0;
}
