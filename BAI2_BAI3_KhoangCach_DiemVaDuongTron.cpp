#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KHOANG CACH, DIEM VA DUONG TRON"
#define DOCUMENT "300 Exercises Code For Youth (Bai 2 va 3 / trang 3)"
#define MAXSIZE 100

float KhoangCach(float xA, float yA, float xB, float yB) {
	return sqrt(pow(xA - yA, 2) + pow(xB - yB, 2));
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    float xC, yC, R, xM, yM;
    cout << "Nhap toa do tam C(xC, yC): ";
    cin >> xC >> yC;
    cout << "Nhap ban kinh R: ";
    cin >> R;
    cout << "Nhap toa do tam M(xM, yM): ";
    cin >> xM >> yM;
    
    if (KhoangCach(xC, yC, xM, yM) == R) cout << "M nam trong C()";
    else if (KhoangCach(xC, yC, xM, yM) > R) cout << "M nam ngoai C()";
    else cout << "M nam trong C()";
    
    return 0;
}