#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BIEN DOI MANG, CHENH LECH LON NHAT"
#define DOCUMENT "luyencode.net/problem/vt08, luyencode.net/problem/vt12"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void BienDoiMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		if (i % 2 == 1) {
			if (i == n-1) a[i] += a[i-1];
			else a[i] += abs(a[i-1] - a[i+1]);
		}
	}
}

int ChenhLechLonNhat(int a[], int n) {
	int res = 0;
	
	for (int i = 1; i < n; i++) {
		if (abs(a[0] - a[i]) > res) res = abs(a[0] - a[i]);
	}
	
	return res;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int n;
    cout << "Nhap n: ";
    cin >> n;
    
    int a[MAXSIZE];
    
    NhapMang(a, n);
    cout << "\nMang da nhap: "; XuatMang(a, n);
    
    cout << "\nVT12: Chenh lech lon nhat la " << ChenhLechLonNhat(a, n);
	cout << "\nVT08: Mang sau bien doi la "; BienDoiMang(a, n); XuatMang(a, n);
    
    return 0;
}
