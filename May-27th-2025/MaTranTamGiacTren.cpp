#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MA TRAN TAM GIAC TREN"
#define DESCRIPTION "Kiem tra ma tran vuong nxn co phai la tam giac tren, nghia la tat ca phan tu duoi duong cheo chinh deu bang 0"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMatrix(int a[][MAXSIZE], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

bool MTTGT(int a[][MAXSIZE], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i <= j) continue;
			
			if (i > j && a[i][j] != 0) return false;
		}
	}
	
	return true;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE][MAXSIZE], n;
	
	cout << "Nhap n: ";
	cin >> n;
	
	NhapMatrix(a, n);
	
	if (MTTGT(a, n)) cout << "\n[TAMGIACTREN]";
	else cout << "\n[NOT TAMGIACTREN]";
	
	return 0;
}
