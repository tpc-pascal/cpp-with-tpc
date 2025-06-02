#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "THONG DIEP VU TRU"
#define DESCRIPTION "Tim thong diep co thu tu tu dien nho nhat, biet rang chuoi cac chu cai in hoa lap lai vo han tuan hoan duoc danh so tu 0 va mot so nguyen duong M, thong diep gom cac chu cai o vi tri la so nguyen to dong thoi la uoc so cua M (2 <= M <= 10^12)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool is_Prime(int num) {
    if (num < 2) return false;
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    
    return true;
}

void HoanVi(char& a, char& b) {
    char tmp = a;
    a = b;
    b = tmp;
}

string ThuTuTuDien(string s) {
    for (int i = 0; i < s.length(); i++) {
        for (int j = i+1; j < s.length(); j++) {
            if (s[i] > s[j]) HoanVi(s[i], s[j]);
        }
    }
    
    return s;
}

string ThongDiepVuTru(int M) {
    string res = "";
    int i = 0;
    
    while (i <= M) {
        if (is_Prime(i) && M % i == 0) {
            res += 'A' + i%26;
        }
        
        i++;
    }
    
    return ThuTuTuDien(res);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long M;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap M: ";
	
	while (T--) {
	    cin >> M;
	    cout << "\n" << ThongDiepVuTru(M) << "\n";
	}
	
	return 0;
}