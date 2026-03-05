#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG DUONG CHEO CHINH PHU"
#define DESCRIPTION "Tinh tong cac phan tu tren duong cheo chinh hoac phu cua ma tran vuong nxn"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMatrix(int a[][MAXSIZE], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

int CheoChinh(int a[][MAXSIZE], int n) {
	int res = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) res += a[i][j];
		}
	}
	
	return res;
}

int CheoPhu(int a[][MAXSIZE], int n) {
	int res = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n) res += a[i][j];
		}
	}
	
	return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int chon;
	int a[MAXSIZE][MAXSIZE], n;
	
	do {
    	cout << "[1. Tong Cheo Chinh, 2. Tong Cheo Phu]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap n: ";
	cin >> n;
	
	NhapMatrix(a, n);
	
	switch(chon) {
    	case 1:
    	    cout << "\n" << CheoChinh(a, n);
    		break;
    	case 2:
    		cout << "\n" << CheoPhu(a, n);
    		break;
    	default: break;
	}
	
	return 0;
}
