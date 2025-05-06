#include <iostream>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "NEN CHUOI RLE"
#define DESCRIPTION "Nen chuoi co quy tac (thay phan lap lai bang so lan lap cua chu do)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string SoThanhChuoi(int num) {
	if (num == 0) return "";
	
	string s = "";
	
	if (num < 10) s += num + '0';
	else {
		stack<char> st;
		
		while (num) {
			st.push(num%10 + '0');
			num /= 10;
		}
	
		while (!st.empty()) {
			s += st.top();
			st.pop();
		}
	}	
	
	return s;
}

string RLE(string s) {
	string res = "";
	int cnt = 0;
	char ch;
	
	for (int i = 0; i < s.length(); i++) {
		ch = s[i];
		
		while (s[i] == ch) {
			cnt++;
			i++;
		}
		
		i--;
		res += ch;
		res += SoThanhChuoi(cnt);
		
		cnt = 0;
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
	string str;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap chuoi: ";
	
	while (T--) {
		cin >> str;
		cout << "\n" << str << ": " << RLE(str);
	}
	
	return 0;
}