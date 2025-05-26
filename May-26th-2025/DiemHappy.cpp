#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DIEM HAPPY"
#define DESCRIPTION "Tinh tong do vui ve sau khi tat ca moi nguoi bat tay voi nhau"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

long long DiemHappy(int a[], int n) {
    long long res = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            res += a[i] * a[j];
        }
    }
    
    return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int H[MAXSIZE], N;
	
	cout << "Nhap N: ";
    cin >> N;
    
    NhapMang(H, N);
    
    cout << "\nTong do vui ve: " << DiemHappy(H, N);
    
	return 0;
}