#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BIEN SO NGUYEN TO"
#define DESCRIPTION "Bien so da bi lat nguoc co 4 chu so, hay dao lai va kiem tra xem no co phai nguyen to khong?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool NguyenTo(int num) {
    if (num < 2) return false;
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    
    return true;
}

string DaoNguoc(string s) {
    string res = "";
    
    for (int i = s.length() - 1; i >= 0; i--) {
        res += s[i];
    }
    
    return res;
}

bool BSNT(string bienSo) {
    int num = 0;
    
    for (int i = bienSo.length() - 1; i >= 0; i--) {
        num += (bienSo[i] - '0') * pow(10, i);
    }
    
    return NguyenTo(num);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int cnt = 0; 
	string tmp;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
	    cin >> tmp;
	    
	    if (BSNT(tmp)) {
	        cnt++;
	        cout << "\n" << tmp << ": " << DaoNguoc(tmp) << " [PRIME]";
	    }
	    else cout << "\n" << tmp << ": " << DaoNguoc(tmp) << " [NOT PRIME]";
	}
	
	cout << "\nSo bien nguyen to: " << cnt;
	
	return 0;
}