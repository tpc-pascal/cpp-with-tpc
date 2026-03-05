#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM CHU SO"
#define DESCRIPTION "Sau khi danh so cho quyen sach N trang, co bao nhieu chu so duoc su dung va so luong cua no"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void DemChuSo(int N) {
	int digit[10], tmp;
	
	for (int i = 0; i < 10; i++) digit[i] = 0;
	
	for (int i = 1; i <= N; i++) {
		tmp = i;
		
		while (tmp != 0) {
			digit[tmp%10]++;
			tmp /= 10;
		}
	}
	
	XuatMang(digit, 10);
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
		cout << "\n";
		DemChuSo(N);
		cout << "\n";
	}
	
	return 0;
}
