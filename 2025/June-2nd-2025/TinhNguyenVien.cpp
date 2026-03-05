#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TINH NGUYEN VIEN"
#define DESCRIPTION "Co N ban dang ky lam tinh nguyen vien, moi nguoi i co so diem la a_i, co Q su kien xay ra: 1 K X la so diem cua nguoi thu K thanh X, 2 X la tat ca ban co diem nho hon X thay doi thanh X (1 <= K <= N)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void PhanTuNhoHon(int a[], int n, int X) {
    for (int i = 0; i < n; i++) {
		if (a[i] < X) a[i] = X;
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
	
	int a[MAXSIZE];
	int N, Q;
	int dang, K, X;
	
	cout << "Nhap N, Q: ";
	cin >> N >> Q;
	
	NhapMang(a, N);
	
	cout << "Nhap su kien: ";
	
	while (Q--) {
	    cin >> dang;
	    
	    switch(dang) {
	        case 1:
	            cin >> K >> X;
	            
	            a[K-1] = X;
	            
	            break;
	        case 2:
	            cin >> X;
	            
	            PhanTuNhoHon(a, N, X);
	            
	            break;
	        default: break;
	    }
	}
	
	XuatMang(a, N);
	
	return 0;
}