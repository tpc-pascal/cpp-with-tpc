#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MUI GIO"
#define DOCUMENT "luyencode.net/problem/gmt"
#define MAXSIZE 100

void MuiGio(int h, int m, int a, int b) {
    int tmp = h + abs(a-b);
    int h1 = (tmp > 23) ?  24 - tmp : tmp;
    
    cout << h1 << " " << m;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int h, m, a, b;
	cout << "Nhap h, m, a, b: ";
	cin >> h >> m >> a >> b;
	
	MuiGio(h, m, a, b);
	
	return 0;
}