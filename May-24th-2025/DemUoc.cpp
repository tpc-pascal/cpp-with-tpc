#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM UOC"
#define DESCRIPTION "Xet K = N(N+1)(N+2), dem so uoc cua K^2 ma nho hon K va khong phai uoc cua K"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int DemUoc(int N) {	
	long long K = N*(N+1)*(N+2);
	long long K_squared = K*K;
	int cnt = 0;
	
	for (int i = 1; i <= K_squared; i++) {
		if (K_squared % i == 0 && i < K && K % i != 0) cnt++;
	}
	
	return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int N;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N: ";
	
	while (T--) {
		cin >> N;
		
		cout << "\nSo uoc phu hop: " << DemUoc(N);
	}
	
	return 0;
}
