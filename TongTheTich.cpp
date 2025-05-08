#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG THE TICH"
#define DESCRIPTION "Tinh tong the tich cua cac khoi lap phuong tu 1 den n"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long TongTheTich(int n) {
	long long sum = 0;
	
	for (int i = 1; i <= n; i++) {
		sum += pow(i, 3);
	}
	
	return sum;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n: ";
	
	while (T--) {
	    cin >> n;
	    cout << "\n" << n << ": " << TongTheTich(n);
	}
	
	return 0;
}