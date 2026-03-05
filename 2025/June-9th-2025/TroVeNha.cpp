#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TRO VE NHA"
#define DESCRIPTION "Tinh so lan thuc hien va khoang cach phai di de den duoc can nha co so nha Y, biet rang cac nha duoc danh so lan luot bang cac so tu nhien lien tiep, ban dau luon xuat phat o nha co so X (X luon khong doi), o lan tim thu i thi den can nha co so nha X + (-1)^i * 2^(i-1) (0 <= |X|, |Y| <= 10^10)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void TroVeNha(long long X, long long Y) {
	int soLan = 1;
	long long distance = 0, before = X, after;
	
	while (before < Y) {
		after = X + pow(-1, soLan) * pow(2, soLan-1);
		
		if (after > Y) distance += abs(before - Y);
		else {
			distance += abs(before - after);
			soLan++;
		}
		
		before = after;
	}
	
	cout << "\n" << soLan << " " << distance << "\n";
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long X, Y;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap X, Y: ";
	
	while (T--) {
		cin >> X >> Y;
		
		TroVeNha(X, Y);
	}
	
	return 0;
}
