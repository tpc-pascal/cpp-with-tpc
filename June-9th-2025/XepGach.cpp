#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "XEP GACH"
#define DESCRIPTION "Tim nguoi lay duoc het mot chong gach giua 2 doi thu A va B, biet rang nguoi A di truoc, chong 1 co m vien gach, chong 2 co n vien, so luong vien gach bi lay tu chong nhieu gach hon phai la boi nguyen duong cua so vien gach cua chong it hon (1 <= m, n <= 10^18)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int BoiSo(int smaller, int bigger) {
	if (bigger % smaller == 0) return bigger;
	
	int i = bigger-1;
	
	while (smaller*i > bigger) {
		i--;
	}
	
	return smaller*i;
}

char XepGach(long long m, long long n) {
	int luot = 0;
	
	while (m > 0 && n > 0) {
		if (m < n) n -= BoiSo(m, n);
		else m -= BoiSo(n, m);
		
		if (m > 0 && n > 0) luot++;
	}
	
	return (luot % 2 == 0) ? 'A' : 'B';
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long m, n;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap m, n: ";
	
	while (T--) {
		cin >> m >> n;
		cout << "\n" << XepGach(m, n) << "\n";
	}
	
	return 0;
}