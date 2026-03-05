#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "EMAIL BI AN"
#define DESCRIPTION "Giu ky tu dau va cuoi cua ten nguoi dung (truoc @)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int VTXH(string s, char ch) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ch) return i;
    }
    
    return -1;
}

string EmailBiAn(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (i > 0 && i < VTXH(s, '@') - 1) s[i] ='*';
    }
    
    return s;
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
		cout << "\n" << EmailBiAn(s) << "\n";
	}
	
	return 0;
}