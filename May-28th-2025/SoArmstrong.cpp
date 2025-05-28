#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO ARMSTRONG"
#define DESCRIPTION "Liet ke cac so armstrong co n chu so"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool Armstrong(int num, int soLuong) {
    int res = 0, tmp = num;
    
    while (tmp) {
        res += pow(tmp%10, soLuong);
        tmp /= 10;
    }
    
    return res == num;
}

void AST(int soLuong) {
    for (int i = pow(10, soLuong-1); i < pow(10, soLuong); i++) {
        if (Armstrong(i, soLuong)) cout << i << " ";
    }
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
		AST(n);
	}
	return 0;
}
