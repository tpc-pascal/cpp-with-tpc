#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DOI SO GIO"
#define DOCUMENT "300 Exercises Code For Youth (Bai 18 / trang 7)"
#define MAXSIZE 100

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
  	int soGio;
  	cout << "Nhap so gio: ";
  	cin >> soGio;
    
    int soTuan = (soGio/24) / 7;
    int soNgay = (soGio/24) - 7*soTuan;
    int conLai = soGio - (7*soTuan + soNgay)*24;
    cout << soTuan << " tuan, " << soNgay << " ngay, " << conLai << " gio";
    
    return 0;
}