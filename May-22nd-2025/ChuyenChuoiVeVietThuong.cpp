#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHUYEN CHUOI VE VIET THUONG"
#define DESCRIPTION "Make all of characters in the string lowercase"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string CCVVT(string s) {
    string res = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        
        res += s[i];
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
	    cout << "\n\"" << s << "\": \"" << CCVVT(s) << "\"";
	}
	
	return 0;
}