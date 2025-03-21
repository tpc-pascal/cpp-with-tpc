#include <iostream>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "THAP PHAN SANG NHI PHAN"
#define DOCUMENT "luyencode.net/problem/dec2bin"
#define MAXSIZE 100

void NhiPhan(long long so) {
	stack<int> st;
	
	while (so) {
		st.push(so%2);
		so /= 2;
	}
	
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int T;
    cout << "Nhap so bo T: ";
    cin >> T;
    
    long long n;
    while (T) {
    	cin >> n;
    	cout << "\nNhi phan la "; NhiPhan(n); cout << "\n";
    	T--;
	}
   
    return 0;
}
