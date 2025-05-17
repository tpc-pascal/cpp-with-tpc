#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BAC NHAT, BAC HAI"
#define DESCRIPTION "Solve linear, quadratic equation"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void Linear (int a, int b) {
	cout << "Phuong trinh";
	
	if (a == 0) {
		if (b == 0) cout << " vo so nghiem!";
		else cout << " vo nghiem!";
	}
	else cout << " co nghiem la x = " << fixed << setprecision(2) << (float)-b/a;
}

void Quadratic(int a, int b, int c) {
	cout << "Phuong trinh";
	
	float x1, x2;
	
	if (a == 0) {
		if (b == 0) {
			if (c == 0) cout << " vo so nghiem!";
			else cout << " vo nghiem!";
		}
		else {
			x1 = x2 = (float)-c/b;
			
			cout << " co nghiem la x = " << fixed << setprecision(2) << x1;
		}
		
		return;
	}
	
	double delta = pow(b, 2) - 4*a*c;
	
	if (delta > 0) {
		x1 = (float)(-b + sqrt(delta)) / (2*a);
		x2 = (float)(-b - sqrt(delta)) / (2*a);
		
		if (x1 > x2) cout << " co nghiem la x1 = " << fixed << setprecision(2) << x2 << ", x2 = " << x1;
		else cout << " co nghiem la x1 = " << fixed << setprecision(2) << x1 << ", x2 = " << x2;
	}
	else if (delta == 0) {
		x1 = x2 = (float)-b/(2*a);
		
		cout << " co nghiem la x1 = x2 = " << fixed << setprecision(2) << x1;
	}
	else cout << " vo nghiem!";
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
    int chon;
    int a, b, c;
    
    do {
    	cout << "[1. Bac Nhat, 2. Bac Hai]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
    
    cout << "Nhap a, b";
    		
    switch(chon) {
    	case 1:
    	    cout << ": ";
    	    cin >> a >> b;
    		cout << "\n";
    		
    		Linear(a, b);
    		break;
    	case 2:
    		cout << ", c: ";
    		cin >> a >> b >> c;
    		cout << "\n";
    		
			Quadratic(a, b, c);
    		break;
    	default: break;
	}
    
    return 0;
}