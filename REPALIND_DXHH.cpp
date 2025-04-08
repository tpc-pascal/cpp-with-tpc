#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DOI XUNG HOAN HAO"
#define DOCUMENT "luyencode.net/problem/repalind"
#define MAXSIZE 100

bool Palindrome(string str) {
    for (int i = 0; i <= str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1]) return false;
    }
    
    return true;
}

bool Repalind(string str, int soLan) {
    string tmp = str;
    
    while (soLan) {
        str += tmp;
        soLan--;
    }
    
    return Palindrome(str);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int T, k; string s;
	cout << "Nhap so bo T: ";
	cin >> T;
	
	while (T) {
	    cout << "Nhap chuoi: ";
	    cin >> s;
	    cout << "Nhap so lan lap: ";
	    cin >> k;
	    
	    if (Repalind(s, k)) cout << "YES";
	    else cout << "NO";
	    cout << "\n";
	    
	    T--;
	}
	
	return 0;
}