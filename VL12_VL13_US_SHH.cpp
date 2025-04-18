#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "UOC SO, SO HOAN HAO"
#define DOCUMENT "luyencode.net/problem/vl12, luyencode.net/problem/vl13"
#define MAXSIZE 100

void UocSo(int a) {
	if (a == 0) cout << "Co vo so uoc so!";
	
	for (int i = a; i >= 1; i--) {
		if (a % i == 0) cout << i << " ";
	}
}

bool SoHoanHao(long a) {
	if (a <= 0) return false;
	
	int sum = 0;
	for(int i = 1; i < a; i++) {
		if (a % i == 0) sum += i;
	}
	
	return sum == a;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
	
	long n;
	cout << "Nhap so can kiem tra: ";
	cin >> n;
	
	cout << "\nVL12: ";
	if (SoHoanHao(n)) cout << "La so hoan hao!";
	else cout << "Khong la so hoan hao!";
	cout << "\nVL13: Uoc so la "; UocSo(n);
	
    return 0;
}
