#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "XOA SO"
#define DESCRIPTION "Tim so cuoi cung, cho n so nguyen, cu moi hai so x va y bi xoa thi thay bang x+y+10"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int XoaSo(int a, int b) {
    return a+b+10;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n, tmp, res = 0, i = 0;
	
	cout << "Nhap so luong: ";
	cin >> T;

	cout << "Nhap n: ";

	while (T--) {
		cin >> n;
		cout << "Nhap so nguyen: ";
		
		while (i < n) {
		    cin >> tmp;
		    
		    if (i == 0) res += tmp;
		    else res = XoaSo(res, tmp);
		    
		    i++;
		}
		
		cout << "\n" << res;
		
		i = 0;
	}
	
	return 0;
}