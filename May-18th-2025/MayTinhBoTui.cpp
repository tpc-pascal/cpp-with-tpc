#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "MAY TINH BO TUI"
#define DESCRIPTION "Just a simple calculator, ho tro cac loai phep tinh (+, -, *, /, %, ^)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

float TinhToan(int a, char sign, int b) {
	switch(sign) {
		case '+':
			return (float)a+b;
		case '-':
			return (float)a-b;
		case '*':
			return (float)a*b;	
		case '/':
			return (float)a/b;
        case '%':
			return a%b;
	    case '^':
	        return (float)pow(a, b);
		default: break;
	}
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
    int T;
    float a, b;
    char sign;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap bieu thuc: ";
	
	while (T--) {
		cin >> a >> sign >> b;
		cout << "\n" << fixed << setprecision(2) << TinhToan(a, sign, b);
	}
    
    return 0;
}