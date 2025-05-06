#include <iostream>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO PALINDROME, DOI XUNG HOAN HAO"
#define DESCRIPTION "Check the number is palindrome or not? Lap lai k lan va kiem tra tinh doi xung"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int SLCS(int num) {
	int cnt = 0;
	
	while (num) {
		cnt++;
		num /= 10;
	}
	
	return cnt;
}

bool Pali1(int num) {
	int soLuong = SLCS(num);
	
	if (soLuong == 1) return true;
	
	else {
		stack<int> st;
		
		for (int i = 1; i <= soLuong/2; i++) {
			st.push(num%10);
			num /= 10;
		}
		
		if (soLuong % 2 == 1) num /= 10;
		
		while (num && !st.empty()) {
			if (num%10 != st.top()) return false;
			num /= 10;
			st.pop();
		}
		
		return true;
	}
}

bool Pali2(string str) {
    for (int i = 0; i <= str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1]) return false;
    }
    
    return true;
}

bool Repalind(string str, int soLan) {
    string tmp = str;
    soLan--;
    
    while (soLan) {
        str += tmp;
        soLan--;
    }
    
    return Pali2(str);
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T, chon;
	int n;
	long long k;
	string s;
	
	do {
    	cout << "[1. So Palindrome, 2. Doi Xung Hoan Hao]: ";
    	cin >> chon;
    	
    	if (chon < 1 || chon > 2) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 2);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	switch(chon) {
    	case 1:
    	    cout << "Nhap n: ";
    	    
    	    while (T--) {
        	    cin >> n;
        	    cout << "\n" << n << ": ";
        	    
        	    if (Pali1(n)) cout << "[PALINDROME]";
        	    else cout << "[NOT PALINDROME]";
    	    }
			break;
    	case 2:
    	    cout << "Nhap k, s: ";
    	    
    	    while (T--) {
        	    cin >> k >> s;
        	    cout << "\n" << s << ": ";
        	    
        	    if (Repalind(s, k)) cout << "[REPALIND]";
        	    else cout << "[NOT REPALIND]";
    	    }
    		break;
    	default: break;
	}
	
	return 0;
}