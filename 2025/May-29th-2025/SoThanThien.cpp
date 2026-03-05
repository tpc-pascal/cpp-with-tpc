#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO THAN THIEN"
#define DESCRIPTION "Dem so luong so than thien trong doan tu a den b, biet rang UCLN(x, DaoNguoc(x)) = 1 thi ca hai la so than thien"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int SLCS(int num) {
    int cnt = 0;
    
    while (num) {
        cnt++;
        num /= 10;
    }
    
    return cnt;
}

int DaoNguoc(int num) {
    if (num < 10) return num;
    
    int res = 0;
    
    while (num) {
        res += num%10 * pow(10, SLCS(num) - 1);
        num /= 10;
    }
    
    return res;
}

int UCLN(int a, int b) {
    if (a == 0 || b == 0) return a+b;
    
    if (a < 0) a = abs(a);
    if (b < 0) b = abs(b);
    
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    
    return a;
}

bool is_Friendly(int num) {
    if (UCLN(num, DaoNguoc(num)) == 1) return true;
    
    return false;
}

int SoThanThien(int a, int b) {
    int cnt = 0;
    
    while (a <= b) {
        if (is_Friendly(a)) cnt++;
        a++;
    }
    
    return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
    
	cout << "Nhap a, b: ";
    
	while (T--) {
	    cin >> a >> b;
	    cout << "\n" << SoThanThien(a, b);
	}
	
	return 0;
}