#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KY TU MOI"
#define DESCRIPTION "In ra ky tu thuong tuong ung"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

char KTM(char a) {
	return a + 32;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	char a;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap ky tu: ";
	
	while (T--) {
    	cin >> a;
    	cout << "\n" << a << ": " << KTM(a);
	}
	
	return 0;
}