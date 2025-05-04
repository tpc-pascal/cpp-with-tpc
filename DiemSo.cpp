#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DIEM SO"
#define DESCRIPTION "Tinh diem co quy tac (N la 0d, con lai se cong so lan lien tiep dat diem C)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_Valid_Record(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != 'N' && s[i] != 'C') return false;
	}
	
	return true;
}

int tinhDiem(string str) {
	int res = 0, cnt = 0;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'N') {
			cnt = 0;
			continue;
		}
		
		cnt++;
		res += cnt;
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
	string rec;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap chuoi: ";
	
	while (T--) {
		cin >> rec;
		cout << "\n" << rec << ": ";
		
		if (is_Valid_Record(rec)) cout << tinhDiem(rec);
		else cout << "[INVALID]";
	}
		
	return 0;
}