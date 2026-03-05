#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TANG DAU GIAM CUOI"
#define DESCRIPTION "Moi truy van m, tang cac phan tu vi tri u den v mot luong k (1 <= u <= v <= n)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void TDGC(int a[], int n, int u, int v, int k) {
    for (int i = u-1; i < v; i++) {
        a[i] += k;
    }
}

int Maximum(int a[], int n) {
    int maxPos = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxPos]) maxPos = i;
    }
    
    return maxPos;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], n, m, u, v, k;
	
	cout << "Nhap n, m: ";
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) a[i] = 0;
	
	cout << "Nhap u, v, k: ";
	
	while (m--) {
	    cin >> u >> v >> k;
	    
	    TDGC(a, n, u-1, v-1, k);
	}
	
	int max = Maximum(a, n);
	cout << "\nGTLN sau thay doi: " << a[max];
	
	return 0;
}
