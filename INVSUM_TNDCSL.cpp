#include <iostream>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG NGHICH DAO CAC SO LE"
#define DOCUMENT "luyencode.net/problem/invsum"
#define MAXSIZE 100

double INVSUM(int n) {
    double S = 0;
    
    for (int i = 1; i <= 2*n - 1; i = i+2) {
        S += (float)1/i;
    }
    
    return S;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int T, n;
	cout << "Nhap so bo T: ";
	cin >> T;
	
	while (T) {
	    cout << "Nhap n: ";
	    cin >> n;
	    
	    cout << fixed << setprecision(5) << INVSUM(n) << "\n";
	    
	    T--;
	}
	
	return 0;
}