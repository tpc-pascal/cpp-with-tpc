#include <iostream>
#include <stack>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TRUY VAN VOI NGAN XEP"
#define DESCRIPTION "Cho 1 ngan xep rong, thuc hien cac truy van: 1 n (day so nguyen n vao), 2 (loai bo phan tu dau ngan xep), 3 (In phan tu o dinh ngan xep)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n, dang;
	stack<int> st;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		cout << "Nhap truy van: ";
		cin >> dang;
		
		switch(dang) {
	        case 1:
	            cin >> n;
	            
	            st.push(n);
	            break;
	        case 2:
	            if (!st.empty()) st.pop();
	            break;
	        case 3:
	            if (!st.empty()) cout << "\n" << st.top() << "\n";
	            else cout << "\nEmpty!";
	            break;
	        default: break;
	    }
	}
	
	return 0;
}