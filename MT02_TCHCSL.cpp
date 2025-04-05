#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG CAC HANG CHI SO LE"
#define DOCUMENT "luyencode.net/problem/mt02"
#define MAXSIZE 100

void NhapMang(int a[][MAXSIZE], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

int TCHCSL(int a[][MAXSIZE], int m, int n) {
	int sum = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 1) sum += a[i][j];
		}
	}
	
	return sum;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE][MAXSIZE], m, n;
	cout << "Nhap m va n: ";
	cin >> m >> n;
	
	NhapMang(a, m, n);
	
	cout << TCHCSL(a, m, n);
	
	return 0;
}
