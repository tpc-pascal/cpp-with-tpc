#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO BAO HIEM"
#define DESCRIPTION "Kiem tra tinh hop le cua so bao hiem o Canada (co 9 chu so)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int TongChuSo(int num) {
	int res = 0;
	
	while (num) {
		res += num%10;
		num /= 10;
	}
	
	return res;
}

bool hopLe(string soBaoHiem) {
	if (soBaoHiem.length() < 9) return false;
	
	int index = 2, s1 = 0, s2 = 0;
	int checkDigit = soBaoHiem[soBaoHiem.length() - 1] - '0';
	
	for (int i = soBaoHiem.length() - 2; i >= 0; i--) {
		int current = soBaoHiem[i] - '0';
		
		if (index % 2 == 1) s1 += current;
		else s2 += 2 * current >= 10 ? TongChuSo(2 * current) : 2 * current;
		
		index++;
	}
	
	return (s1+s2+checkDigit) % 10 == 0;
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
		cout << "\n" << s << ": ";
		
		if (hopLe(s)) cout << "[VALID]";
    	else cout << "[INVALID]";
	}
        
    return 0;
}
