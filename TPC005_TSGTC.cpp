#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG SO GHI TRONG CHUOI"
#define DOCUMENT "drive.google.com/file/d/1MbIsryecESrH3TL3TYEf2bXYuidVfCzd/view?usp=drive_link"
#define MAXSIZE 100

int TongSoTrongChuoi(string str) {
    int res = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if ((int)str[i] >= (int)'0' && (int)str[i] <= (int)'9') {
            if (str[i-1] == '-') res -= (int)str[i] - (int)'0';
            else res += (int)str[i] - (int)'0';
        }
    }
    
    return res;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    string chuoi;
    int T;
    cout << "Nhap so bo T can tim: ";
    cin >> T;
    
    while (T) {
        cout << "Nhap chuoi: ";
        cin >> chuoi;
        cout << "Tong so trong chuoi la " << TongSoTrongChuoi(chuoi) << "\n";
        T--;
    }
    
    return 0;
}
