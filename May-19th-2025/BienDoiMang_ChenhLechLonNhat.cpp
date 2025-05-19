#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BIEN DOI MANG, CHENH LECH LON NHAT"
#define DESCRIPTION "Tang cac phan tu le bang do chenh lech 2 phan tu ke no, Tim chenh lech lon nhat giua 2 phan tu"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void BienDoiMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1) {
			if (i == n-1) a[i] += a[i-1];
			else a[i] += abs(a[i-1] - a[i+1]);
		}
	}
}

void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int Minimum(int a[], int n) {
    int minvt = a[0], minVal = a[0];
    
    for (int i = 0; i < n; i++) {
        if (a[i] < minVal) {
            minvt = i;
            minVal = a[i];
        }
    }
    
    return minvt;
}

int ChenhLechLonNhat(int a[], int n) {
	int max = a[0], min = Minimum(a, n);
	
	for (int i = 0; i < n; i++) {
	    if (abs(a[min] - a[i]) > max) max = abs(a[min] - a[i]);
	}
    
	return max;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
    int chon;
    int n, a[MAXSIZE];
    
    do {
    	cout << "[1. Bien Doi Mang, 2. Chenh Lech Lon Nhat]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
    cout << "Nhap n: ";
    cin >> n;
    
    NhapMang(a, n);
    
    switch(chon) {
    	case 1:
    		cout << "\n";
    		
    		BienDoiMang(a, n);
    		XuatMang(a, n);
    		break;
    	case 2:
    		cout << "\n" << ChenhLechLonNhat(a, n);
    		break;
    	default: break;
	}
    
    return 0;
}