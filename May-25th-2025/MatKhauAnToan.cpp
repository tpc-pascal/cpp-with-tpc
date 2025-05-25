#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MAT KHAU AN TOAN"
#define DESCRIPTION "Danh gia do an toan mat khau cua chuoi s (do dai + so loai ky tu)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool KyTuHoa(char ch) {
	return ch >= 'A' && ch <= 'Z';
}

bool KyTuThuong(char ch) {
	return ch >= 'a' && ch <= 'z';
}

bool KyTuSo(char ch) {
	return ch >= '0' && ch <= '9';
}

int loaiKyTu(string s) {
	int h = 0, t = 0, so = 0;
	
	for (int i = 0; i < s.length(); i++) {
		if (KyTuHoa(s[i])) h = 1;
		if (KyTuThuong(s[i])) t = 1;
		if (KyTuSo(s[i])) so = 1;
	}
	
	int soLoai = h + t + so;
	
	if (soLoai != 3) return soLoai;
	else return 5;
}

int MKAT(string s) {
	int m = s.length() - 5;
	int doAnToan = min(5, max(m, 0));
	
	return doAnToan + loaiKyTu(s);
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
	
	cout << "Nhap s: ";
	
	while (T--) {
		cin >> s;
		cout << "\n" << MKAT(s) << "\n";
	}
	
	return 0;
}
