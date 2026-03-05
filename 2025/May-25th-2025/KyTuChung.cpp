#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KY TU CHUNG"
#define DESCRIPTION "Tim ra tap cac ky tu chung cua ca chuoi X va Y"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_Present(string s, char ch) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ch) return true;
	}
	
	return false;
}

string KyTuChung(string X, string Y) {
	string res = "";
	
	for (int i = 0; i < X.length(); i++) {
		if (is_Present(Y, X[i]) && !is_Present(res, X[i])) res += X[i];
	}
	
	return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	string X, Y;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap X, Y: ";
	
	while (T--) {
		cin >> X >> Y;
		cout << "\n" << KyTuChung(X, Y);
	}
	
	return 0;
}
