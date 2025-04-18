#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "UOC CHUNG LON NHAT, RUT GON PHAN SO"
#define DOCUMENT "luyencode.net/problem/vl14, luyencode.net/problem/vl15"
#define MAXSIZE 100

int UCLN(int a, int b) {
	if (a == 0 || b == 0) return a+b;
	
	if (a < 0) a = abs(a);
	if (b < 0) b = abs(b);
	
	while (a != b) {
		if (a > b) a -= b;
		if (b > a) b -= a;
	}
	
	return a;
}

void RutGonPhanSo(int a, int b) {
	int t = abs(a) / UCLN(a, b);
	int m = abs(b) / UCLN(a, b);
	
	if (a < 0 || b < 0) t *= -1;
	
	cout << t << "/" << m;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
	
	int a, b;
	cout << "Nhap phan so a / b: ";
	cin >> a >> b;
	
	cout << "\nVL14: Uoc chung lon nhat la " << UCLN(a, b);
	cout << "\nVL15: Phan so da rut gon la "; RutGonPhanSo(a, b);
	
    return 0;
}
