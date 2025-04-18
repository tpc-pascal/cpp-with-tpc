#include <iostream>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TO HOP, GIAI THUA 1+2"
#define DOCUMENT "luyencode.net/problem/vl07, luyencode.net/problem/gt1, luyencode.net/problem/gt2"
#define MAXSIZE 100

long long GT1(int a) {
	if (a == 0 || a == 1) return 1;
	
	long long res = 1;
	for (int i = a; i >= 1; i--) {
		res *= i;
	}
	
	return res;
}

long long GT2(int a) {
	if (a == 0 || a == 1) return 1;
	return a * GT2(a-1);
}

float ToHop(int k, int n) {
	if (k > n) return -1;
	return (float)GT2(n) / (GT2(k) * GT2(n-k));
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int T, n, k, chon;
    cout << "Nhap so bo test: ";
    cin >> T;
    
    cout << "Tinh [1.GiaiThua, 2.ToHop]: ";
    cin >> chon;
    
    while (T) {
    	cout << "Nhap n: ";
    	cin >> n;
    	
    	switch(chon) {
    		case 1:
    			cout << "\nGT1: Vong lap la " << GT1(n);
	    		cout << "\nGT2: De quy la " << GT2(n);
	    		cout << "\n";
    			break;
    		case 2:
    			cout << "Nhap k: ";
    			cin  >> k;
				cout << "\nVL07: To hop la " << fixed << setprecision(2) << ToHop(n, k);
				cout << "\n";
    			break;
    		default:
    			cout << "Hay chon phuong an phu hop!";
    			break;
		}
    	
		T--;
	}
    
    return 0;
}
