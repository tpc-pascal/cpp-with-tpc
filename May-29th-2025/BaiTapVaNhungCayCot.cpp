#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BAI TAP VA NHUNG CAY COT"
#define DESCRIPTION "Tinh so buoc nhay cho den khi khong the tiep tuc, biet rang cac cot duoc danh so tu 1 den N, chieu cao moi cot h_i, thuc hien T lan tap tu vi tri x_i bat ky chi co the nhay sang cay ben phai gan nhat ma cao hon cay dang dung"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int CotTiepTheo(int h[], int N, int x) {
    int res = -1;
    
    for (int i = N-1; i > x; i--) {
        if (h[i] > h[x]) res = i;
    }
    
    return res;
}

int BTVC(int h[], int N, int x) {
    int cnt = 0;
    
    while (x < N && CotTiepTheo(h, N, x) != -1) {
        cnt++;
        x = CotTiepTheo(h, N, x);
    }
    
    return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int h[MAXSIZE], N, x;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N: ";
	cin >> N;
	
	NhapMang(h, N);
	
	cout << "Nhap x: ";
	
	while (T--) {
		cin >> x;
		cout << "\n" << BTVC(h, N, x-1);
	}
	
	return 0;
}