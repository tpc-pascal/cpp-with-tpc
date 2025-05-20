#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "HINH PHAT"
#define DESCRIPTION "Vi tri tinh tu VTBD cua hoc sinh sau thuc hien hinh phat (1 la sang trai, 2 la sang phai)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int HinhPhat(int n) {
	int tmp, VTHT = 0;
	
	while (n--) {
		cin >> tmp;
		
		if (tmp == 1) VTHT--;
		else VTHT++;
	}
	
	return abs(VTHT);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int n;
	
	cout << "Nhap n: ";
	cin >> n;
	
	cout << HinhPhat(n);
	
	return 0;
}