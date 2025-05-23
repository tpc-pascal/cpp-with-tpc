#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO VUI VE"
#define DESCRIPTION "So luong uoc so la odd (l < num < r)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool SoVuiVe(int num) {
	int cnt = 0;
	
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) cnt++;
	}
	
	return cnt % 2 == 1;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int l, r, cnt = 0;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap l, r: ";
	
	while (T--) {
		cin >> l >> r;
		
		for (int i = l+1; i < r; i++) {
			if (SoVuiVe(i)) cnt++;
		}
		
		cout << "\nSo luong so vui ve: " << cnt;
	}
	
	return 0;
}
