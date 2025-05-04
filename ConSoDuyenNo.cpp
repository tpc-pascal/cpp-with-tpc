#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CON SO DUYEN NO"
#define DESCRIPTION "Check the number\'s first and last digit are the same or not?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool KyTuSo(char dig) {
	return dig >= '0' && dig <= '9';
}

bool ChuoiSo(string n) {
	for (int i = 0; i < n.length(); i++) {
		if (!KyTuSo(n[i])) return false;
	}
	
	return true;
}

bool ConSoDuyenNo(string n) {
	return ChuoiSo(n) && n[0] == n[n.length() - 1];
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	string n;
	cout << "Ctrl+Z then Enter to stop!\n";
	
	while (cin >> n) {
		cout << "\n" << n << ": ";
		
		if (ConSoDuyenNo(n)) cout << "[CSDN]";
		else cout << "[NOT CSDN]";
		
		cout << "\n";
	}
	
	return 0;
}