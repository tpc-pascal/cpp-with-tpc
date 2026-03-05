#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "LAM TRON SO, CAP SO NGUYEN GAN NHAT"
#define DESCRIPTION "Lam tron so thuc den so nguyen gan nhat, Liet ke cac so nguyen gan nhat cua no"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int LTS(double n) {
	double phanThuc = (n >= 0) ? n-floor(n) : n+floor(n);
	
	if (n >= 0) {
		if (phanThuc >= 0.5) return ceil(n);
		else return floor(n);
	}
	else {
		if (phanThuc <= -0.5) return floor(n);
		else return ceil(n);
	}
}

void SNGN(double x) {
	if (x < 0) cout << floor(x)-1 << ", " << floor(x);
	else cout << floor(x) << ", " << floor(x)+1;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
    int T, chon;
    double x;
	
    do {
    	cout << "[1. Lam Tron So, 2. Cap So Nguyen Gan Nhat]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
    
    cout << "Nhap so luong: ";
	cin >> T;
    
    cout << "Nhap so thuc: ";
    
    switch(chon) {
    	case 1:
    	    while (T--) {
    	        cin >> x;
			    cout << "\nROUND(" << x << ") = " << LTS(x);
    	    }
			break;
    	case 2:
    	    while (T--) {
    		    cin >> x;
    		    cout << "\n" << x << ": [";
    		    
    		    SNGN(x);
    		    
    		    cout << "]";
    	    }
    		break;
    	default: break;
	}
    
    return 0;
}