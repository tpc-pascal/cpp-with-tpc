#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "NGUYEN TO, ERATOSTHENES"
#define DESCRIPTION "Check the number is prime or not? (bang vong lap va sang so nguyen to)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 1000006

bool NT1(long long a) {
	if (a < 2) return false;
	
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) return false;
	}
	
	return true;
}

bool nt[MAXSIZE];
void sieve() {	
	for (int i = 0; i < MAXSIZE; i++) {
		nt[i] = true;
	}
	
	nt[0] = nt[1] = false;
	for (int i = 2; i < MAXSIZE; i++) {
		if (!NT1(i)) {
			nt[i] = false;
			
			for (int j = 2 * i; j < MAXSIZE; j += i) {
				nt[j] = false;
			}
		}
	}
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
	
	int T, chon;
	int n;
	
	do {
    	cout << "[1. Nguyen To, 2. Eratosthenes]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap so nguyen: ";
	
	switch(chon) {
    	case 1:
    	    while (T--) {
    	    	cin >> n;
        		cout << "\n" << n << ": ";
        		
    			if (NT1(n)) cout << "[PRIME]";
    			else cout << "[NOT PRIME]";
    	    }
			break;
    	case 2:
    		sieve();
    		
    		while (T--) {
    	    	cin >> n;
        		cout << "\n" << n << ": ";
        		
    			if (nt[n]) cout << "[PRIME]";
    			else cout << "[NOT PRIME]";
    		}
    		break;
    	default: break;
	}
    
    return 0;
}