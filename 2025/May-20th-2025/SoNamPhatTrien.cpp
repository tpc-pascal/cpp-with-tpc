#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO NAM PHAT TRIEN"
#define DESCRIPTION "Tinh so nam toi thieu de cay A cao hon cay B"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int SoNamPhatTrien(int A, int B) {
    int cnt = 0;
    
    while (A <= B) {
        A *= 3;
        B *= 2;
        cnt++;
    }
    
    return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int hA, hB;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap hA, hB: ";
	
	while (T--) {
	    cin >> hA >> hB;
	    cout << "\n[" << hA << ", " << hB << "]: " << SoNamPhatTrien(hA, hB);
	}
	
	return 0;
}