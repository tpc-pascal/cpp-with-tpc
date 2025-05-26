#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG N TREN DAY"
#define DESCRIPTION "Cho so nguyen duong n, tinh S = [n/1] + [n/2] + ... + [n/n], voi [x] la lay phan nguyen cua x"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long TongNTrenDay(int n) {
    long long res = 0;
    
    for (int i = 1; i <= n; i++) {
        res += n/i;
    }
    
    return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n;
	
	cout << "Nhap so luong: ";

	cin >> T;

    

	cout << "Nhap n: ";

    

	while (T--) {

		cin >> n;

		cout << "\n" << TongNTrenDay(n) << "\n";

	}
	
	return 0;
}