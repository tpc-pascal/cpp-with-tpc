#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KHI MANG CON MOT PHAN TU"
#define DESCRIPTION "Xac dinh viec mang co the chi con 1 phan tu, biet rang co N so nguyen, thuc hien thao tac: Chon i, j (i khac j) sao cho |a[i] - a[j]| <= 1 roi xoa phan tu nho hon (neu bang nhau thi xoa 1 trong do)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int HieuTuyetDoi(int a[], int N, int i, int expected) {
	for (int j = 0; j < N; j++) {
		if (abs(a[i] - a[j]) <= expected) return j;
	}
	
	return -1;
}

void XoaPhanTu(int a[], int& N, int pos) {
	for (int i = N-1; i > pos; i--) {
		a[i] = a[i-1];
	}
	
	N--;
}

bool MotMinh(int a[], int N) {
	int j, cnt = 0;
	
	while (N > 1) {
		for (int i = 0; i < N; i++) {
			j = HieuTuyetDoi(a, N, i, 1);
			
			if (j == -1) {
				cnt++;
				continue;
			}
			
			XoaPhanTu(a, N, a[i] < a[j] ? i : j);
		}
		
		if (cnt == N) return false;
		
		cnt = 0;
	}
	
	return true;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], N;
	
	cout << "Nhap N: ";
	cin >> N;
	
	NhapMang(a, N);
	
	if (MotMinh(a, N)) cout << "\n[ALONE]\n";
	else cout << "\n[NOT ALONE]\n";
	
	return 0;
}
