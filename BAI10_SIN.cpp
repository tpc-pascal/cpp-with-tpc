#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SOCIAL INSURANCE NUMBER"
#define DOCUMENT "300 Exercises Code For Youth (Bai 10 / trang 5)"
#define MAXSIZE 100

int TongChuSo(int so) {
	int res = 0;
	while (so) {
		res += so%10;
		so /= 10;
	}
	return res;
}

bool hopLe(string sin) {
	int index = 2;
	int checkDigit = (int)sin[sin.length() - 1] - (int)'0';
	int s1 = 0, s2 = 0;
	
	for (int i = sin.length() - 2; i >= 0; i--) {
		if (index % 2 == 1) s1 += (int)sin[i] - (int)'0';
		else {
			int tmp = 2*((int)sin[i] - (int)'0');
			s2 += tmp >= 10 ? TongChuSo(tmp) : tmp;
		}
		index++;
	}
	
	return (s1+s2+checkDigit) % 10 == 0;
}


int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
	string SIN;
	do {
		cout << "\nSIN (0 de thoat): ";
		cin >> SIN;
		
		if (SIN == "0") break;
		
		if (hopLe(SIN)) cout << "SIN hop le!";
    	else cout << "SIN khong hop le!";
	} while (SIN != "0"); 
        
    return 0;
}