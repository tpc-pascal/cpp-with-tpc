#include <iostream>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "GIAI THUA, TO HOP"
#define DESCRIPTION "Find n! (bang vong lap va de quy). Find nC(k)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long GT1(int a) {
	if (a == 0 || a == 1) return 1;
	
	long long res = 1;
	
	for (int i = a; i >= 1; i--) {
		res *= i;
	}
	
	return res;
}

long long GT2(int a) {
	if (a == 0 || a == 1) return 1;
	
	return a * GT2(a-1);
}

float ToHop(int k, int n) {
	if (n == k) return 1;
	if (n < k) return 0;
	return (float)GT2(n) / (GT2(k) * GT2(n-k));
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
    int T, chon;
    int n, k;
    
    do {
    	cout << "[1. Giai Thua 1, 2. Giai Thua 2, 3. To Hop]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 3) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 3);
    
    cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n";
	
	switch(chon) {
		case 1:
			cout << ": ";
			
			while (T--) {
				cin >> n;
				cout << "\n" << n << "! = " << GT1(n);
			}
			break;
		case 2:
			cout << ": ";
			
			while (T--) {
				cin >> n;
				cout << "\n" << n << "! = " << GT2(n);
			}
			break;
		case 3:
			cout << ", k: ";
			
			while (T--) {
				cin >> n >> k;
				cout << "\n" << n << "C(" << k << ") = " << ToHop(k, n);
			}
			break;	
		default: break;			
	}
    
    return 0;
}