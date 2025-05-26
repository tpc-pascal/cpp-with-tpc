#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO THU N"
#define DESCRIPTION "Tim so thu n trong day quy nap: a_0 = 1, a_i = i * a_(i-1) neu i chan, a_i = i + a_(i-1) neu i le"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long SoThuN(int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return n * SoThuN(n-1);
    if (n % 2 == 1) return n + SoThuN(n-1);
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
		cout << "\n" << SoThuN(n) << "\n";
	}
	
	return 0;
}