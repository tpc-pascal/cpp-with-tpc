#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CONG CO NHO"
#define DESCRIPTION "Dem so lan nho cua tong 2 so nguyen duong rat lon (vuot khoi gioi han luu tru cua kieu so nguyen)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int CongCoNho(string a, string b) {
	string tmp;
	int digA, digB, sumDig, res = 0, carry = 0;
	
	while (tmp.length() < abs(a.length() - b.length())) tmp += ' ';
	if (a.length() > b.length()) {
		tmp += b;
		b = tmp;
	}
	if (a.length() < b.length()){
		tmp += a;
		a = tmp;
	}
	
	for (int i = a.length() - 1; i >= 0 ; i--) {
		digA = (a[i] != ' ') ? (int)a[i] - (int)'0' : 0;
		digB = (b[i] != ' ') ? (int)b[i] - (int)'0' : 0;
		
		sumDig = digA + digB + carry;
		carry = 0;
		
		if (sumDig >= 10) {
			sumDig /= 10;
			carry = sumDig%10;
			res++;
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
	
	int T;
	string a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap a, b: ";
	
	while (T--) {
    	cin >> a >> b;
    	cout << "\n" << a << " + " << b << ": " << CongCoNho(a, b);
	}
	
	return 0;
}
