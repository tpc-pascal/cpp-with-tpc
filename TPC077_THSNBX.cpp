#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG HAI SO NGUYEN BANG X"
#define DOCUMENT "drive.google.com/file/d/1-CAvQHQXdBKuEcyfV4iyI3PqxkrkvvOk/view?usp=drive_link"
#define MAXSIZE 100

void NhapMang(long long a[], int N) {
	for (int i = 0; i < N; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void TongHaiSoNguyenBangX(long long a[], int N, long long X) {
	for (int i = 0; i < N; i++) {
    	for (int j = i+1; j < N; j++) {
    		if (a[i] + a[j] == X) {
    			cout << i << " " << j;
    			return;
			}
		}
	}
	
	cout << "IMPOSSIBLE";
	return;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int N; 
	long long a[MAXSIZE], X;
    cout << "Nhap N va X: ";
    cin >> N >> X;
    
    NhapMang(a, N);
    
    TongHaiSoNguyenBangX(a, N, X);

    return 0;
}
