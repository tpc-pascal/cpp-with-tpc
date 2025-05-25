#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO BE NHAT VA SO LON NHAT"
#define DESCRIPTION "Tim phan tu be nhat va lon nhat (1 <= index <= N)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int SoBeNhat(int A[], int N) {
	int vtMin = 0;
	
	for (int i = 1; i < N; i++) {
		if (A[vtMin] > A[i]) vtMin = i;
	}
	
	return vtMin;
}

int SoLonNhat(int A[], int N) {
	int vtMax = 0;
	
	for (int i = 1; i < N; i++) {
		if (A[vtMax] < A[i]) vtMax = i;
	}
	
	return vtMax;
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
	
	int vtMin = SoBeNhat(A, N);
	int vtMax = SoLonNhat(A, N);
	cout << A[vtMin] << " " << vtMin+1 << " " << A[vtMax] << " " << vtMax+1;
	
	return 0;
}
