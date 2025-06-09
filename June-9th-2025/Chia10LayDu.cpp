#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHIA 10 LAY DU"
#define DESCRIPTION "Tim gia tri x nho nhat sao cho f(x) = y, biet rang khi 0 <= x <= 9 thi f(x) = x!, x > 9 thi f(x) = (x%10)! + f(floor(x/10))"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int Factorial(int n) {
	if (n == 0 || n == 1) return 1;
	
	return n * Factorial(n-1);
}

int CMLD(int x) {
	if (x >= 0 && x <= 9) return Factorial(x);

	return Factorial(x%10) + CMLD(floor(x/10));	
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int x = 0, y;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "";
	
	while (T--) {
		cin >> y;
		
		while (CMLD(x) != y) {
			x++;
		}
		
		cout << "\n" << x << "\n";
	}
	
	return 0;
}
