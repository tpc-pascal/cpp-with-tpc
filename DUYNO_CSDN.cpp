#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CON SO DUYEN NO"
#define DOCUMENT "luyencode.net/problem/duyno"
#define MAXSIZE 100

bool ConSoDuyenNo(string n) {
	return (int)n[0] == (int)n[n.length() - 1];
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int T; string n;
	cout << "Nhap so bo T: ";
	cin >> T;
	
	while (T) {
		cout << "Nhap so: ";
		cin >> n;
		
		if (ConSoDuyenNo(n)) cout << "YES";
		else cout << "NO";
		cout << "\n";
		
		T--;
	}
	
	return 0;
}
