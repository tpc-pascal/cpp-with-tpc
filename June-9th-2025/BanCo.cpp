#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BAN CO"
#define DESCRIPTION "Tinh gia tri tuyet doi cua do chenh lech giua tong cac o trang va tong cac o den tren vung hinh chu nhat co dinh trai tren (x_1, y_1) va dinh phai duoi (x_2, y_2) o q cau do, biet rang ban co kich thuoc NxN, moi o co ghi 1 con so, o tren trai mau trang, tinh tu day xen ke mau trang den (1 <= row, column <= N)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMatrix(int a[][MAXSIZE], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

char MauSac(int pos_X, int pos_Y) {
	if (pos_X % 2 == 0) {
		if (pos_Y % 2 == 0) return 'w';
		else return 'b';
	}
	else {
		if (pos_Y % 2 == 0) return 'b';
		else return 'w';
	}
}

int TrangVaDen(int a[][MAXSIZE], int x_1, int y_1, int x_2, int y_2) {
	int sum_White = 0, sum_Black = 0;
	
	for (int i = x_1; i <= x_2; i++) {
		for (int j = y_1; j <= y_2; j++) {				
			if (MauSac(i, j) == 'w') sum_White += a[i][j];
			else sum_Black += a[i][j];
		}
	}
	
	return abs(sum_White - sum_Black);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE][MAXSIZE], N;
	int q, x_1, y_1, x_2, y_2;
	
	cout << "Nhap N, q: ";
	cin >> N >> q;
	
	NhapMatrix(a, N);
	
	cout << "Nhap cau do:\n";
	
	while (q--) {
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		cout << "\n" << TrangVaDen(a, x_1 - 1, y_1 - 1, x_2 - 1, y_2 - 1) << "\n";
	}	
	
	return 0;
}
