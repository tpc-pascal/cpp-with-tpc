#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DI HOC NGHE PHU HO"
#define DESCRIPTION "Tinh so luong cua so hinh vuong KxK nhieu nhat co the lap vao buc tuong hinh vuong NxN"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

int SLCuaSo(int N, int K) {
    if (N < K) return 0;
    
    int cnt = 0; 
    long long S = N*N;
    
    while (S - K*K >= 0) {
        S -= K*K;
        cnt++;
    }
    
    return cnt;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int K, N;
	
	cout << "Nhap so luong: ";
	cin >> T;
    
	cout << "Nhap N, K: ";
    
	while (T--) {
		cin >> N >> K;
		cout << "\n" << SLCuaSo(N, K);
	}
	
	return 0;
}
