#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KIEM TRA NAM NHUAN, SO NGAY CUA THANG"
#define DOCUMENT "luyencode.net/problem/dk09, luyencode.net/problem/dk10"
#define MAXSIZE 100

bool NamNhuan(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	
	return year >= 0;
}

int SoNgayCuaThang(int month, int year) {
	
	if (month < 1 || month > 12 || year <= 0) return 0;
	
	else if (month == 2) {
		if (NamNhuan(year)) return 29;
		return 28;
	}
	
	else if (month % 2 == 1 && month < 8) return 31;
	else if (month % 2 == 0 && month >= 8) return 31;

	return 30;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int month, year;
    
    int chon;
    cout << "[1.KiemTraNamNhuan, 2.SoNgayCuaThang]: ";
    cin >> chon;
    
    switch(chon) {
    	case 1:
    		cout << "Nhap nam: ";
    		cin >> year;

    		cout << "\nDK09: ";
    		if (NamNhuan(year)) cout << "La nam nhuan!";
			else cout << "Khong la nam nhuan!"; 
			break;
    	case 2:
    		cout << "Nhap thang va nam: ";
    		cin >> month >> year;
    		
    		cout << "\nDK10: So ngay cua thang la " << SoNgayCuaThang(month, year);
    		break;
    	default:
    		cout << "Hay chon phuong an phu hop!";
    		break;
	}
    
    return 0;
}
