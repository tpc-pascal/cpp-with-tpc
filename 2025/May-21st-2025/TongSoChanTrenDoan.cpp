#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG SO CHAN TRONG DOAN"
#define DESCRIPTION "Tinh tong cua cac so chan co trong doan tu a den b"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int TSCTD(int a, int b) {
	int res = 0;
	
	while (a <= b) {
		if (a % 2 == 0) res += a;
		
		a++;
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
	int a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap a, b: ";
	
	while (T--) {
	    cin >> a >> b;
	    cout << "\n[" << a << ", " << b << "]: " << TSCTD(a, b);
	}
	
	return 0;
}