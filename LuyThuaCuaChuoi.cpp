#include <iostream>
#include <string.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "LUY THUA CUA CHUOI"
#define DESCRIPTION "Check the string G repeats K times is string S or not?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool SSHC(string a, string b) {
    if (a.length() != b.length()) return false;
    
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

bool LTCC(string G, string S, int K) {
    if (G[0] != S[0]) return false;
    
    string tmp = G;
    
    while (G.length() < S.length()) {
        G += tmp;
    }
    
    return SSHC(G, S);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	string G, S;
	int K;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap G, S, K: ";
	
	while (T--) {
	    cin >> G >> S >> K;
	    cout << "\n\"" << G << "\", \"" << S << "\", " << K << ": ";
	    
	    if (LTCC(G, S, K)) cout << "[POWER]";
	    else cout << "[NOT POWER]";
	}
	
	return 0;
}