#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "VUA GA VUA CHO"
#define DOCUMENT "drive.google.com/file/d/1Os1OjTzGgENqEri9sbrqXYEVBXMfLu2l/view?usp=drive_link"
#define MAXSIZE 100

void VuaGaVuaCho(int soCon, int soChan) {
	// soGa + soCho = soCon
	// 2 * soGa + 4 * soCho = soChan
	
	// soGa = soCon - (soChan/2 - soCon)
	cout << "Ga = " << soCon - (soChan/2 - soCon) << "\n";
	// soCho = soChan/2 - soCon
	cout << "Cho = " << soChan/2 - soCon;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int tongSoCon, tongSoChan;
    cout << "Nhap tong so con va tong so chan: ";
    cin >> tongSoCon >> tongSoChan;
    
    VuaGaVuaCho(tongSoCon, tongSoChan);
   	
    return 0;
}
