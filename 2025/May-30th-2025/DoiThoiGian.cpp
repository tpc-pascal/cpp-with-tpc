#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DOI THOI GIAN"
#define DESCRIPTION "Voi thoi gian k, bieu dien so tuan/ngay/gio"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void DoiThoiGian(int time) {
	int soTuan = (time/24) / 7;
    int soNgay = (time/24) - 7*soTuan;
    int soGio = time - (7*soTuan + soNgay)*24;
    
    cout << "\n" << soTuan << "/" << soNgay << "/" << soGio << "\n";
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int k;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap k: ";
	
	while (T--) {
		cin >> k;
		
    	DoiThoiGian(k);
	}
    
    return 0;
}
