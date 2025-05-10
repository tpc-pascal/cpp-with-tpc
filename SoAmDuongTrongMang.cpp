#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO AM DUONG TRONG MANG"
#define DESCRIPTION "Dem so luong cac so am, duong va so 0 trong mang"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void SADTM(int a[], int n) {
    int am = 0, duong = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) duong++;
        else if (a[i] < 0) am++;
    }
    
    cout << "\nDuong: " << duong << ", Am: " << am << ", Khong: " << n-duong-am;
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
	
	SADTM(a, N);
	
	return 0;
}