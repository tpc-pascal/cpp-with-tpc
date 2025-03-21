#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO LUONG CHU SO, SO DAO NGUOC"
#define DOCUMENT "luyencode.net/problem/vl10, luyencode.net/problem/vl18"
#define MAXSIZE 100

void XuatSo(string so) {
	for (int i = 0; i < so.length(); i++) {
		cout << so[i];
	}
}

int SoLuongChuSo(string so) {
	int cnt = 0;
	
	for (int i = 0; i < so.length(); i++) {
		if (so[i] == '-') continue;
		cnt++;
	}
	
	return cnt;
}

void SoDaoNguoc(string so) {
	string res;
	
	for (int i = 0; i < so.length(); i++) {
		if (so[i] == '-') break;
		if (i == 0 && so[so.length() - i - 1] == '0') continue;
		res[i] = so[so.length() - i - 1];
	}
	
	for (int i = 0; i < so.length(); i++) {
		cout << res[i];
	}
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
	
	string n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "So vua nhap la "; XuatSo(n);
	cout << "\nVL10: So luong chu so la " << SoLuongChuSo(n);
	cout << "\nVL18: So da dao nguoc la "; SoDaoNguoc(n);
	
    return 0;
}
