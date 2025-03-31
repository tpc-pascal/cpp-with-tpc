#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHUOI CHIA HET CHO 3"
#define DOCUMENT "drive.google.com/file/d/1OTReJkYo_Rz2aFp84cVfzZbeAg8_FLFi/view?usp=drive_link"
#define MAXSIZE 100

bool ChiaHetChoBa(string so) {
    int res = 0;
    
    for (int i = 0; i < so.length(); i++) {
        res += (int)so[i] - (int)'0';
    }
    
    return res % 3 == 0;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    string s;
    cout << "Nhap so: ";
    cin >> s;
    
    if (ChiaHetChoBa(s)) cout << "Chia het cho 3";
	else cout << "Khong chia het cho 3";
    
    return 0;
}
