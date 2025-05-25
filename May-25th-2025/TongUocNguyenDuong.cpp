#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG UOC NGUYEN DUONG"
#define DESCRIPTION "Tong cac uoc so nguyen duong cua n"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long TUND(long long n) {
	int res = 0;
	
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) res += i;
	}
	
	return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long n;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n: ";
	
	while (T--) {
		cin >> n;
		cout << "\n" << TUND(n);
	}
	
	return 0;
}
