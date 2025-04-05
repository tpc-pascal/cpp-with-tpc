#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MEO DUOI CHUOT"
#define DOCUMENT "luyencode.net/problem/cats"
#define MAXSIZE 100

void BatChuot(int x, int y, int z) {
	if (abs(x-z) < abs(y-z)) cout << "Cat A";
	else if (abs(x-z) > abs(y-z)) cout << "Cat B";
	else cout << "Mouse C";
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int T, x, y, z;
	cout << "Nhap so truy van T: ";
	cin >> T;
	
	while (T) {
		cout << "Nhap toa do meo A, meo B, chuot C: ";
		cin >> x >> y >> z;
		
		BatChuot(x, y, z);
		cout << "\n";
		
		T--;
	}
	
	return 0;
}
