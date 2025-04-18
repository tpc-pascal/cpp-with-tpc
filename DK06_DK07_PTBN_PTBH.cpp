#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "PHUONG TRINH BAC NHAT, PHUONG TRINH BAC HAI"
#define DOCUMENT "luyencode.net/problem/dk06, luyencode.net/problem/dk07"
#define MAXSIZE 100

void HoanVi(float &a, float &b) {
	int temp = a;
	a = b;
	b = temp;
}

void PTBacNhat (int a, int b) {
	if (a == 0) {
		if (b == 0) cout << "Phuong trinh vo so nghiem!";
		else cout << "Phuong trinh vo nghiem!";
	}
	else cout << "Phuong trinh co nghiem la x = " << fixed << setprecision(2) << (float)-b/a;
}

void PTBacHai(int a, int b, int c) {
	float x1, x2;
	
	if (a == 0) {
		if (b == 0) {
			if (c == 0) cout << "Phuong trinh vo so nghiem!";
			else cout << "Phuong trinh vo nghiem!";
		}
		else {
			x1 = x2 = (float)-c/b;
			cout << "Phuong trinh co nghiem la x = " << fixed << setprecision(2) << x1;
		}
		
		return;
	}
	
	double delta = pow(b, 2) - 4*a*c;
	
	if (delta > 0) {
		x1 = (float)(-b + sqrt(delta)) / (2*a);
		x2 = (float)(-b - sqrt(delta)) / (2*a);
		
		if (x2 < x1) HoanVi(x1, x2);
		
		cout << "Phuong trinh co nghiem la x1 = " << fixed << setprecision(2) << x1 << ", x2 = " << fixed << setprecision(2) << x2;
	}
	else if (delta == 0) {
		x1 = x2 = (float)-b/(2*a);
		cout << "Phuong trinh co nghiem la x1 = x2 = " << fixed << setprecision(2) << x1;
	}
	else cout << "Phuong trinh vo nghiem!";
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int a, b, c;
    cout << "Phuong trinh [1.BacNhat, 2.BacHai]: ";
    int chon;
    cin >> chon;
    
    switch(chon) {
    	case 1:
    		cout << "Nhap he so a va b: ";
    		cin >> a >> b;
    		cout << "\nDK06: ";
    		PTBacNhat(a, b);
    		break;
    	case 2:
    		cout << "Nhap he so a, b va c: ";
    		cin >> a >> b >> c;
    		cout << "\nDK07: ";
    		PTBacHai(a, b, c);
    		break;
    	default:
    		cout << "Hay chon phuong an phu hop!";
    		break;
	}
    
    return 0;
}
