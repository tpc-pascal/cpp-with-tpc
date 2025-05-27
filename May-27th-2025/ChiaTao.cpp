#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHIA TAO"
#define DESCRIPTION "Kiem tra xem co the chia n qua tao thanh hai phan co cung trong luong, biet rang moi qua tao co trong luong la 100 hoac 200"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool ChiaTao(int n) {
	int tmp, one = 0, two = 0;
	
	while (n--) {
		cin >> tmp;
		
		if (tmp == 100) one++;
		else two++;
	}
	
	if (100*one == 200*two) return true;
	
	return false;
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
		
		if (ChiaTao(n)) cout << "\n[CHIATAO]\n";
		else cout << "\n[NOT CHIATAO]\n";
	}
	
	return 0;
}
