#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TRANG TRAI VUI NHON"
#define DESCRIPTION "Tinh so luong trung thu duoc tai thoi diem n cua m con ga trong trang trai, biet rang moi con ga de qua trung dau tien vao thoi diem t, cu sau k don vi thoi gian thi ga lai tiep tuc de trung (m <= 200, 1 <= t, n, k <= 10^18)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int TrangTraiVuiNhon(long long t, long long k, long long n) {
	int cnt = 0;
	
	while (t <= n) {
		t += k;
		cnt++;
	}
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int m;
	long long t, n, k;
	
	cout << "Nhap m: ";
	cin >> m;
	
	cout << "Nhap t, k, n: ";
	
	while (m--) {
		cin >> t >> k >> n;
		cout << "\n" << TrangTraiVuiNhon(t, k, n) << "\n";
	}
	
	return 0;
}