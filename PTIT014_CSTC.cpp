#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHU SO TAN CUNG CUA 2^N"
#define DOCUMENT "luyencode.net/problem/ptit014"
#define MAXSIZE 100

int ChuSoTC(int n) {
	if (n == 0) return 1;
	else if (n % 4 == 1) return 2;
	else if (n % 4 == 2) return 4;
	else if (n % 4 == 3) return 8;
	else return 6;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int n;
    cout << "Nhap n: ";
    cin >> n;
    
    cout << "Chu so tan cung cua 2^n la " << ChuSoTC(n);
    
    return 0;
}
