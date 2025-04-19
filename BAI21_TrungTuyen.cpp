#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TRUNG TUYEN"
#define DOCUMENT "300 Exercises Code For Youth (Bai 21 / trang 8)"
#define MAXSIZE 100

float tinhDiemUT(char khuVuc, int doiTuong) {
	float res = 0.0;
	
	switch(khuVuc) {
		case 'A': res += 2; break;
		case 'B': res += 1; break;
		case 'C': res += 0.5; break;
		default: break;
	}
	
	switch(doiTuong) {
		case 1: res += 2.5; break;
		case 2: res += 1.5; break;
		case 3: res += 1; break;
		default: break;
	}
	
	return res;
}

bool TrungTuyen(float diemChuan, float diem1, float diem2, float diem3, char khuVuc, int doiTuong) {
	float diemUuTien = tinhDiemUT(khuVuc, doiTuong);
	
	return (diem1 + diem2 + diem3) + diemUuTien >= diemChuan && (diem1 * diem2 * diem3) != 0.0;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";

	float diemChuan, diem1, diem2, diem3;
	char khuVuc;
	int doiTuong;
	
	cout << "Nhap diem chuan: ";
	cin >> diemChuan;
	cout << "Nhap diem 3 mon thi: ";
	cin >> diem1 >> diem2 >> diem3;
	cout << "Nhap khu vuc (A, B, C, X): ";
	cin >> khuVuc;
	cout << "Nhap doi tuong (1, 2, 3, 0): ";
	cin >> doiTuong;
    
    if (TrungTuyen(diemChuan, diem1, diem2, diem3, khuVuc, doiTuong)) cout << "Dau [";
	else cout << "Rot [";
	cout << diem1+diem2+diem3+tinhDiemUT(khuVuc, doiTuong) << "]";
    
    return 0;
}