#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TIM SO LON NHAT"
#define DESCRIPTION "Tim so lon nhat giua 2 so nguyen"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int TSLN(int a, int b) {
	if (a > b) return 1;
	else return -1;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap a, b: ";
	
	while (T--) {
    	cin >> a >> b;
    	cout << "\n" << a << ", " << b << ": ";
    	
    	if (TSLN(a, b) == 1) cout << a << " > " << b;
    	else cout << a << " < " << b;
	}
	
	return 0;
}