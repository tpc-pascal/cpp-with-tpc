#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHUOI NHI PHAN CON DAI NHAT"
#define DESCRIPTION "Tim do dai cua chuoi con dai nhat chi chua toan so 0"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int CNPCDN(string s) {
	int max = 0, cnt = 0, pos_Start = 0;
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0') cnt++;
		if (s[i] == '1') {
			if (max < cnt) {
				max = cnt;
			}
			
			cnt = 0;
		}
	}
	
	return max;
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
		cout << "\n" << CNPCDN(s) << "\n";
	}
	
	return 0;
}
