#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TRUNG BINH CONG 3 SO"
#define DOCUMENT "luyencode.net/problem/avg3num"
#define MAXSIZE 100

int TrungBinhCong(int a, int b, int x) {
	// (a+b+c)/3 = x
	return 3*x - (a+b);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int a, b, x;
	cout << "Nhap a, b va x: ";
	cin >> a >> b >> x;
	
	cout << TrungBinhCong(a, b, x);
	
	return 0;
}
