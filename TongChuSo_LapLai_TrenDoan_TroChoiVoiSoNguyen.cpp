#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG CHU SO, LAP LAI, TREN DOAN, TRO CHOI VOI SO NGUYEN"
#define DESCRIPTION "Find sum of all digits, Lap lai den khi con 1 chu so"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int TCS(long long num) {
    int res = 0;
    
    while (num) {
        res += num%10;
        num /= 10;
    }
    
    return res;
}

int TCSLL(long long num) {
	while (num != TCS(num)) num = TCS(num);
	
	return num;
}

void TCSTD(long long A, long long B, int S) {
	int cnt = 0, smallest = 0;
	
	for (int i = A; i <= B; i++) {
		if (TCS(i) == S) {
			cnt++;
			if (smallest == 0) {
				smallest = i;
			}
		}
	}
	
	cout << "So luong: " << cnt << ", So nho nhat: " << smallest;
}

long long TCVSN(string s) {
	long long num = 0;
	
	for (int i = 0; i < s.length(); i++) {
		num += s[i] - '0';
	}
	
	return TCSLL(num);
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
    int T, chon;
    int S;
    long long A, B;
    string str;
    
    do {
    	cout << "[1. Tong Chu So, 2. Lap Lai, 3. Tren Doan, 4. Tro Choi Voi So Nguyen]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 4) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 4);
    
    cout << "Nhap so luong: ";
	cin >> T;
	
	switch(chon) {
		case 1:
			cout << "Nhap so nguyen: ";
			
			while (T--) {
				cin >> A;
				cout << "\n" << A << ": " << TCS(A);
			}
			break;
		case 2:
			cout << "Nhap so nguyen: ";
			
			while (T--) {
				cin >> A;
				cout << "\n" << A << ": " << TCSLL(A);
			}
			break;
		case 3:
			cout << "Nhap A, B, S: ";
			
			while (T--) {
				cin >> A >> B >> S;
				cout << "\n[" << A << ", " << B << ", " << S << "]: ";
				TCSTD(A, B, S);
			}
			break;
        case 4:
			cout << "Nhap chuoi: ";
			
			while (T--) {
				cin >> str;
				cout << "\n" << str << ": " << TCVSN(str);
			}
			break;
		default: break;			
	}
    
    return 0;
}