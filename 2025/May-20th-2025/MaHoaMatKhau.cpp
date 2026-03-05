#include <iostream>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MA HOA MAT KHAU"
#define DESCRIPTION "Giai ma mat khau co quy tac (cac so co trong chuoi duoc cong lai va them vao cuoi)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool KyTuSo(char ch) {
	return ch >= '0' && ch <= '9';
}

string PhanGiai(int num) {
	if (num == 0) return "";
	
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
	
	return res;
}

string GiaiMa(string s) {
	string res = "";
	int sum = 0;
	
	for (int i = 0; i < s.length(); i++) {
		if (KyTuSo(s[i])) sum += s[i] - '0';
		else res += s[i];
	}
	
	return res + PhanGiai(sum);
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
	
	cout << "Nhap chuoi: ";
	
	while (T--) {
	    cin >> s;
	    cout << "\n\"" << s << "\": \"" << GiaiMa(s) << "\"";
	}
	
	return 0;
}