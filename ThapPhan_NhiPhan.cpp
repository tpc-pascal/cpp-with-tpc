#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "THAP PHAN, NHI PHAN"
#define DESCRIPTION "Doi so thuc khong am tu thap phan sang nhi phan va nguoc lai"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_Valid_Binary(string s) {
	int dot = 0;
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '.') {
		    dot++;
		    continue;
		}
		if (s[i] != '0' && s[i] != '1') return false;
	}
	
	return dot == 0 || dot == 1;
}

string ToBinary(double n) {
	stack<char> st;
	string bin = "";
	int nguyen = floor(n);
	
	while (nguyen) {
		st.push(nguyen%2 + '0');
		nguyen /= 2;
	}
	
	while (!st.empty()) {
		bin += st.top();
		st.pop();
	}
	
	double thapPhan = n - floor(n);
	
	if (thapPhan != 0) {
	    bin += '.';
	
    	while (thapPhan < 1) {
    	    bin += (int)(thapPhan*2) + '0';
    	    thapPhan *= 2;
    	}
    	
    	while (!st.empty()) {
    		bin += st.top();
    		st.pop();
	    }
	}
	
	return bin;
}

double ToDecimal(string bin) {
	double deci = 0.0;
	int dot = 0, i = 0, expo = 0;
	
	while (i < bin.length()) {
	    if (bin[i] == '.') {
	        dot = i;
	        break;
	    }
	    
	    i++;
	}
	
	for (int tmp = (dot != 0) ? dot-1 : bin.length() - 1; tmp >= 0; tmp--) {
	    deci += (bin[tmp] - '0') * (double)pow(2, expo);
	    expo++;
	}
	
	if (dot != 0) {
    	expo = -1;
    	for (int tmp = dot+1; tmp < bin.length(); tmp++) {
    	    deci += (bin[tmp] - '0') * (double)pow(2, expo);
    	    expo--;
    	}
	}
	
	return deci;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
    int T, chon;
	double n;
	string s;
	
	do {
    	cout << "[1. To Binary, 2. To Decimal]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
    
    switch(chon) {
    	case 1:
    		cout << "Nhap so thuc khong am: ";
    		
			while (T--) {
				cin >> n;
				cout << "\n" << n << ": \"" << ToBinary(n) << "\"";
			}
			break;
    	case 2:
    		cout << "Nhap chuoi nhi phan: ";
    		
    		while (T--) {
				cin >> s;
				cout << "\n\"" << s << "\": ";
				
				if (is_Valid_Binary(s)) cout << ToDecimal(s);
				else cout << "[INVALID]";
			}
    		break;
    	default: break;
	}
	
    return 0;
}