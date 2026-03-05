#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BIEN DOI HAILSTONES"
#define DESCRIPTION "Neu n chan, dem n chia 2 con n le thi dem n nhan 3 roi cong 1, lap lai cho den khi n bang 1 thi dung"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int BienDoi(int n) {
	if (n == 1) return 0;
	if (n % 2 == 0) return n/2;

	return 3*n + 1;
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
		
		while (n) {
			cout << n << " ";
			n = BienDoi(n);
		}
		
		cout << "\n";
	}
	
	return 0;
}
