#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MUI GIO"
#define DESCRIPTION "Tinh h1:m1 o mui gio b khi biet h:m o mui gio a"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int MuiGio(int h, int m, int a, int b) {
	int h1 = h + abs(a-b);
	
    return h1 <= 23 ? h1 : h1 - 24;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int h, m, a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap h, m, a, b: ";
	
	while (T--) {
		cin >> h >> m >> a >> b;
		cout << "\n" << MuiGio(h, m, a, b) << " " << m;
	}
	
	return 0;
}