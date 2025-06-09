#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "KHONG LAM BAI TAP TET"
#define DESCRIPTION "Co mot so ban chua lam bai tap Tet nen co hinh phat: neu mot ban bat ky khong lam thi so diem cong cua cac ban khac se duoc cong 1 don vi, biet rang lop co N ban, trong do K ban khong lam bai va so thu tu cua cac ban khong lam do trong bang diem truoc Tet (1 <= K <= N <= 2 * 10^5, 1 <= student <= N)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void KhongLamBai(int a[], int n, int student) {
	for (int i = 0; i < n; i++) {
		if (i != student) a[i]++;
	}
}

void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE], N, K, student;
	
	cout << "Nhap N. K: ";
	cin >> N >> K;
	
	NhapMang(a, N);
	
	cout << "Nhap hoc sinh khong lam bai:\n";
	
	while (K--) {
		cin >> student;
		
		KhongLamBai(a, N, student-1);
	}
	
	XuatMang(a, N);
	
	return 0;
}
