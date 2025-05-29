#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO 7 THAN KY"
#define DESCRIPTION "Co n hon da voi muc nang luong a_i khac nhau, thuc hien m truy van: 1 i la xoa hon da o vi tri i va day cac hon da lap day vi tri i do, 2 i v la thay doi muc nang luong cua hon da i thanh v, 3 k la tinh tich muc nang luong cua cac hon da o vi tri i % 7 = k, vi ket qua co the rat lon nen lay phan du cho 1000000007 (0 <= i <= n-1)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100
#define MOD 1000000007

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void XoaViTri(int a[], int& n, int pos) {
    for (int i = pos; i < n; i++) {
        a[i] = a[i+1];
    }
    
    n--;
}

long long TichMucNangLuong(int a[], int n, int k) {
    long long P = 1;
    
    for (int i = 0; i < n; i++) {
        if (i % 7 == k) P *= a[i] % MOD;
    }
    
    return P;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], n, m;
	int dang, pos, value;
	
	cout << "Nhap n, m: ";
	cin >> n >> m;
	
	NhapMang(a, n);
	
	cout << "Nhap truy van: ";
	
	while (m--) {
	    cin >> dang;
	    
	    switch(dang) {
	        case 1:
	            cin >> pos;
	            
	            XoaViTri(a, n, pos);
	            
	            break;
	        case 2:
	            cin >> pos >> value;
	            
	            a[pos] = value;
	            
	            break;
	        case 3:
	            cin >> value;
	            cout << "\n" << TichMucNangLuong(a, n, value) % MOD << "\n";
	            break;
	        default: break;
	    }
	}
	
	return 0;
}