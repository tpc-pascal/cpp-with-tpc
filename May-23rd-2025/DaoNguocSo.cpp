#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DAO NGUOC SO"
#define DESCRIPTION "Check the number is beautiful or not? (Absolute value of x - Reversed(x) is divisible by k)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long Reversed(long long x) {
    string tmp = "";
    long long res = 0;
    
    while (x) {
        tmp += x%10 + '0';
        x /= 10;
    }
    
    for (int i = 0; i < tmp.length(); i++) {
        res += (tmp[i] - '0') * pow(10, tmp.length() - i - 1);
    }
    
    return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long a, b, k;
	int cnt = 0;
	
	cout << "Nhap so luong: ";
	cin >> T;

	cout << "Nhap a, b, k: ";
	
	while (T--) {
	    cin >> a >> b >> k;
	    
	    while (a <= b) {
	        if (abs(a - Reversed(a)) % k == 0) cnt++;
	        a++;
	    }
	    
	    cout << "\nSo luong beautiful number: " << cnt;
	}
	
	return 0;
}