#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TIM KIEM SO THU 11"
#define DOCUMENT "luyencode.net/problem/vt07"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
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
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int a[10];
	NhapMang(a, 10);
	
	int tmp;
	cin >> tmp;
	
	timKiem(a, 10, tmp);
	
	return 0;
}
