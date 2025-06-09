#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CAP SO CONG"
#define DESCRIPTION "Xac dinh day so nguyen co N phan tu la cap so cong, biet rang hai phan tu lien tiep nhau cach nhau 1 hang so goi la cong sai"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

bool CapSoCong(int a[], int n) {
	int congSai = abs(a[1] - a[0]);
	
	for (int i = 2; i < n; i++) {
		if (abs(a[i] - a[i-1]) != congSai) return false;
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
	
	if (CapSoCong(a, N)) cout << "\n[CAPSOCONG]\n";
	else cout << "\n[NOT CAPSOCONG]\n";
	
	return 0;
}
