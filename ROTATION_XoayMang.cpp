#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "XOAY MANG"
#define DOCUMENT "luyencode.net/problem/rotation"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XoayMang(int a[], int n, int k) {
	int tmp;
	
	while (k) {
		tmp = a[n-1];
		
		for (int i = n-1; i >= 0; i--) {
			a[i] = a[i-1];
		}
		
		a[0] = tmp;
		
		k--;	
	}	
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], n, k, q, tmp;
	cout << "Nhap n, k, q: ";
	cin >> n >> k >> q;
	
	NhapMang(a, n);
	cout << "Thuc hien xoay mang " << k << " lan!\n"; XoayMang(a, n, k);
	
	while (q) {
		cout << "Nhap tung truy van: ";
		cin >> tmp;
		cout << "a[" << tmp << "] = "<< a[tmp] << "\n";
		
		q--;
	}
	
	return 0;
}
