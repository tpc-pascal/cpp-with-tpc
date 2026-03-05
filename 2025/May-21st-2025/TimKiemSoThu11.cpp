#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TIM KIEM SO THU 11"
#define DESCRIPTION "Nhap 10 so dau, kiem tra vi tri cua so thu 11"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void timKiem(int a[], int n, int k) {
	int cnt = 0;
	
	for (int i = 0; i < n; i++) {
		if (a[i] == k) {
			cnt++;
			cout << i+1 << " ";
		}
	}
	
	if (cnt == 0) cout << -1;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int a[10], tmp;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap 11 so: ";
	
	while (T--) {
	    NhapMang(a, 10);
	
    	cin >> tmp;
    	
    	timKiem(a, 10, tmp);
	}
	
	return 0;
}