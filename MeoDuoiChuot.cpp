#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MEO DUOI CHUOT"
#define DESCRIPTION "Which cat is the closest to the mouse?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string BatChuot(int x, int y, int z) {
	if (abs(x-z) < abs(y-z)) return "Cat A";
	else if (abs(x-z) > abs(y-z)) return "Cat B";
	else return "Mouse C";
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int q;
	int x, y, z;
	
	cout << "Nhap so luong: ";
	cin >> q;
	
	cout << "Nhap x, y, z: ";
	
	while (q--) {
		cin >> x >> y >> z;
		cout << "\n[" << x << ", " << y << ", " << z << "]: " << BatChuot(x, y, z);
	}
	
	return 0;
}