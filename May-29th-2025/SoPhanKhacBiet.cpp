#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO PHAN KHAC BIET"
#define DESCRIPTION "Dem so cap vi tri (i, j) sao cho chu so o vi tri i la a va o vi tri j la b (i < j)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int SoLuongKySo(string s, int start, char c) {
	int cnt = 0;
	
	for (start; start < s.length(); start++) {
		if (s[start] == c) cnt++;
	}
	
	return cnt;
}

int SoPhanKhacBiet(string s, char a, char b) {
	int cnt = 0;
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == a) cnt += SoLuongKySo(s, i+1, b);
	}
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	string s;
	char a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap s, a, b: ";
	
	while (T--) {
		cin >> s >> a >> b;
		cout << "\n" << SoPhanKhacBiet(s, a, b) << "\n";
	}
	
	return 0;
}
