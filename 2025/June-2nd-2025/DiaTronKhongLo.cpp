#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DIA TRON KHONG LO"
#define DESCRIPTION "Thuc hien q truy van xac dinh vi tri cua tung con ech thu a sau su kien b, biet rang co n con ech ngoi tren dia tron khong lo, con ech i nam tai (x_i, y_i), xay ra m su kien: cw (ccw) la xoay 90 do theo (nguoc) chieu kim dong ho, xflip k (yflip k) la lay doi xung qua duong thang x = k (y = k) (1 <= a <= n, 1 <= b <= m)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapVTBD(int pos_X[][MAXSIZE], int pos_Y[][MAXSIZE], int n) {
    int i = 0;
    
    while (i < n) {
		cin >> pos_X[0][i] >> pos_Y[0][i];
		
		i++;
	}
}

bool SoSanhChuoi(string s1, string s2) {
	if (s1.length() != s2.length()) return false;
	
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) return false;
	}
	
	return true;
}

int NhanDangLenh(string dang) {
	if (SoSanhChuoi("cw", dang)) return 1;
	else if (SoSanhChuoi("ccw", dang)) return 2;
	else if (SoSanhChuoi("xflip", dang)) return 3;
	else if (SoSanhChuoi("yflip", dang)) return 4;
	else return 0;
}

void Clockwise(int pos_X[][MAXSIZE], int pos_Y[][MAXSIZE], int n, int event) {
	for (int i = 0; i < n; i++) {
		pos_X[event][i] = pos_Y[event-1][i];
		pos_Y[event][i] = -pos_X[event-1][i];
	}
}

void CounterClockwise(int pos_X[][MAXSIZE], int pos_Y[][MAXSIZE], int n, int event) {
	for (int i = 0; i < n; i++) {
		pos_X[event][i] = -pos_Y[event-1][i];
		pos_Y[event][i] = pos_X[event-1][i];
	}
}

void X_Flip(int pos_X[][MAXSIZE], int pos_Y[][MAXSIZE], int n, int k, int event) {
	int distance;
	
	for (int i = 0; i < n; i++) {
		distance = abs(k - pos_X[event-1][i]); 
		
		if (distance == 0) pos_X[event][i] = pos_X[event-1][i];
		if (k > pos_X[event-1][i]) pos_X[event][i] = k + distance;
		if (k < pos_X[event-1][i]) pos_X[event][i] = k - distance;
		
		pos_Y[event][i] = pos_Y[event-1][i];
	}
}

void Y_Flip(int pos_X[][MAXSIZE], int pos_Y[][MAXSIZE], int n, int k, int event) {
	int distance;
	
	for (int i = 0; i < n; i++) {
		distance = abs(k - pos_Y[event-1][i]); 
		
		if (distance == 0) pos_Y[event][i] = pos_Y[event-1][i];
		if (k > pos_Y[event-1][i]) pos_Y[event][i] = k + distance;
		if (k < pos_Y[event-1][i]) pos_Y[event][i] = k - distance;
		
		pos_X[event][i] = pos_X[event-1][i];
	}
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int pos_X[MAXSIZE][MAXSIZE], pos_Y[MAXSIZE][MAXSIZE];
	int n, m, q;
	int k, a, b;
	int event = 1;
	string dang;
	
	cout << "Nhap n, m, q: ";
	cin >> n >> m >> q;
	
	cout << "Nhap toa do:\n";
	
	NhapVTBD(pos_X, pos_Y, n);
	
	cout << "Nhap su kien:\n";
	
	while (m--) {
		cin >> dang;
		
		switch(NhanDangLenh(dang)) {
			case 1:
				Clockwise(pos_X, pos_Y, n, event);
				
				break;
			case 2:
				CounterClockwise(pos_X, pos_Y, n, event);
					
				break;
			case 3:
				cin >> k;
				
				X_Flip(pos_X, pos_Y, n, k, event);
				
				break;
			case 4:
				cin >> k;
				
				Y_Flip(pos_X, pos_Y, n, k, event);
				
				break;
			default: break;
		}
		
		event++;
	}
	
	cout << "Nhap truy van:\n";
	
	while (q--) {
		cin >> a >> b;
		cout << "Con ech thu " << a << " co vi tri (" << pos_X[b][a-1] << ", " << pos_Y[b][a-1] << ") o su kien thu " << b << "\n\n";
	}
	
	return 0;
}