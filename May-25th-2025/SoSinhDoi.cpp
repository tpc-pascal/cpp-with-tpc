#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO SINH DOI"
#define DESCRIPTION "Hai so sinh doi thi co tong uoc (ngoai tru chinh so do) cua so nay bang gia tri so kia"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long TongUoc(long long n) {
	long long sum = 0;
	
	for (int i = 1; i < n; i++) {
		if (n % i == 0) sum += i;
	}
	
	return sum;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap a, b: ";
	
	while (T--) {
		cin >> a >> b;
		cout << "\n" << a << ", " << b << ": ";
		
		if (TongUoc(a) == b && TongUoc(b) == a) cout << "[TWIN]";
		else cout << "[NOT TWIN]";
	}
	
	return 0;
}
