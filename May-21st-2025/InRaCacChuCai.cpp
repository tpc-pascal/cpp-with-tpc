#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "IN RA CAC CHU CAI"
#define DESCRIPTION "Tu cac chu cai in thuong nhap vao, in ra toan bo cac chu cai in hoa nam trong do"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool KyTuThuong(char ch) {
    return ch >= 'a' && ch <= 'z';
}

string IRCCC(char a, char b) {
	string res = "";
	
	for (int i = a - 32; i <= b - 32; i++) {
		res += (char)i;
		if (i != b - 32) res += " ";
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
	char a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap a, b: ";
	
	while (T--) {
	    do {
	        cin >> a >> b;
	        
	        if (!KyTuThuong(a) || !KyTuThuong(b) || a > b) cout << "Ky tu khong phu hop!\n";
	    } while (!KyTuThuong(a) || !KyTuThuong(b) || a > b);
	    
	    cout << "\n[" << a << ", " << b << "]: " << IRCCC(a, b);
	}
	
	return 0;
}