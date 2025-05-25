#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TRUY VAN CHUOI DOI XUNG"
#define DESCRIPTION "Kiem tra doan con tu L den R cua chuoi S co phai la chuoi doi xung (1 <= L <= R <= S.length())"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool DoiXung(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[s.length() - i - 1]) return false;
	}
	
	return true;
}

bool PalinChuoiCon(string s, int batDau, int ketThuc) {
	string tmp = "";
	
	for (batDau; batDau <= ketThuc; batDau++) {
		tmp += s[batDau];
	}
	
	return DoiXung(tmp);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	string S;
	int m, L, R;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		cout << "Nhap S: ";
		cin >> S;
		
		cout << "Nhap m: ";
		cin >> m;
		
		cout << "Nhap L, R: ";
		
		while (m--) {
			cin >> L >> R;
			
			if (PalinChuoiCon(S, L-1, R-1)) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	
	return 0;
}
