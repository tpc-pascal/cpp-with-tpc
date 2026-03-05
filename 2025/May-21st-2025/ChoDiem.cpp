#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHO DIEM"
#define DESCRIPTION "Tinh diem biet rang moi lan sai se bi phat 1/10 so diem cua bai thi do"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int CD(int P[], int S[]) {
	int res = 0;
	
	for (int i = 0; i < 6; i++) {
		res += P[i] - (S[i] - 1) * (P[i] / 10);
	}
	
	return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int P[6], S[6];
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap P, S cua 6 bai thi: ";
	
	while (T--) {
	    for (int i = 0; i < 6; i++) {
    		cin >> P[i] >> S[i];
    	}
    	
    	cout << "\nDiem: " << CD(P, S) << "\n";
	}
	
	return 0;
}