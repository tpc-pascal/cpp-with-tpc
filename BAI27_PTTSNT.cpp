#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "PHAN TICH THUA SO NGUYEN TO"
#define DOCUMENT "300 Exercises Code For Youth (Bai 27 / trang 9)"
#define MAXSIZE 100

bool NT(int num) {
	if (num < 2) return false;
	
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	
	return true;
}

void PTTSNT(int n) {
	for (int i = 2; i <= n; i++) {
		while (NT(i) && n % i == 0) {
			cout << i;
			
			n /= i;
			
			if (n != 1) cout << " * ";
			else cout << "";
		}
	}
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	PTTSNT(n);
	
	return 0;
}
