#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO ARMSTRONG"
#define DOCUMENT "300 Exercises Code For Youth (Bai 33 / trang 11)"
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
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	cout << "So Armstrong co 3, 4 chu so:\n";
	AST(3); AST(4);
	
	return 0;
}