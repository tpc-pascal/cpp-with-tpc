#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SAP XEP HANG MA TRAN"
#define DOCUMENT "luyencode.net/problem/mt04"
#define MAXSIZE 100

void NhapMatrix(int a[][MAXSIZE], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void HoanVi(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void SapTangMotHang(int a[][MAXSIZE], int m, int n, int Row) {
    for (int j = 0; j+1 < n; j++) {
        if (a[Row-1][j] > a[Row-1][j+1]) HoanVi(a[Row-1][j], a[Row-1][j+1]);
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
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE][MAXSIZE], m, n, i;
	cout << "Nhap m, n va i: ";
	cin >> m >> n >> i;
	
	NhapMatrix(a, m, n);
	SapTangMotHang(a, m, n, i);
	XuatMatrix(a, m, n);
	
	return 0;
}