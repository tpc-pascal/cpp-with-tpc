#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO DEP N"
#define DESCRIPTION "Check the number that sum of all digits ends with 9?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
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
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int N;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N: ";
	
	while (T--) {
    	cin >> N;
    	cout << "\n" << N << ": ";
    	
    	if (SoDepN(N)) cout << "[SODEPN]";
    	else cout << "[NOT SODEPN]";
	}
	
	return 0;
}