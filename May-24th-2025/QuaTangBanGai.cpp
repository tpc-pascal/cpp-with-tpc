#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "QUA TANG BAN GAI"
#define DESCRIPTION "Neu tang qua cho co gai thu nhat thi tra ve 0, nguoc lai tra ve 1"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int QTBG(int a, int b) {
	if (a == b) return -1;
	
	else return (a < b) ? 0 : 1;
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
		cout << "\n" << QTBG(a, b);
	}
	
	return 0;
}
