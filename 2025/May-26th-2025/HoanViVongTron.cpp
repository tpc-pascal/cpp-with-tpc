#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "HOAN VI VONG TRON"
#define DESCRIPTION "Xoay mang k lan ve phia trai"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void HoanViMang(int a[], int n, int k) {
    int tmp;
    
    while (k--) {
        tmp = a[0];
        
        for (int i = 0; i < n; i++) {
		    a[i] = a[i+1];
	    }
	    
	    a[n-1] = tmp;
    }
}

void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int A[MAXSIZE], n, k;
	
	cout << "Nhap n, k: ";
	cin >> n >> k;
	
	NhapMang(A, n);
	
	HoanViMang(A, n, k);
	
	XuatMang(A, n);
	
	return 0;
}