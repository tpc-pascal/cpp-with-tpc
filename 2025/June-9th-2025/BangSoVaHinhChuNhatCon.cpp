#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BANG SO VA HINH CHU NHAT CON"
#define DESCRIPTION "Cho bang so co MxN o, ban dau cac o co gia tri la 0, thuc hien Q truy van: 1 r x la tang gia tri cua tat ca cac o trong dong r them x, 2 c x la tang gia tri cua tat ca cac o trong cot c them x, 3 x_1 y_1 x_2 y_2 la tim gia tri lon nhat cua cac o trong hinh chu nhat con co goc trai tren la o (x_1, y_1) va goc phai duoi la o (x_2, y_2) (1 <= row <= M, 1 <= column <= N, 1 <= x <= 10^9)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void KhoiTaoBangSo(int a[][MAXSIZE], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = 0;
		}
	}
}

void TangDong(int a[][MAXSIZE], int m, int n, int r, int x) {
	for (int i = 0; i < n; i++) {
		a[r][i] += x;
	}
}

void TangCot(int a[][MAXSIZE], int m, int n, int c, int x) {
	for (int i = 0; i < m; i++) {
		a[i][c] += x;
	}
}

int GiaTriBangCon(int a[][MAXSIZE], int x_1, int y_1, int x_2, int y_2) {
	int max = 0;
	
	for (int i = x_1; i <= x_2; i++) {
		for (int j = y_1; j <= y_2; j++) {
			if (max < a[i][j]) max = a[i][j];
		}
	}
	
	return max;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE][MAXSIZE], M, N;
	int Q, dang, x_1, y_1, x_2, y_2;
	
	cout << "Nhap M, N, Q: ";
	cin >> M >> N >> Q;
	
	KhoiTaoBangSo(a, M, N);
	
	cout << "Nhap truy van:\n";
	
	while (Q--) {
		cin >> dang;
		
		switch(dang) {
			case 1:
				cin >> x_1 >> x_2;
				
				TangDong(a, M, N, x_1 - 1, x_2);
				
				break;
			case 2:
				cin >> y_1 >> y_2;
				
				TangCot(a, M, N, y_1 - 1, y_2);
				
				break;
			case 3:
				cin >> x_1 >> y_1 >> x_2 >> y_2;
				cout << "\n" << GiaTriBangCon(a, x_1 - 1, y_1 - 1, x_2 - 1, y_2 - 1) << "\n";
				
				break;
			default: break;
		}
	}
	
	return 0;
}
