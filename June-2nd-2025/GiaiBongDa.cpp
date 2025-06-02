#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "GIAI BONG DA"
#define DESCRIPTION "Trong tran chung ket, 2 doi A va B se dau 2 luot, dau tien la o san nha cua A, sau do thi qua san nha cua B, biet rang doi chien thang se la doi co nhieu ban thang hon, trong truong hop bang nhau thi chon doi co nhieu ban thang tren san khach hon, con van chua chon duoc thi phai tien hanh hiep phu"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string GiaiBongDa(int A_1, int B_1, int B_2, int A_2) {
	if (A_1 + A_2 > B_1 + B_2) return "A wins";
	else if (A_1 + A_2 < B_1 + B_2) return "B wins";
	else {
		if (A_2 > B_1) return "A wins";
		else if (A_2 < B_1) return "B wins";
		else return "Extra time";
	}
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int A_1, B_1, A_2, B_2;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap so ban thang doi nha va doi khach: ";
	
	while (T--) {
		cin >> A_1 >> B_1;
		cin >> B_2 >> A_2;
		
		cout << "\n" << GiaiBongDa(A_1, B_1, B_2, A_2) << "\n";
	}
	
	return 0;
}
