#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG UOC"
#define DESCRIPTION "Tinh tong cac uoc chia het cho A ma khong chia het cho B"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long TongUoc(long long A, long long B) {
    long long sum = 0;
    long greater = (A > B) ? A : B;
    
    for (int i = greater; i >= 1; i--) {
        if (A % i == 0 && B % i != 0) sum += i;
    }
    
    return sum;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long A, B;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap A va B: ";
	
	while (T--) {
    	cin >> A >> B;
    	cout << "\n[" << A << ", " << B << "]: " << TongUoc(A, B);
	}
	
	return 0;
}