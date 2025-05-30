#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DIEN TICH THE TICH"
#define DESCRIPTION "Cho dien tich cua khoi cau, tinh the tich"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

double TheTich(double S) {
	// S = 4 * PI * R^2
	// V = 4/3 * PI * R^3 = S * 1/3 * R
	
	double R = sqrt(S / (4 * M_PI));
	
	return S * R / 3;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	double S;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap S: ";
	
	while (T--) {
		cin >> S;
		cout << "V = " << fixed << setprecision(6) << TheTich(S);
	}
	
	return 0;
}
