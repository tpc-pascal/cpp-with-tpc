#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "QUA TANG TRUNG BINH CONG"
#define DESCRIPTION "Xac dinh mang con co phai la mang qua tang, biet rang mang so nguyen co N phan tu, mang qua tang thi co trung binh cong tat ca phan tu bang so thuc X"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

float TrungBinhMang(int a[], int n, int start, int end) {
    int sum = 0, cnt = 0;
    
    for (start; start <= end; start++) {
        sum += a[start];
        cnt++;
    }
    
    return (float)sum/cnt;
}

bool QTTBC(int a[], int n, int X) {
    for (int i = 0; i < n; i++) {
        if (a[i] == X) return true;
        
        for (int j = i+1; j < n; j++) {
            if (TrungBinhMang(a, n, i, j) == X) return true;
        }
    }
    
    return false;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int a[MAXSIZE], N, X;

	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		cout << "Nhap N, X: ";
		cin >> N >> X;
		cout << "Nhap phan tu: ";
		
		NhapMang(a, N);
		
		if (QTTBC(a, N, X)) cout << "\n[GIFT]\n";
		else cout << "\n[NOT GIFT]\n";
	}
	
	return 0;
}