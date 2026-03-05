#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM BOI SO"
#define DESCRIPTION "Dem so luong la boi so cua a hoac b trong doan tu L den R"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int DBS(long long L, long long R, int a, int b) {
	int cnt = 0;
	
	while (L <= R) {
		if (L % a == 0 || L % b == 0) cnt++;
		
		L++;
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
	long long L, R;
	int a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap L, R, a, b: ";
	
	while (T--) {
		cin >> L >> R >> a >> b;
		cout << "\n" << DBS(L, R, a, b);
	}
	
	return 0;
}
