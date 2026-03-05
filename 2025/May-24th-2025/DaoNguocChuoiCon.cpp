#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DAO NGUOC CHUOI CON"
#define DESCRIPTION "Thuc hien m lan dao nguoc chuoi con lien tiep tu vi tri a den cuoi mang (1 <= viTri <= |s|)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string Reverse(string s, int batDau) {
	string res = "";
	
	for (int i = s.length() - 1; i >= batDau; i--) {
		res += s[i];
	}
	
	return res;
}

string DNCC(string s, int viTri) {
	string res = "";
	int i = 0;
	
	for (i; i < viTri; i++) {
		res += s[i];
	}
	
	res += Reverse(s, i);
	
	return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	string s;
	int m, tmp;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap s, m: ";
	
	while (T--) {
		cin >> s >> m;
		cout << "Nhap vi tri: ";
		
		while (m--) {
			cin >> tmp;
			
			s = DNCC(s, tmp - 1);
		}
		
		cout << "\n" << s;
	}
	
	return 0;
}
