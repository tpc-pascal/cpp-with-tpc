#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO DON GIAN"
#define DESCRIPTION "Nen so cho den khi no con 1 chu so"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int NenSo(long num) {
	int res = 0;
	
	while (num) {
		res += num%10;
		num /= 10;
	}
	
	return res;
}

int SDG(int num) {
	while (num != NenSo(num)) num = NenSo(num);
	
	return num;
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
		cout << "\n" << N << ": " << SDG(N);
	}
	
	return 0;
}