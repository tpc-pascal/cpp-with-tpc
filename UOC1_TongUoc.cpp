#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG UOC"
#define DOCUMENT "luyencode.net/problem/uoc1"
#define MAXSIZE 100

long TongUoc(long A, long B) {
    long sum = 0;
    long greater = (A > B) ? A : B;
    
    for (int i = greater; i >= 1; i--) {
        if (A % i == 0 && B % i != 0) sum += i;
    }
    
    return sum;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	long A, B;
	cout << "Nhap A va B: ";
	cin >> A >> B;
	
	cout << TongUoc(A, B);
	
	return 0;
}