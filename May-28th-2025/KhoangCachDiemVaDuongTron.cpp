#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KHOANG CACH, DIEM VA DUONG TRON"
#define DESCRIPTION "Tinh khoang cach giua 2 diem A va B, moi quan he giua diem M va duong tron tam C"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

float KhoangCach(float xA, float yA, float xB, float yB) {
	return sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
    
    int T, chon;
    float x1, y1, R, x2, y2;
	
	do {
		cout << "[1. Khoang Cach, 2. Diem Va Duong Tron]: ";
		cin >> chon;
		
		if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		switch(chon) {
			case 1:
				cout << "\nA(xA, yA)? ";
			    cin >> x1 >> y1;
			    cout << "B(xB, yB)? ";
			    cin >> x2 >> y2;
			    
			    cout << "|AB| = " << fixed << setprecision(4) << KhoangCach(x1, y1, x2, y2);
			    
				break;
			case 2:
				cout << "\nNhap toa do tam C(xC, yC)? ";
			    cin >> x1 >> y1;
			    cout << "Nhap ban kinh R? ";
			    cin >> R;
			    cout << "Nhap toa do M(xM, yM)? ";
			    cin >> x2 >> y2;
			    
			    if (KhoangCach(x1, y1, x2, y2) == R) cout << "M nam tren C()";
			    else if (KhoangCach(x1, y1, x2, y2) > R) cout << "M nam ngoai C()";
			    else cout << "M nam trong C()";
			
				break;
			default: break;
		}
	}
    
    return 0;
}
