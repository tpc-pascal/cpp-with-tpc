#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "LA TAM GIAC"
#define DOCUMENT "300 Exercises Code For Youth (Bai 4 / trang 3)"
#define MAXSIZE 100

double dienTich(float a, float b, float c) {
	float p = (a+b+c) / 2;
	return sqrt(p * (p-a) * (p-b) * (p-c));
}

void loaiTamGiac(float a, float b, float c) {
	if ((a+b) > c && (b+c) > a && (a+c) > a) {
		if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) cout << "Tam giac vuong\n";
		else if (a == b || b == c || c == a) cout << "Tam giac can\n";
		else cout << "Tam giac deu\n";
		
		cout << "Dien tich S = " << dienTich(a, b, c);
	}
	else cout << "Khong la tam giac";
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    float a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    
    loaiTamGiac(a, b, c);
    
    return 0;
}