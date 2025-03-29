#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DO CHINH XAC CUA LAM TRON"
#define DOCUMENT "300 Exercises Code For Youth (Bai 28 / trang 10)"
#define MAXSIZE 100

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";

    double x; int doChinhXac;
    cout << "Nhap so thuc x: ";
    cin >> x;
    cout << "Do chinh xac: ";
    cin >> doChinhXac;
    
    if (doChinhXac > 0) cout << setprecision(doChinhXac+1) << x;
    else if (doChinhXac == 0) cout << setprecision(0) << x;
    else cout << (int)x + doChinhXac;
    
    return 0;
}