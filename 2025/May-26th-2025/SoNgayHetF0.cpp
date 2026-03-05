#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO NGAY HET F0"
#define DESCRIPTION "Tim ngay gan nhat ma khong con F0, biet so nguoi nhiem ban dau, so lieu cua n ngay ve so nguoi nhiem them va so nguoi khoi tung ngay"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int SoNgayHetF0(int k, int n, int nhiem[], int khoi[]) {
    int cnt = 0, i;
    
    for (i = 0; i < n && k > 0; i++) {
        k += nhiem[i] - khoi[i];
        cnt++;
    }
    
    return (i == n) ? -1 : cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int k, n;
	int nhiem[MAXSIZE], khoi[MAXSIZE];
	
	cout << "Nhap k, n: ";
	cin >> k >> n;
	
    NhapMang(nhiem, n);
    NhapMang(khoi, n);
    
    cout << "\n" << SoNgayHetF0(k, n, nhiem, khoi) << "\n";
	
	return 0;
}