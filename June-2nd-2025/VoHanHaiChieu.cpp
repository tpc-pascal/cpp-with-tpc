#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "VO HAN HAI CHIEU"
#define DESCRIPTION "Tim gia tri cua phan tu nam o hang x cot y (0 < x, y < 10^6), biet rang mang 2 chieu vo han co quy tac: F_(0,0) = 0, F_(0,1) = F_(1,0) = 1, i >= 2 thi F_(i,0) = F_(i−1,0) + F_(i−2,0), F_(0,i) = F_(0,i−1) + F_(0,i−2), i va j >= 1thi F_(i,j) = F_(i−1,j) + F_(i,j−1)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int Factorial(int n) {
    if (n == 0 || n == 1) return 1;
    
    return n * Factorial(n-1);
}

int ToHop(int n, int k) {
    if (k == 0 || k == n) return 1;
    
    return Factorial(n) / (Factorial(k) * Factorial(n-k));
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int x, y;
	
	cout << "Nhap x, y: ";
	
	while (T--) {
	    cin >> x >> y;
	    cout << "\n" << ToHop(x, y) << "\n";
	}
	
	return 0;
}