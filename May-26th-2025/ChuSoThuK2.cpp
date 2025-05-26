#include <iostream>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "CHU SO THU K 2"
#define DESCRIPTION "Xac dinh chu so thu K trong day o tung truy van Q, biet rang day duoc tao bang cach viet lien tiep cac so tu nhien tu A va co cung tinh chan le"
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

char CSTK2(int A, int K) {
    string daySo = "";
    
    for (int i = A; daySo.length() < K; i += 2) {
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
	
	int T;
	int A, Q, K;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		cout << "Nhap A, Q: ";
	    cin >> A >> Q;
	    
	    cout << "Nhap K: ";
	    
		while (Q--) {
		    cin >> K;
		    cout << "\n" << CSTK2(A, K) << "\n";
		}
	}
	
	return 0;
}
