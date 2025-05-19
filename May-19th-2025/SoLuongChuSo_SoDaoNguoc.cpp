#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO LUONG CHU SO, SO DAO NGUOC"
#define DESCRIPTION "Tim so luong chu so, Reverse an integer (remove the '0' if it's the last digit in the integer when reversing)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int SoLuongChuSo(string num) {
	int cnt = 0;
	
	for (int i = 0; i < num.length(); i++) {
		if (num[i] == '-') continue;
		cnt++;
	}
	
	return cnt;
}

string SoDaoNguoc(string num) {
	string res = "";
	
	for (int i = 0; i < num.length(); i++) {
		if (num[i] == '-') return "Khong the dao nguoc so am!";
		if (i == 0 && num[num.length() - i - 1] == '0') continue;
		res += num[num.length() - i - 1];
	}
	
	return res;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
	
	int T, chon;
	string n;
	
    do {
    	cout << "[1. So Luong Chu So, 2. So Dao Nguoc]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n: ";
	fflush(stdin);
	
	switch(chon) {
		case 1:
		    while (T--) {
		    	cin >> n;
    			cout << "\n" << n << ": " << SoLuongChuSo(n);
		    }
			break;
		case 2:
		    while (T--) {
		    	cin >> n;
    			cout << "\n" << n << ": "<< SoDaoNguoc(n);
		    }
			break;
		default: break;			
	}
	
    return 0;
}