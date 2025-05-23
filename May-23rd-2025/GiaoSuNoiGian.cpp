#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "GIAO SU NOI GIAN"
#define DESCRIPTION "Lop hoc se bi huy neu co it hon k hoc sinh"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n, k, tmp, cnt = 0;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	while (T--) {
		cout << "Nhap n, k: ";
		cin >> n >> k;
		
		cout << "Nhap thoi gian vao lop: ";
		
		while (n--) {
			cin >> tmp;
			
			if (tmp <= 0) cnt++;
		}
		
		cout << "\nBuoi hoc ";
		
		if (cnt < k) cout << "bi huy!\n";
		else cout << "bat dau!\n";
	}
	
	return 0;
}
