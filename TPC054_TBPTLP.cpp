#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TBPTLP"
#define DOCUMENT "drive.google.com/file/d/1fS9-qNaZsMTkIrAlMG82kgALOroyO3aF/view?usp=drive_link"
#define MAXSIZE 100

int tbp_KhongAm(int a, int b, int c) {
	return (a >= 0 ? pow(a, 2) : 0) 
			+ (b >= 0 ? pow(b, 2) : 0)
			+ (c >= 0 ? pow(c, 2) : 0);
}

int tlp_Am(int a, int b, int c) {
	return (a < 0 ? pow(a, 3) : 0)
			+ (b < 0 ? pow(b, 3) : 0)
			+ (c < 0 ? pow(c, 3) : 0);
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int a, b, c;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;
   	
   	cout << "tbp (cac so khong am) = " << tbp_KhongAm(a, b, c) << "\n";
   	cout << "tlp (cac so am) = " << tlp_Am(a, b, c);
   	
    return 0;
}
