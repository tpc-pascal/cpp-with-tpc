#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO NGUYEN K TO"
#define DESCRIPTION "So nguyen K to la mot so co so luong uoc so nho hon K, dem so luong so nguyen K to trong day co N phan tu"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

bool SNKT(int num, int K) {
    int cnt = 0;
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) cnt++;
    }
    
    return cnt < K;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int N, K, tmp, cnt = 0, x = 1;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N, K: ";
	
	while (T--) {
		cin >> N >> K;
		cout << "Nhap so nguyen: ";
		
		while (N--) {
		    cin >> tmp;
		    
		    if (SNKT(tmp, K)) cnt++;
		}
		
		cout << "\nCase #" << x++ << ": " << cnt << "\n";
		
		cnt = 0;
	}
	
	return 0;
}