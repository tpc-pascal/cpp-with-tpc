#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SU VO HAN CUA DAY SO"
#define DESCRIPTION "Tim so hang thu N cua day A, biet rang phan tu dau tien la C, cac phan tu tiep theo A_i = 3 * A_(i-1) + 4, vi ket qua co the rat lon nen lay phan du cho 1000000007"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100
#define MOD 1000000007

long long SVH(long long N, long long C) {
    if (N == 1) return C;
    
    return (3 * SVH(N-1, C) + 4) % MOD;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long N, C;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N, C: ";
	
	while (T--) {
		cin >> N >> C;
		cout << "\n" << SVH(N, C);
	}
	
	return 0;
}
