#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "THAP BANG KHOI HOP"
#define DESCRIPTION "Co Q nhiem vu: xep N_i khoi hop thanh thap, biet rang mot thap hoan chinh thi hang thu i se duoc tao thanh boi i khoi hop va tong so hop su dung phai dung bang N (1 <= N <= 10^18)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool ThapBangKhoiHop(long long N) {
    long long sum = 0, i = 0;
    
    while (sum < N) {
        sum += i;
        i++;
    }
    
    return sum == N;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int Q;
	long long N;
	
	cout << "Nhap Q: ";
	cin >> Q;
	
	cout << "Nhap N: ";
	
	while (Q--) {
	    cin >> N;
	    
	    if (ThapBangKhoiHop(N)) cout << "\n[TOWER]\n";
	    else cout << "\n[NOT TOWER]\n";
	}
	
	return 0;
}