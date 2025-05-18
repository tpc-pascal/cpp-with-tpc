#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "NAM NHUAN, SO NGAY CUA THANG"
#define DESCRIPTION "Check the year is leap or not? Find the number of days in the month"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool NamNhuan(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	
	return false;
}

int SoNgayCuaThang(int month, int year) {
	switch(month) {
		case 2:
			return NamNhuan(year) ? 29 : 28;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		default: break;
	}
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
    int T, chon;
    int year, month;
    
    do {
    	cout << "[1. Nam Nhuan, 2. So Ngay Cua Thang]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
    
    cout << "Nhap so luong: ";
	cin >> T;
    
    cout << "Nhap nam";
    
    switch(chon) {
    	case 1:
    	    cout << ": ";
    	
    	    while (T--) {
	            cin >> year;
    			cout << "\n" << year << ": ";
    					
    			if (year < 0) cout << "[INVALID]";
    			else if (NamNhuan(year)) cout << "[LEAP]";
			    else cout << "[NOT LEAP]";
    	    }
			break;
    	case 2:
    	    cout << ", thang: ";
    	    
    	    while (T--) {
        		cin >> year >> month;
        		cout << "\n" << month << "/" << year << ": ";
        		
        		if (month < 1 || month > 12 || year < 0) cout << "[INVALID]";
        		else cout << SoNgayCuaThang(month, year);
    	    }
    		break;
    	default: break;
	}
    
    return 0;
}