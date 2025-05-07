#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MA HOA CEASAR"
#define DESCRIPTION "Ma hoa va giai ma chuoi ky tu theo phuong phap Ceasar"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string Ceasar(string str, int k, int chon) {
	string res = "";
	
	for (int i = 0; i < str.length(); i++) {
		if (chon == 1) res += str[i] + k;
		else res += str[i] - k;
	}
	
	return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T, chon;
	int k;
	string s;
	
	do {
    	cout << "[1. Ma Hoa, 2. Giai Ma]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap k, s: ";

    while (T--) {
        cin >> k >> s;
        cout << "\n\"" << s << "\", " << k << ": " << Ceasar(s, k, chon);
    }

	return 0;
}