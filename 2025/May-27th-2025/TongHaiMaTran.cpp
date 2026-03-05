#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG HAI MA TRAN"
#define DESCRIPTION "Tinh ma tran tong, biet hai ma tran cung co m hang va n cot"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMatrix(int a[][MAXSIZE], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

void TongHaiMaTran(int a[][MAXSIZE], int b[][MAXSIZE], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] += b[i][j];
		}
	}
}

void XuatMatrix(int a[][MAXSIZE], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		
		cout << "\n";
	}
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE][MAXSIZE], b[MAXSIZE][MAXSIZE], m, n;
	
	cout << "Nhap m, n: ";
	cin >> m >> n;
	
	NhapMatrix(a, m, n);
	NhapMatrix(b, m, n);
	
	TongHaiMaTran(a, b, m, n);
	
	cout << "\n";
	XuatMatrix(a, m, n);
	
	return 0;
}
