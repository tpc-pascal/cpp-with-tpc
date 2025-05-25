#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DEM DIA"
#define DESCRIPTION "Dem so luong dia co nuoc khi rot n lit, biet rang dia 1 dung duoc a lit cac dia sau nhieu hon dia truoc b lit"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100
    
int SoDiaCoNuoc(int N, int a, int b) {
    int cnt = 0, coTheChua = a;
    
    while (N - coTheChua > 0) {
        N -= coTheChua;
        cnt++;
        coTheChua += b;
    }
    
    return cnt + 1;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int n, a, b;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap n, a, b: ";
	
	while (T--) {
		cin >> n >> a >> b;
		cout << "\nSo dia co nuoc: " << SoDiaCoNuoc(n, a, b);
	}
	
	return 0;
}