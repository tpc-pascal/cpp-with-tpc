#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CAP SO NGUYEN GAN NHAT, LAM TRON SO"
#define DOCUMENT "luyencode.net/problem/ptit028, luyencode.net/problem/dk04"
#define MAXSIZE 100

int LamTronSo(float a) {
	if (a >= 0) {
		if (a - (int)a >= 0.5) return (int)a + 1;
		else return (int)a;
	}
	else {
		if (a + (int)a >= 0.5) return (int)a - 1;
		else return (int)a;
	}
}

void CapSoNguyenGanNhat(float a) {
	if (a >= 0) cout << (int)a << " " << (int)a + 1;
	else cout << (int)a - 1 << " " << (int)a;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    float a;
    cout << "Nhap so can lam tron: ";
    cin >> a;
    
    cout << "\nDK04: So da lam tron la " << LamTronSo(a);
    cout << "\nPTIT028: Cap so nguyen gan no nhat la "; CapSoNguyenGanNhat(a);
    
    return 0;
}
