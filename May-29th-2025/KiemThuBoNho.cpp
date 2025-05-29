#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KIEM THU BO NHO"
#define DESCRIPTION "Bang ghi bo nho la mot day nhi phan S co n bit, thuc hien q truy van: 1 l r (chuyen trang thai cac bit tu vi tri l den r), 2 x y z t (kiem tra su giong nhau cua hai day nhi phan con tu x den y va tu z den t) (1 <= l <= r <= |S|, 1 <= x,y,z,t <= |S|)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string ChuyenTrangThai(string s, int l, int r) {
	string res = "";
	
	for (int i = 0; i < s.length(); i++) {
		if (i >= l && i <= r) {
			if (s[i] == '0') res += '1';
			else res += '0';
		}
		else res += s[i];
	}
	
	return res;
}

bool is_Identical(string s, int x, int y, int z, int t) {
	if (abs(x-y) != abs(z-t)) return false;
	
	while (x <= y && z <= t) {
		if (s[x] != s[z]) return false;
		x++;
		z++;
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
	string S;
	int q, dang, x, y, z, t;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap S: ";
	
	while (T--) {
		cin >> S;
		
		cout << "Nhap q: ";
		cin >> q;
		
		while (q--) {
			cin >> dang;
			
			switch(dang) {
				case 1:
					cin >> x >> y;
					
					S = ChuyenTrangThai(S, x-1, y-1);
					
					break;
				case 2:	
					cin >> x >> y >> z >> t;
					
					if (is_Identical(S, x-1, y-1, z-1, t-1)) cout << "YES\n";
					else cout << "NO\n";
					
					break;
				default: break;
			}
		}
	}
	
	return 0;
}
