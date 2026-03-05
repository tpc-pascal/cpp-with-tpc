#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG KHONG CHIA HET CHO K"
#define DESCRIPTION "Cho day so nguyen A co N phan tu va so nguyen K, tinh kich thuoc lon nhat cua tap con S sao cho tong hai so bat ky khong chia het cho K"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

bool is_Present(string s, char c) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) return true;
    }
    
    return false;
}

int TongKhongChiaHet(int A[], int N, int K) {
    string res = "";
    
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if ((A[i] + A[j]) % K != 0) {
                if (!is_Present(res, A[i] + '0')) res += A[i] + '0';
                if (!is_Present(res, A[j] + '0')) res += A[j] + '0';
            }
        }
    }
    
    return res.length();
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int A[MAXSIZE], N, K;
	
	cout << "Nhap N, K: ";
	cin >> N >> K;
	
	NhapMang(A, N);
	
	cout << "\n" << TongKhongChiaHet(A, N, K);
	
	return 0;
}