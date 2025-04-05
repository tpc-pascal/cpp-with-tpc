#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO DEP 3"
#define DOCUMENT "luyencode.net/problem/divisible"
#define MAXSIZE 100

bool SoDepBa(long long num) {
	if (num % 4 == 0 || num % 7 == 0 || num % 11 == 0) return true;
	return false;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int T, L, R, cnt;
	cout << "Nhap so bo T: ";
	cin >> T;
	
	while (T) {
		cout << "Nhap [L, R]: ";
		cin >> L >> R;
		
		cnt = 0;
		while (L <= R) {
			if (SoDepBa(L)) cnt++;
			L++;
		}
		
		cout << cnt << "\n";
		T--;
	}
	
	return 0;
}
