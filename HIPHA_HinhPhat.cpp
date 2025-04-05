#include <iostream>
#include <Math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "HINH PHAT"
#define DOCUMENT "luyencode.net/problem/hipha"
#define MAXSIZE 100

int HinhPhat(int n) {
	int tmp, VTHT = 0;
	
	while (n) {
		cin >> tmp;
		
		if (tmp == 1) VTHT -= 1;
		else VTHT += 1;
		
		n--;
	}
	
	return abs(VTHT);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << HinhPhat(n);
	
	return 0;
}
