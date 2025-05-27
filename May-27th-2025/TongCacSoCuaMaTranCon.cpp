#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG CAC SO CUA MA TRAN CON"
#define DESCRIPTION "Tinh tong cac phan tu thuoc hang x den u va cot y den v, biet rang o vi tri (1, 1) dien so 1, cac o con lai gap k lan o truoc (1 <= x <= u <= m, 1 <= y <= v <= n, 1 <= i <= m, 1 <= j <= n)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void KhoiTaoMatrix(long long a[][MAXSIZE], int m, int n, int k) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) a[i][j] = 1;
            else if (j == 0) a[i][j] = k * a[i-1][n-1];
            else a[i][j] = k * a[i][j-1];
        }
    }
}

long long TMTC(long long a[][MAXSIZE], int x, int y, int u, int v) {
    long long res = 0;
    
    for (int i = x; i <= u; i++) {
        for (int j = y; j <= v; j++) {
            res += a[i][j];
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
	
	long long a[MAXSIZE][MAXSIZE], m, n;
	int k, x, y, u, v;
	
	cout << "Nhap m, n, k: ";
	cin >> m >> n >> k;
	
	KhoiTaoMatrix(a, m, n, k);
	
	cout << "Nhap x, y, u, v: ";
	cin >> x >> y >> u >> v;
	
	cout << "\n" << TMTC(a, x-1, y-1, u-1, v-1);
	
	return 0;
}