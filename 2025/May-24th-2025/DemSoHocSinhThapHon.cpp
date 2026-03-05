#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM SO HOC SINH THAP HON"
#define DESCRIPTION "Co bao nhieu hoc sinh co chieu cao thap hon so voi hoc sinh i"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int DSHSTH(int a[], int n, int height) {
	int cnt = 0;
	
	for (int i = 0; i < n; i++) {
		if (a[i] < height) cnt++;
	}
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int A[MAXSIZE], N;
	
	cout << "Nhap N: ";
	cin >> N;
	
	NhapMang(A, N);
	
	for (int i = 0; i < N; i++) {
		cout << DSHSTH(A, N, A[i]) << " ";
	}
	
	return 0;
}
