#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO DAC BIET"
#define DOCUMENT "drive.google.com/file/d/1QEyaZnnX4JCVvPSZ6-VPx9MSpu-xWzLH/view?usp=drive_link"
#define MAXSIZE 100

bool SoDacBiet(int n) {
	int cnt = 0;
	
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) cnt++;
	}
	
	return cnt == 3;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int a, b;
    cout << "Nhap [a, b]: ";
    cin >> a >> b;
    
    int cnt;
    while (a <= b) {
    	if (SoDacBiet(a)) cnt++;
    	a++;
	}
	
	cout << cnt;
    
    return 0;
}
