#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG THE TICH"
#define DOCUMENT "luyencode.net/problem/thetich"
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
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << TongTheTich(n);
	
	return 0;
}
