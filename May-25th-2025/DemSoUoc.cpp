#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM SO UOC"
#define DESCRIPTION "Cho T so nguyen duong, hay cho biet so luong uoc so cua no"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int SoLuongUocSo(int num) {
	int cnt = 0;
	
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) cnt++;
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
	int tmp;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		cin >> tmp;
		cout << "\n" << SoLuongUocSo(tmp);
	}
	
	return 0;
}
