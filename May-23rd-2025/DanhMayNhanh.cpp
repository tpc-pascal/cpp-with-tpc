#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DANH MAY NHANH"
#define DESCRIPTION "Can xoa bao nhieu ky tu de chuoi P giong chuoi I"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_In_String(char ch, string s) {
	for (int i = 0; i < s.length(); i++) {
		if (ch == s[i]) return true;
	}
	
	return false;
}

int DMN(string I, string P) {
	if (P.length() < I.length()) return -1;
	
	int cnt = 0, i = 0, j = 0;
	
	while (i < I.length() && j < P.length()) {
		if (I[i] != P[j]) {
			if (is_In_String(I[i], P)) cnt++;
			else return -1;
		}
		else i++;
		
		j++;
	}
	
	if (cnt > 0 && P.length() == I.length()) return -1;
	if (cnt == 0 && P.length() > I.length()) return P.length() - I.length();
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	string P, I;
	int x = 1;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap chuoi P, I: ";
	
	while (T--) {
		cin >> I >> P;
		
		cout << "\nCase #" << x++ << ": ";
		
		if (DMN(I, P) != -1) cout << DMN(I, P);
		else cout << "IMPOSSIBLE";
		
		cout << "\n";
	}
	
	return 0;
}
