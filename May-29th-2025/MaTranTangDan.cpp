#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MA TRAN TANG DAN"
#define DESCRIPTION "Tinh tong tat ca phan tu cua ma tran MxN, biet rang k la phan tu dau tien, cac hang va cot se tang dan tu day"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void KhoiTaoMatrix(int a[][MAXSIZE], int m, int n, int k) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) a[i][j] = k + i;
			else a[i][j] = a[i][j-1] + 1;
		}
	}
}

int TongPhanTu(int a[][MAXSIZE], int m, int n) {
	int sum = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
	}
	
	return sum;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int a[MAXSIZE][MAXSIZE], M, N, k;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap M, N, k: ";
	
	while (T--) {
		cin >> M >> N >> k;
		
		KhoiTaoMatrix(a, M, N, k);
		
		cout << "\n" << TongPhanTu(a, M, N);
	}
	
	return 0;
}
