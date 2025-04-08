#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG THUONG"
#define DOCUMENT "luyencode.net/problem/divtr"
#define MAXSIZE 100

long long TongThuong(long long a, long long b, long long n) {
    long long res = 0;
    
    while (a <= b) {
        res += n/a;
        a++;
    }
    
    return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	long long a, b, n;
	cout << "Nhap a, b va n: ";
	cin >> a >> b >> n;
	
	cout << TongThuong(a, b, n);
	
	return 0;
}