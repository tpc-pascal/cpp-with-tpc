#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "LIET KE SO NGUYEN TO"
#define DOCUMENT "300 Exercises Code For Youth (Bai 36 / trang 12)"
#define MAXSIZE 100

bool NT(int num) {
	if (num < 2) return false;
	
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	
	return true;
}

void LKSNT(int n) {
	int cnt = 0;
	
	for (int i = 2; cnt < n; i++) {
		if (NT(i)) {
			cnt++;
			cout << i << " ";
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
	
	LKSNT(n);
	
	return 0;
}
