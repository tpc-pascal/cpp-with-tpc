#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TRUY VAN TONG TRONG KHOANG TREN MOT DAY SO"
#define DESCRIPTION "Thuc hien Q truy van, tang cac gia tri tu l den r len x don vi: 1 l r x, tinh tong cac phan tu tu l den r: 2 l r (1 <= l <= r <= N)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void TangCacPhanTu(int a[], int l, int r, int x) {
    while (l <= r) {
        a[l] += x;
        l++;
    }
}

int TongCacPhanTu(int a[], int l, int r) {
    int sum = 0;
    
    while (l <= r) {
        sum += a[l];
        l++;
    }
    
    return sum;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int N, Q, a[MAXSIZE];
	int dang, l, r, x;
	
	cout << "Nhap N, Q: ";
	cin >> N >> Q;
	
	NhapMang(a, N);
	
	while (Q--) {
	    cout << "Nhap truy van: ";
	    cin >> dang >> l >> r;
	    
	    switch(dang) {
	        case 1:
	            cin >> x;
	            
	            TangCacPhanTu(a, l-1, r-1, x);
	            break;
	        case 2:
	            cout << "\nTong cac phan tu tu a[" << l-1 << "] den a[" << r-1 << "]: " << TongCacPhanTu(a, l-1, r-1) << "\n";
	            break;
	        default: break;
	    }
	}
	
	return 0;
}
