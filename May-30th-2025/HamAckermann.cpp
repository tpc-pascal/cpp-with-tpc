#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "HAM ACKERMANN"
#define DESCRIPTION "Tinh A(n, m) voi n < m <= 12 va so lan de quy khi tinh no, biet rang khi n = 0 thi A = m+1, m = 0 thi A = A(n-1, 1), n va m > 0 thi A = A(n-1, A(n, m-1))"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int Ackermann(int n, int m, long long& cnt) {
	cnt++;
	
	if (n == 0) return m+1;
	if (m == 0) return Ackermann(n-1, 1, cnt);
	
	return Ackermann(n-1, Ackermann(n, m-1, cnt), cnt);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n, m;
	long long cnt = 0;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n, m: ";
	
	while (T--) {
		cin >> n >> m;
		cout << "\nA( " << n << ", " << m << " ) = " << Ackermann(n, m, cnt);
		cout << "\nGoi de quy " << cnt << " lan\n";
	}
	
	return 0;
}
