#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM TU"
#define DOCUMENT "luyencode.net/problem/detu"
#define MAXSIZE 100

int DemTu(string str) {
    int cnt = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            if (str[i-1] != '.') cnt++;
            if (str[str.length() - 1] != '.') cnt++;
        }
    }
    
    return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Nguon: " << DOCUMENT << "\n";
	cout << "\n===============\n";
	
	string str;
	cout << "Nhap chuoi: ";
	cin >> str;
	
	cout << DemTu(str);
	
	return 0;
}