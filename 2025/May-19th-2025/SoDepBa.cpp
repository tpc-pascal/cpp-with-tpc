#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO DEP 3"
#define DESCRIPTION "Check the number is divisible by one of these numbers (4, 7, 11) or not?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool SoDepBa(long long num) {
	if (num % 4 == 0 || num % 7 == 0 || num % 11 == 0)
		return true;
	
	return false;
}

int SDBTD(int L, int R) {
	int cnt = 0;
	
	while (L <= R) {
		if (SoDepBa(L)) cnt++;
		L++;
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
	int L, R;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap L, R: ";
	
	while (T--) {
		cin >> L >> R;
		cout << "\n[" << L << ", " << R << "]: " << SDBTD(L, R);
	}
	
	return 0;
}