#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHU ECH VA HON DA"
#define DESCRIPTION "Tinh chi phi toi thieu, biet con ech bat dau tu hon da (1) va lap lai hanh dong cho den khi den hon da (N), moi lan chi co the nhay xa toi da 2 vien da sao cho hieu 2 vi tri la toi thieu"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int CEVHD(int a[], int n) {
    int res = 0, i = 0, step_1, step_2;
    
    while (i < n-1) {
        step_1 = abs(a[i] - a[i+1]);
        step_2 = abs(a[i] - a[i+2]);
        
        if (step_1 >= step_2) {
            res += step_2;
            i += 2;
        }
        else {
            res += step_1;
            i++;
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

    cout << "\n" << CEVHD(H, N);
	
	return 0;
}