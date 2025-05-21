#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "XOAY MANG"
#define DESCRIPTION "Dao phan tu cuoi len dau k lan (0 <= index < n)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void XoayMang(int a[], int n, int k) {
	int last;
	
	while (k--) {
		last = a[n-1];
		
		for (int i = n-1; i >= 0; i--) {
			a[i] = a[i-1];
		}
		
		a[0] = last;
	}	
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], n, k, q, tmp;
	
	cout << "Nhap n, k, q: ";
	cin >> n >> k >> q;
	
	NhapMang(a, n);
	XoayMang(a, n, k);
	
	while (q--) {
		cin >> tmp;
		cout << "\na[" << tmp << "] = " << a[tmp] << "\n";
	}
	
	return 0;
}
