#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "THOI GIAN NGAN NHAT"
#define DESCRIPTION "Thoi gian ngan nhat de tinh tong ca mang so nguyen duong, biet rang thoi gian de tinh tong 2 so nguyen duong x va y la (x+y)^2"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int ThoiGianNganNhat(int a[], int N) {
    int res = 0, tmp;
    
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            tmp = a[i] + a[i+1];
            i++;
        }
        else tmp += a[i];
        
        res += tmp * tmp;
    }
    
    return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], N;
	
	cout << "Nhap N: ";
	cin >> N;
	
	NhapMang(a, N);
	
	cout << "\n" << ThoiGianNganNhat(a, N) << "\n";
	
	return 0;
}