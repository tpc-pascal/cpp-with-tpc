#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MA TRAN THUA"
#define DESCRIPTION "Xac dinh tinh thua cua ma tran mxn, biet rang ma tran thua thi so phan tu bang 0 nhieu hon so phan tu khac 0"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMatrix(int a[][MAXSIZE], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

bool SparseMatrix(int a[][MAXSIZE], int m, int n) {
	int zero = 0, non_zero = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 0) zero++;
			else non_zero++;
		}
	}
	
	if (zero > non_zero) return true;
	
	return false;
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
	
	int a[MAXSIZE][MAXSIZE], m, n;
	
	cout << "Nhap m, n: ";
	cin >> m >> n;
	
	NhapMatrix(a, m, n);
	XuatMatrix(a, m, n);
	
	if (SparseMatrix(a, m, n)) cout << "\n[SPARSE]";
	else cout << "\n[NOT SPARSE]";
	
	return 0;
}
