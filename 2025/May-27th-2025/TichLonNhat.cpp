#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TICH LON NHAT"
#define DESCRIPTION "Tim cap gia tri sao cho tich giua chung la lon nhat"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

long long TichLonNhat(int a[], int n) {
    long long max = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (max < a[i] * a[j]) max = a[i] * a[j];
        }
    }
    
    return max;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], n;
	
	cout << "Nhap n: ";
    cin >> n;

    NhapMang(a, n);
	
	cout << "\n" << TichLonNhat(a, n) << "\n";
	
	return 0;
}