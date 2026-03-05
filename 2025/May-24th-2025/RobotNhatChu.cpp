#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "ROBOT NHAT CHU"
#define DESCRIPTION "Cho chuoi cac chu cai (1 ky tu co the xuat hien nhieu lan), robot se chi nhat moi ky tu 1 lan"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_Present(string s, char ch) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ch) return true;
	}
	
	return false;
}

string RNC(string s) {
	string res = "";
	
	for (int i = 0; i < s.length(); i++) {
		if (!is_Present(res, s[i])) res += s[i];
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
	string s;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap s: ";
	
	while (T--) {
		cin >> s;
		cout << "\n" << RNC(s);
	}
	
	return 0;
}
