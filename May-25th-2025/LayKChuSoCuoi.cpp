#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "LAY K CHU SO CUOI"
#define DESCRIPTION "Tim k chu so cuoi cua so nguyen n"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int ChuSoCuoi(int n, int k) {
	if (n < 0) n = abs(n);
	
	return n % (int)pow(10, k);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	string s;
	int n, k;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n, k: ";
	
	while (T--) {
		cin >> n >> k;
		
		cout << "\n" << ChuSoCuoi(n, k);
	}
	
	return 0;
}
