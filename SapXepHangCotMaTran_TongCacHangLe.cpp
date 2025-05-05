#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SAP XEP HANG COT MA TRAN, TONG CAC HANG LE"
#define DESCRIPTION "Sap xep hang cot chi dinh cua ma tran, Calculate sum of every elements\' value in odd-indexed rows"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMatrix(int a[][MAXSIZE], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
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

void SapTangMotCot(int a[][MAXSIZE], int m, int n, int Column) {
    for (int i = 0; i+1 < m; i++) {
        if (a[i][Column-1] > a[i+1][Column-1]) HoanVi(a[i][Column-1], a[i+1][Column-1]);
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
	
	int chon;
	int a[MAXSIZE][MAXSIZE], m, n, i;
	
	do {
    	cout << "[1. Sap Xep Hang, 2. Sap Xep Cot, 3. Tong Cac Hang Le]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 3) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 3);
	
	cout << "Nhap m, n";
	
	NhapMatrix(a, m, n);
	
	switch(chon) {
		case 1:
		    cout << ", i: ";
		    cin >> m >> n >> i;
		    
			SapTangMotHang(a, m, n, i);
			XuatMatrix(a, m, n);
			break;
		case 2:
		    cout << ", i: ";
		    cin >> m >> n >> i;
		    
			SapTangMotCot(a, m, n, i);
			XuatMatrix(a, m, n);
			break;
        case 3:
            cout << ": ";
		    cin >> m >> n;
		    
            cout << "\n" << TCHCSL(a, m, n);
            break;
		default: break;
	}
	
	return 0;
}