#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DANH THUC RONG VANG"
#define DESCRIPTION "Lien tuc dao chuoi s, noi vao ket qua va xac dinh ky tu o vi tri k"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string DaoXau(string s) {
	string res = "";
	
	res += s[s.length() - 1];
	
	for(int i = 0; i < s.length() - 1; i++) {
		res += s[i];
	}
	
	return res;
}

string DanhThucRongVang(int k, string s) {
	string chuoiDaDao = s;
	
	while (s.length() < k) {
		chuoiDaDao = DaoXau(chuoiDaDao);
		s += chuoiDaDao;
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
	int k;
	string s;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap k, s: ";
	
	while (T--) {
    	cin >> k >> s;
    	
    	string res = DanhThucRongVang(k, s);
    	
    	cout << "\n\"" << s << "\", " << k << ": " << res[k-1] << " (\"" << res << "\")";
	}
	
	return 0;
}