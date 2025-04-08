#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SAP XEP COT MA TRAN"
#define DOCUMENT "luyencode.net/problem/mt05"
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

void SapTangMotCot(int a[][MAXSIZE], int m, int n, int Column) {
    for (int i = 0; i+1 < m; i++) {
        if (a[i][Column-1] > a[i+1][Column-1]) HoanVi(a[i][Column-1], a[i+1][Column-1]);
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
	SapTangMotCot(a, m, n, i);
	XuatMatrix(a, m, n);
	
	return 0;
}