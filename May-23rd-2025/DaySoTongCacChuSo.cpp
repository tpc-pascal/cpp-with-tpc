#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DAY SO TONG CAC CHU SO"
#define DESCRIPTION "Dem cac so nho hon m trong day so thoa man quy luat (n + sum of all digits of n)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int TCS(int n) {
    int sum = 0;
    
    while (n) {
        sum += n%10;
        n /= 10;
    }
    
    return sum;
}

int DSTCCS(int n) {
    return n + TCS(n);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n, m, cnt = 0;
	
	cout << "Nhap so luong: ";
	cin >> T;

	cout << "Nhap n, m: ";
	
	while (T--) {
	    cin >> n >> m;
	    
	    while (n < m) {
	        n = DSTCCS(n);
	        cnt++;
	    }
	    
	    cout << "\nSo luong so nho hon " << m << ": " << cnt;
	}
	
	return 0;
}