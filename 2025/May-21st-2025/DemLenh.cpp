#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM LENH"
#define DESCRIPTION "Dem so lenh co so toi thieu cua mot day lenh (X, O, OX, XO)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_Valid_Command(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'O' && s[i] != 'X') return false;
    }
    
    return true;
}

int DemLenh(string str) {
	int cnt = 0;
	
	for (int i = 0; i < str.length(); i++) {
		if (i+1 < str.length() && str[i] != str[i+1]) {
			i++;
		}
		
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
	int N;
	string str;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N, str: ";
	
	while (T--) {
    	do {
    	    cin >> N >> str;
    	    
    	    if (str.length() != N) cout << "Do dai lenh khong phu hop!\n";
    	} while (str.length() != N);
	
    	cout << "\n\""<< str << "\", " << N << ": ";
    	if (is_Valid_Command(str)) cout << DemLenh(str);
    	else cout << "[INVALID]";
	}
	
	return 0;
}