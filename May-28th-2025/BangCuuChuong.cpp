#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BANG CUU CHUONG"
#define DESCRIPTION "Xuat cot cuu chuong cua so n hoac ca bang cuu chuong tu 2 den 9"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void CotCuuChuong(int n) {
	if (n == 1) {
		cout << "Tu tinh di!";
		return;
	}
	
	for (int i = 1; i <= 10; i++) {
		cout << "|";
		
		if (n < 10) cout << " ";
		
		cout << n << "x";
		
		if (i < 10) cout << " ";
		
		cout << i << "=";
		
		if (n*i < 10) cout << " ";
		
		cout << n*i << "|\n";
	}
}

void BCC() {
	int i = 2;
	
    for (int j = 1; j <= 10; j++) {
	    while (i <= 9) {
	       cout << "|" << i << "x";
	       
	       if (j < 10) cout << " ";
	        
	       cout << j << "=";
	       
	       if (i*j < 10) cout << " ";
	        
	       cout << i*j;
	        
	       i++;
	    }
	    
	    cout << "|\n";
	    i = 2;
    }
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
    
    int T;
    int n, m;
    int chon;
    
	do {
		cout << "[1. Cot Cuu Chuong, 2. Bang Cuu Chuong]: ";
		cin >> chon;
		
		if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
    
    cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		switch(chon) {
			case 1:
				cout << "Nhap n: ";	
				cin >> n;
				
				CotCuuChuong(n);
				break;
			case 2:
				BCC();
				break;
			default: break;
		}
	}
    
    return 0;
}
