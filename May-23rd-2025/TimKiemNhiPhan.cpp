#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TIM KIEM NHI PHAN"
#define DESCRIPTION "Xac dinh su xuat hien, chi so nho nhat cua 1 gia tri trong mang (cac phan tu duoc danh so tu 1 den n)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void HoanVi(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j >= i; j--) {
            if (a[j] < a[j-1]) HoanVi(a[j], a[j-1]);
        }
    }
}

int BinarySearch(int a[], int n, int giaTri) {
    int l = 0, r = n-1, m;
    
    while (l <= r) {
        m = (l+r)/2;
        
        if (a[m] > giaTri) r = m-1;
        else l = m+1;
    }
    
    return a[m] == giaTri ? m : -1;
}

int ChiSoNhoNhat(int a[], int n, int giaTri) {
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == giaTri) return i;
    }
    
    return 0;
}

string TKNP1(int a[], int n, int b[], int m) {
    string res = "";
    
    for (int i = 0; i < m; i++) {
        if (BinarySearch(a, n, b[i]) != -1) res += '1';
        else res += '0';
    }
    
    return res;
}

void TKNP2(int a[], int n, int b[], int m) {
    for (int i = 0; i < m; i++) {
        if (BinarySearch(a, n, b[i]) != -1) {
            cout << ChiSoNhoNhat(a, n, b[i]) + 1;
        }
        else cout << 0;
        
        cout << " ";
    }
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int chon;
	int a[MAXSIZE], b[MAXSIZE];
	int n, m;
	
	do {
    	cout << "[1. Kiem tra su hien dien, 2. Chi so nho nhat cua gia tri]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap n, m: ";
	cin >> n >> m;
	
	NhapMang(a, n);
	NhapMang(b, m);
	
	BubbleSort(a, n);
	
	switch(chon) {
	    case 1:
	        cout << "\nSu xuat hien: " << TKNP1(a, n, b, m);
	        break;
	    case 2:
	        cout << "\nChi so nho nhat: ";
	        
	        TKNP2(a, n, b, m);
	        break;
	    default: break;
	}
	
	return 0;
}