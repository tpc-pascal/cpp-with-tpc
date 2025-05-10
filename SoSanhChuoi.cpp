#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "SO SANH CHUOI"
#define DESCRIPTION "Ghep M lan so nguyen N hay ghep N lan so nguyen M thi cai nao co thu tu tu dien nho hon?"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string SSC(int N, int M) {
    string res = "";
    
    while (N--) {
        res += M + '0';
    }
    
    return res;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int N, M;
	
	cout << "Nhap so luong: ";
	cin >> T;

	cout << "Nhap N, M: ";
	
	while (T--) {
	    cin >> N >> M;
	    cout << "\n" << N << ", " << M << ": ";
	    
	    if (N > M) cout << SSC(N, M);
	    else cout << SSC(M, N);
	}
	
	return 0;
}