#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM SO NGHICH THE"
#define DESCRIPTION "Cho mang A co N phan tu nguyen duong, thuc hien M thao tac: X Y la gan A[X] = Y roi dem so luong cap so nghich the, biet rang cap so nghich the trong mang A la cap (i,j) sao cho 1 <= i <= j <= n va A[i] > A[j] (1 <= N <= 25 * 10^4, M <= 10^4, X <= N, Y <= 5 * 10^4)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int InversionCounting(int A[], int N, int X, int Y) {
	int cnt = 0;
	
	A[X] = Y;
	
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (A[i] > A[j]) cnt++;
		}
	}
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int A[MAXSIZE], N, M, X, Y;
	
	cout << "Nhap N, M: ";
	cin >> N >> M;
	
	NhapMang(A, N);
	
	cout << "Nhap thao tac:\n";
	
	while (M--) {
		cin >> X >> Y;
		cout << "\n" << InversionCounting(A, N, X-1, Y) << "\n";
	}
	
	return 0;
}
