#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KIEM TRA SO NGUYEN TO"
#define DESCRIPTION "Lien tuc kiem tra tung so, tra ve 1 neu la prime va tra ve 0 neu khong la prime"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool NT(int num) {
	if (num < 2) return false;
	
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	
	return true;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int n;
	
	cout << "Ctrl+Z then Enter" << "\n";
	
	while (cin >> n) {
		if (NT(n)) cout << 1;
		else cout << 0;
		
		cout << "\n";
	}
	
	return 0;
}