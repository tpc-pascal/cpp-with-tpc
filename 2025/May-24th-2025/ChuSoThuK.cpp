#include <iostream>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHU SO THU K"
#define DESCRIPTION "Khi viet cac so tu nhien tang dan thi duoc day so thap phan vo han, tim chu so thu K trong day do"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string SoThanhChuoi(int num) {
    string res = "";
    
    if (num < 10) res += num + '0';
    else {
        stack<char> st;
        
        while (num) {
            st.push(num%10 + '0');
            num /= 10;
        }
        
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
    }
    
    return res;
}

char CSTK(int K) {
    string daySo = "";
    
    for (int i = 1; daySo.length() < K; i++) {
        daySo += SoThanhChuoi(i);
    }
    
    return daySo[K-1];
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	long long K;
	
	cout << "Ctrl+Z then Enter" << "\n";
	
	while (cin >> K) {
		cout << "\n" << CSTK(K) << "\n";
	}
	
	return 0;
}