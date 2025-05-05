#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "THO HAIKU"
#define DESCRIPTION "Check 3 numbers are suitable for a Haiku poem or not?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool Haiku() {
    int five = 0, seven = 0, tmp;
	
	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		
		if (tmp == 5) five++;
		else seven++;
	}
	
    return five == 2 && seven == 1;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
	    if (Haiku()) cout << "\n[HAIKU]";
	    else cout << "\n[NOT HAIKU]";
	}
	
	return 0;
}