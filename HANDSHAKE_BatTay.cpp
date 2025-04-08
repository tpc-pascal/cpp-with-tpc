#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BAT TAY"
#define DOCUMENT "luyencode.net/problem/handshake"
#define MAXSIZE 100

int BatTay(int n) {
    // 2 nguoi bat tay dung 1 lan
    return log2(n);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int n;
	cout << "Nhap so luong tham gia: ";
	cin >> n;
	
	cout << BatTay(n);
	
	return 0;
}