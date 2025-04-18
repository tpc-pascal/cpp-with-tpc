#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TCS TREN DOAN, TONG CHU SO, TCS LAP LAI"
#define DOCUMENT "luyencode.net/problem/sum10, luyencode.net/problem/sumdig, luyencode.net/problem/thpttd_106"
#define MAXSIZE 100

int TCS (long long n) {
    int res = 0;
    
    while(n) {
        res += n%10;
        n /= 10;
    }
    
    return res;
}

int TCSLL(long long n) {	
	while(n) {
		if (n%10 == n) break;
		n = TCS(n);
	}
	
	return n;
}

void TCSTD(long long A, long long B, int S) {
	int cnt = 0;
	int ind = 0;
	
	for (int i = A; i <= B; i++) {
		if (TCS(i) == S) {
			cnt++;
			if (ind == 0) {
				ind = i;
			}
		}
		
	}
	
	cout << "So luong: " << cnt << ", So nho nhat: " << ind;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int T;
    cout << "Nhap so bo test: ";
    cin >> T;
    
    int chon;
    cout << "Tinh [1.TCSTrenDoan, 2.TongChuSo , 3.TCSLapLai]: ";
    cin >> chon;
    
    long long A, B; int S;
    
    while (T) {
      	switch(chon) {
			case 1:
				cout << "Nhap A, B, S: ";
				cin >> A >> B >> S;
				cout << "\nSUM10: "; TCSTD(A, B, S);
				break;
			case 2:
				cout << "Nhap n: ";
				cin >> A;
				cout << "\nSUMDIG: " << TCS(A);
				break;
			case 3:
				cout << "Nhap N: ";
				cin >> A;
				cout << "\nTHPTTD_106: " << TCSLL(A);
				break;
			default:
				cout << "Hay chon phuong an phu hop!";
				break;
					
		}
        T--;
    }
    
    return 0;
}
