#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO DEP N"
#define DOCUMENT "luyencode.net/problem/sodepn"
#define MAXSIZE 100

int TongChuSo(int num) {
    int sum = 0;
    
    while (num) {
        sum += num%10;
        num /= 10;
    }
    
    return sum;
}

bool SoDepN(int num) {
    if (TongChuSo(num) % 10 == 9) return true;
    return false;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	int N;
	cout << "Nhap N: ";
	cin >> N;
	
	if (SoDepN(N)) cout << "YES";
	else cout << "NO";
	
	return 0;
}