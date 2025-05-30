#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DAN SO THE GIOI"
#define DESCRIPTION "Tinh dan so the gioi sau n nam biet dan so ban dau la K nguoi, voi muc tang truong khong doi a (%) moi nam"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long DSTG(int n, long long K, float a) {	
	if (n == 0) return K;
	
	K += K * a / 100;
	K = (long long)ceil(K);
	
	return DSTG(n-1, K, a);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long K;
	int n;
	float a;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n, K, a: ";
	
	while (T--) {
		cin >> n >> K >> a;
		cout << "\n" << DSTG(n, K, a) << "\n";
	}
	
	return 0;
}
