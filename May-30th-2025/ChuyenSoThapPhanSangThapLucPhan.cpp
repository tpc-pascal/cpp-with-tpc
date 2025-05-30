#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHUYEN SO THAP PHAN SANG THAP LUC PHAN"
#define DESCRIPTION "So thap phan n nguyen duong chuyen sang dang thap luc phan"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string Rotate(string s) {
	string res = "";
	
	for (int i = s.length() - 1; i >= 0; i--) {
		res += s[i];
	}
	
	return res;
}

string toHex(int num) {
	if (num < 0) return "";
	
	string s = "";
	int mod;
	
	if (num >= 0 && num <= 9) s += num%16 + '0';
	else {
		while (num) {
			mod = num%16;
			
			if (mod >= 0 && mod <= 9) s += mod + '0';
			else s += 'A' + mod%10;
			
			num /= 16;
		}
	}
	
	return Rotate(s);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n: ";
	
	while (T--) {
		cin >> n;
		cout << "\n" << toHex(n) << "\n";
	}
	
	return 0;
}
