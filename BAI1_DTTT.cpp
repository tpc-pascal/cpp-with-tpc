#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DIEN TICH MAT CAU, THE TICH KHOI CAU"
#define DOCUMENT "300 Exercises Code For Youth (Bai 1 / trang 3)"
#define MAXSIZE 100
#define PI 3.141593

double TheTich(double S) {
	double R = (double)sqrt(S / (double)(4*PI));
	
	return S * R * (double)1/3;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	double S;
	cout << "Nhap dien tich S: ";
	cin >> S;
	
	cout << "The tich V = " << fixed << setprecision(6) << TheTich(S);
	
	return 0;
}
