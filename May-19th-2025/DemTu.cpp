#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM TU"
#define DESCRIPTION "Dem cac tu trong chuoi (ngan cach boi 1 delim)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int DemTu(string str, char delim) {
    int cnt = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == delim && str[i-1] != delim) cnt++;
        if (i == str.length() - 1 && str[i] != delim) cnt++;
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
	string str;
	char delim;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap str, delim: ";
	
	while (T--) {
		cin >> str >> delim;
		cout << "\n" << str << ", \'" << delim << "\': " << DemTu(str, delim);
	}
	
	return 0;
}
