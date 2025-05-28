#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO NGAY DA TRAI QUA"
#define DESCRIPTION "Tinh so ngay da trai qua khi biet ngay thang nam"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int NgayCuaThang(int m, int y) {
	switch(m) {
		case 1: case 3:	case 5:	case 7: case 8:	case 10: case 12:
			return 31;
			break;
		case 4:	case 6:	case 9:	case 11:
			return 30;
			break;
		case 2:
			if ((y % 4 == 0 && y % 100 != 0) && y % 400 == 0)
				return 29;
			return 28;
			break;
	}
}

int SoNgay(int d, int m, int y) {
	int res = 0, i = 1;
	
	while (i < m) {
		res += NgayCuaThang(m, y);
		i++;
	}
	
	return res + d;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int d, m, y;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		do {
	    	cout << "Nhap ngay, thang, nam: ";
	    	cin >> d >> m >> y;
	    	
	    	if (d < 0 || m < 1 || m > 12 || y < 0) cout << "Khong hop le!\n";
		} while (d < 0 || m < 1 || m > 12 || y < 0);
		
		cout << "\nNgay thu " << SoNgay(d, m, y);
	}
	
	return 0;
}
