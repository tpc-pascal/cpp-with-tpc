#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "LOAI TAM GIAC"
#define DESCRIPTION "Cho 3 canh bat ky, xet xem 3 canh do co the tao thanh tam giac, neu co hay chi ra loai tam giac va dien tich"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_Triangle(float a, float b, float c) {
	if (a < 0 || b < 0 || c < 0) return false;
	
	return a + b > c && b + c > a && c + a > b;
}

double Heron(float a, float b, float c) {
	double p = (a+b+c) / 2;
	return sqrt(p * (p-a) * (p-b) * (p-c));
}

string loaiTamGiac(float a, float b, float c) {
	if (!is_Triangle(a, b, c)) return "Khong la tam giac";
	
	cout << "\nDien tich S = " << fixed << setprecision(4) << Heron(a, b, c) << "\n";
	
	if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) return "Tam giac vuong";
	else if (a == b || b == c || c == a) return "Tam giac can";
	else if (a == b == c) return "Tam giac deu";
	else return "Tam giac thuong";
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
    
    int T;
    float a, b, c;
    
    cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap a, b, c: ";
    
	while (T--) {
		cin >> a >> b >> c;
    	cout << loaiTamGiac(a, b, c);
	}
    
    return 0;
}
