#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DO CHU"
#define DESCRIPTION "Thay the dau * vao nhung chu cai co chi so la prime"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_Prime(int num) {
    if (num < 2) return false;
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    
    return true;
}

string DoChu(string s) {
    string res = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (is_Prime(i)) res += '*';
        else res += s[i];
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
	string s;
	
	cout << "Nhap so luong: ";
	cin >> T;
    
	cout << "Nhap s: ";
    
	while (T--) {
		cin >> s;
		cout << "\n" << DoChu(s) << "\n";
	}
	
	return 0;
}