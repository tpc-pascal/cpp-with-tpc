#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "LIET KE SO NGUYEN TO"
#define DESCRIPTION "Tim n so nguyen to dau tien"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
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
		cout << "\n";
		
		LKSNT(n);
	}
	
	return 0;
}
