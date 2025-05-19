#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "UOC SO, SO HOAN HAO"
#define DESCRIPTION "Tim uoc so, Check the number is perfect or not?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void UocSo(long num) {
	if (num == 0) {
		cout << "Co vo so uoc so!";
		return;
	}
	
	for (int i = num; i >= 1; i--) {
		if (num % i == 0) cout << i << " ";
	}
}

bool SoHoanHao(long num) {
	if (num <= 0) return false;
	
	int res = 0;
	
	for (int i = 1; i < num; i++) {
		if (num % i == 0) res += i;
	}
	
	return res == num;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
	
	int T, chon;
	long n;
	
	do {
    	cout << "[1. Uoc So, 2. So Hoan Hao]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n: ";
	
	switch(chon) {
		case 1:
		    while (T--) {
		    	cin >> n;
    			cout << "\n" << n << ": ";
    			
    			UocSo(n);
		    }
			break;
		case 2:
		    while (T--) {
		    	cin >> n;
    			cout << "\n" << n << ": ";
    			
    			if (SoHoanHao(n)) cout << "[PERFECT]";
    			else cout << "[NOT PERFECT]";
		    }
			break;
		default: break;			
	}
	
    return 0;
}