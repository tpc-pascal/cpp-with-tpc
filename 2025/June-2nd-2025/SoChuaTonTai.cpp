#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO CHUA TON TAI"
#define DESCRIPTION "Tim nguoi chien thang giua ban 1 va 0, biet rang 1 di truoc, mang co N so nguyen, neu so X va Y ton tai, them phan tu co gia tri |X - Y| vao neu no chua ton tai, nguoi thua cuoc thi khong the them duoc so nao nua"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

bool is_Present(int a[], int n, int val) {
	for (int i = 0; i < n; i++) {
		if (a[i] == val) return true;
	}
	
	return false;
}

void ThemPhanTu(int a[], int& n, int val) {
	a[n] = val;
	n++;
}

int SCTT(int a[], int n) {
	int loser = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (!is_Present(a, n, abs(a[i] - a[j]))) {
				ThemPhanTu(a, n, abs(a[i] - a[j]));
				loser++;
			}
		}
	}
	
	return (loser % 2 != 0) ? 0 : 1;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int a[MAXSIZE], N;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		cout << "Nhap N: ";
		cin >> N;
		
		NhapMang(a, N);
		
		cout << "\n" << SCTT(a, N) << "\n";
	}
	
	return 0;
}