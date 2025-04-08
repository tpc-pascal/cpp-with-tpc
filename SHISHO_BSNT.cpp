#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BIEN SO NGUYEN TO"
#define DOCUMENT "luyencode.net/problem/shisho"
#define MAXSIZE 100

bool NguyenTo(int num) {
    if (num < 2) return false;
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    
    return true;
}

bool BSNT(string bienSo) {
    int num = 0;
    
    for (int i = bienSo.length() - 1; i >= 0; i--) {
        num += ((int)bienSo[i] - (int)'0') * pow(10, i);
    }
    
    return NguyenTo(num);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int N, cnt = 0; string tmp;
	cout << "Nhap so luong: ";
	cin >> N;
	
	while (N) {
	    cin >> tmp;
	    if (BSNT(tmp)) cnt++;
	    N--;
	}
	
	cout << cnt;
	
	return 0;
}