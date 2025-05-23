#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO DAC BIET"
#define DESCRIPTION "So chia het cho tong chu so cua chinh no"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool SoDacBiet(int n) {
    int sum = 0, tmp = n;
    
    while (tmp) {
    	sum += tmp%10;
    	tmp /= 10;
    }
    
    return n % sum == 0;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n;
	
	cout << "Nhap so luong: ";
	cin >> T;

	cout << "Nhap n: ";
	
	while (T--) {
	    cin >> n;
	    cout << "\n" << n << ": ";
	    
		if (SoDacBiet(n)) cout << "[SPECIAL]";
	    else cout << "[NOT SPECIAL]";
	}
	
	return 0;
}
