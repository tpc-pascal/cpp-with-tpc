#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "FIBONACCI CHUOI"
#define DESCRIPTION "Tao chuoi fibo va dem so luong ky tu ch trong k ky tu dau"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string FiboChuoi(int n) {
	if (n == 0) return "a";
	if (n == 1) return "b";
	
	return FiboChuoi(n-2) + FiboChuoi(n-1);
}

int demChu(string s, char ch, int k) {
	int cnt = 0;
	
	for (int i = 0; i < k; i++) {
		if (s[i] == ch) cnt++;
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
	int n, k;
	char ch;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n, k, ch: ";
	
	while (T--) {
		cin >> n >> k >> ch;
		
		string res = FiboChuoi(n);
		
		cout << "\n\"" << res << "\": " << demChu(res, ch, k);
	}
	
	return 0;
}