#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "FIBONACCI CHUOI"
#define DOCUMENT "luyencode.net/problem/fib2"
#define MAXSIZE 100

string FiboChuoi(int n) {
	if (n == 0) return "a";
	if (n == 1) return "b";
	
	return FiboChuoi(n-2) + FiboChuoi(n-1);
}

int demChu(string s, char ch, int doDai) {
	int cnt = 0;
	
	for (int i = 0; i < doDai; i++) {
		if (s[i] == ch) cnt++;
	}
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int T, n, k;
	cout << "Nhap so bo T: ";
	cin >> T;
	
	while (T) {
		cout << "Nhap n, k: ";
		cin >> n >> k;
		
		cout << demChu(FiboChuoi(n), 'a', k) << "\n";
		
		T--;
	}
	
	return 0;
}
