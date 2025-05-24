#include <iostream>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MAT KHAU MO CUA"
#define DESCRIPTION "str(n) la dang xau ky tu cua so n, so tuan hoan la so neu ton tai mot so nguyen m sao cho khi viet lap lai tu hai lan tro len thi str(m) se duoc str(n), mat khau la so tuan hoan lon nhat khong vuot qua N"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string str(int num) {
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

bool SoTuanHoan(int num) {
	string s = str(num);
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[0]) return false;
	}
	
	return true;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int N;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N: ";
	
	while (T--) {
		cin >> N;
		
		while (N--) {
			if (SoTuanHoan(N)) {
				cout << "\nMat khau cua phong: " << N;
				break;	
			}
		}
	}
	
	return 0;
}
