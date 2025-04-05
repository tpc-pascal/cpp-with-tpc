#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DANH THUC RONG VANG"
#define DOCUMENT "luyencode.net/problem/ptit020"
#define MAXSIZE 100

string DaoXau(string s) {
	char tmp = s[s.length() - 1];
		
	for (int i = s.length(); i >= 0; i--) {
		s[i] = s[i-1];
	}
	
	s[0] = tmp;
	
	return s; 
}

char DanhThucRongVang(string s, int k) {
	string chuoiDaDao = s;
	
	while (s.length() < k) {
		chuoiDaDao = DaoXau(chuoiDaDao);
		s += chuoiDaDao;
	}
	
	return s[k-1];
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int k;
	cout << "Nhap k: ";
	cin >> k;
	
	string s;
	cout << "Nhap chuoi: ";
	cin >> s;
	
	cout << DanhThucRongVang(s, k);
	
	return 0;
}
