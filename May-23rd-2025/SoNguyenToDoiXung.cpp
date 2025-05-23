#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO NGUYEN TO DOI XUNG"
#define DESCRIPTION "Tim cac so nguyen to doi xung trong khoang tu m den n"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int SLCS(long long num) {
	int cnt = 0;
	
	while (num) {
		num /= 10;
		cnt++;
	}
	
	return cnt;
}

bool is_Prime(long long num) {
	if (num < 2) return false;
	
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	
	return true;
}

bool is_Palindrome(long long num) {
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

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	long long m, n;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap m, n: ";
	
	while (T--) {
	    cin >> m >> n;
	    
	    while (m <= n) {
	    	if (is_Prime(m) && is_Palindrome(m)) cout << m << "\n";
	    	
	    	m++;
		}
	}
	
	return 0;
}
