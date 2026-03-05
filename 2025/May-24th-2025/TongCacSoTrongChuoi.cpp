#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG CAC SO TRONG CHUOI"
#define DESCRIPTION "Tinh tong cac so xuat hien trong chuoi tren"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool KyTuSo(char ch) {
	return ch >= '0' && ch <= '9';
}

int ChuoiThanhSo(string s) {
	int num = 0;
	
	for (int i = 0; i < s.length(); i++) {
		num += (s[i] - '0') * pow(10, s.length() - i - 1);
	}
	
	return num;
}

int TCSTC(string s) {
	int sum = 0, i = 0;
	string tmp = "";
	
	while (i < s.length()) {
		if (!KyTuSo(s[i])) i++;
		
		while (KyTuSo(s[i])) {
			tmp += s[i];
			i++;
		}
		
		sum += ChuoiThanhSo(tmp);
		tmp = "";
	}
	
	return sum;
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
		cout << "\n" << TCSTC(s);
	}
	
	return 0;
}
