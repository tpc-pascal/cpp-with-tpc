#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO LON NHAT MA TONG NHO HON N"
#define DESCRIPTION "Tim so m lon nhat thoa man tong tu 1 den so do phai nho hon n"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int TSLN(int n) {
	int sum = 0, i = 1;
	
	while (sum < n) {
		sum += i;
		
		if (sum >= n) return i-1;
		
		i++;
	}
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
		cout << "\nm = " << TSLN(n);
	}
	
	return 0;
}
