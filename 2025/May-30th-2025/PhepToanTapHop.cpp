#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "PHEP TOAN TAP HOP"
#define DESCRIPTION "Giao, hop, hieu cua 2 tap hop A co m phan tu va B co n phan tu"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

bool is_Present(int a[], int n, int val) {
	for (int i = 0; i < n; i++) {
		if (a[i] == val) return true;
	}
	
	return false;
}

void Giao(int a[], int m, int b[], int n) {
	int cnt = 0;
	
	for (int i = 0; i < m; i++) {
		if (is_Present(b, n, a[i])) {
			cnt++;
			cout << a[i] << " ";
		}
	}
	
	if (cnt == 0) cout << "No solution!";
}

void Hieu(int a[], int m, int b[], int n) {
	int cnt = 0;
	
	for (int i = 0; i < m; i++) {
		if (!is_Present(b, n, a[i])) {
			cnt++;
			cout << a[i] << " ";
		}
	}
	
	if (cnt == 0) cout << "No solution!";
}

void Hop(int a[], int m, int b[], int n) {
	Hieu(a, m, b, n);
	Giao(a, m, b, n);
	Hieu(b, n, a, m);	
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], b[MAXSIZE], m, n;
	
	cout << "Nhap m, n: ";
	cin >> m >> n;
	
	NhapMang(a, m);
	NhapMang(b, n);
	
	cout << "Tap hop A: { "; XuatMang(a, m); cout << "}\n";
	cout << "Tap hop B: { "; XuatMang(b, n); cout << "}\n";
	cout << "C = A giao B: { "; Giao(a, m, b, n); cout << "}\n";
	cout << "C = A hop B: { "; Hop(a, m, b, n); cout << "}\n";
	cout << "C = A hieu B: { "; Hieu(a, m, b, n); cout << "}\n";
	
	return 0;
}
