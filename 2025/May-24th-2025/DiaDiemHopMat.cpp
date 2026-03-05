#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DIA DIEM HOP MAT"
#define DESCRIPTION "Chon dia diem khong chua ky tu"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool DDHM(string s, char c) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c) return false;
	}
	
	return true;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int N;
	char c;
	string tmp;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N, c: ";
	
	while (T--) {
		cin >> N >> c;
		
		while (N--) {
			cin >> tmp;
			
			if (DDHM(tmp, c)) cout << "\n" << tmp;
		}
		
		cout << "\n";
	}
		
	return 0;
}
