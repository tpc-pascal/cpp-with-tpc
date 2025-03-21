#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "THUAT TOAN SANG, SO NGUYEN TO"
#define DOCUMENT "luyencode.net/problem/sangnt, luyencode.net/problem/vl11"
#define MAXSIZE 1000005

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
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
	
	int n;
	cout << "Nhap so can kiem tra: ";
	cin >> n;
	
	sieve();
	cout << "\nSANGNT: ";
	if (nt[n]) cout << "La so nguyen to!";
	else cout << "Khong la so nguyen to!";
	cout << "\nVL11: ";
	if (NT1(n)) cout << "La so nguyen to!";
	else cout << "Khong la so nguyen to!";
    
    return 0;
}
