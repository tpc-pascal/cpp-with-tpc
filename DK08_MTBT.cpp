#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MAY TINH BO TUI"
#define DOCUMENT "luyencode.net/problem/dk08"
#define MAXSIZE 100

void TinhToan(int a, char sign, int b) {
	switch(sign) {
		case '+':
			cout << fixed << setprecision(2) << (float)a+b;
			break;
		case '-':
			cout << fixed << setprecision(2) << (float)a-b;
			break;
		case '*':
			cout << fixed << setprecision(2) << (float)a*b;
			break;
		case '/':
			cout << fixed << setprecision(2) << (float)a/b;
			break;
	    case '^':
	        cout << fixed << setprecision(2) << (float)pow(a, b);
			break;
		default:
			cout << "Phep tinh khong hop le!";
			break;
	}
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int a, b;
    char sign;
    cout << "Nhap phep tinh: ";
    cin >> a >> sign >> b;
    
    cout << "\nKet qua la ";
    TinhToan(a, sign, b);
    
    return 0;
}
