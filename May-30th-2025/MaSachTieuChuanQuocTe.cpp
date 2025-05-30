#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MA SACH TIEU CHUAN QUOC TE"
#define DESCRIPTION "Ma so s co 13 ky tu (0 den 9, ky tu noi -, X thay cho 10) chia thanh 4 phan: dinh danh nhom, nha xuat ban, sach cua NXB va mot ky tu so kiem tra, biet rang ma hop le thi lay tung so nhan voi so thu tu (tinh tu phai sang va bat dau tu 1, khong tinh ky tu -) roi cong lai chia het cho 11"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool KyTuSo(char c) {
	return c >= '0' && c <= '9';
}

bool ISBN(string s) {
	int index = 1, sum = 0;
	
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] != '-') {
			if (s[i] == 'X') sum += 10 * index;
			
			if (!KyTuSo(s[i])) return false;
			else sum += (s[i] - '0') * index;
			
			index++;
		}
	}
	
	return sum % 11 == 0;
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
		
		if (ISBN(s)) cout << "\n[VALID]\n";
		else cout << "\n[INVALID]\n";
	}
	
	return 0;
}
