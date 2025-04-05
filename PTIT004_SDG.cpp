#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO DON GIAN"
#define DOCUMENT "luyencode.net/problem/ptit004"
#define MAXSIZE 100

int NenSo(long num) {
	int res = 0;
	
	while (num) {
		res += num%10;
		num /= 10;
	}
	
	return res;
}

int SoLuongChuSo(long num) {
	int cnt = 0;
	
	while (num) {
		cnt++;
		num /= 10;
	}
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int N;
	cout << "Nhap N: ";
	cin >> N;
	
	while (SoLuongChuSo(N) > 1) N = NenSo(N);
	cout << N;
	
	return 0;
}
