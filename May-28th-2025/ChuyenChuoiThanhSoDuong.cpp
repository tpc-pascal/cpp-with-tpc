#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHUYEN CHUOI THANH SO DUONG"
#define DESCRIPTION "Mo phong ham chuyen so nguyen duong thanh chuoi va nguoc lai"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool contain_Letter(string s, char c) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c) return true;
	}
	
	return false;
}

string itos(int num) {
	if (num < 0) return "[INVALID]";
	
	string res = "";
	
	if (num < 10) res += num + '0';
	else {
		stack<char> st;
		
		while (num) {
			st.push(num%10 + '0');
			num /= 10;
		}
		
		while (!st.empty()) {
			res += st.top();
			st.pop();
		}
	}
	
	return "\"" + res + "\"";
}

int stoi(string s) {
	if (contain_Letter(s, '-')) return -1;
	
	int res = 0;
	
	if (s.length() == 1) res += s[0] - '0';
	else {
		for (int i = 0; i < s.length(); i++) {
			res += (s[i] - '0') * pow(10, s.length() - i - 1);
		}
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
	string s;
	int num;
	
	do {
    	cout << "[1. itos(), 2. stoi()]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	switch(chon) {
		case 1:
			cout << "Nhap so nguyen duong: ";
			
			while (T--) {
				cin >> num;
				cout << "\n" << num << ": " << itos(num);
			}
			break;
		case 2:
			cout << "Nhap chuoi cac ky so: ";
			
			while (T--) {
				cin >> s;
				cout << "\n\"" << s << "\": ";
				
				if (stoi(s) != -1) cout << stoi(s);
				else cout << "[INVALID]";
			}
			break;
		default: break;
	}
	
	return 0;
}
