#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "UOC CHUNG LON NHAT, RUT GON PHAN SO"
#define DESCRIPTION "Find GCD(a, b), Rut gon phan so ve toi gian"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
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

string RutGonPhanSo(int a, int b) {
	string res = "";
	int t = abs(a) / UCLN(a, b);
	int m = abs(b) / UCLN(a, b);
	
	if (a * b < 0) res += "-";
	
	res += t + '0';
	res += " / ";
	res += m + '0';
	
	return res;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
	
	int T, chon;
	int a, b;
	
	do {
    	cout << "[1. Uoc Chung Lon Nhat, 2. Rut Gon Phan So]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap a, b: ";
	
	switch(chon) {
		case 1:
			while (T--) {
				cin >> a >> b;
				cout << "\nGCD(" << a << ", " << b << ") = " << UCLN(a, b);
			}
			break;
		case 2:
			while (T--) {
				cin >> a >> b;
				cout << "\n[" << a << " / " << b << "] = [" << RutGonPhanSo(a, b) << "]";
			}
			break;
		default: break;			
	}
	
    return 0;
}