#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "LUOT CHOI DINH MENH"
#define DESCRIPTION "Hai nguoi choi A va B nghi ra mot day so co N phan tu cho rieng minh, co Q luot choi nen ho se random de quyet dinh ai se thuc hien luot do, neu la luot cua A thi se chon ra ba so x, y, k va thay the doan cua B tu vi tri y den y+k-1 bang doan cua A tu x den x+k-1, neu la luot cua B thu se chon 1 vi tri bat ky va tra loi gia tri cua so o do (1 <= index <= N)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void ThayTheDoan(int A[], int B[], int N, int x, int y, int k) {
	int dest_A = x+k-1, dest_B = y+k-1;
	
	while (x < dest_A && y < dest_B) {
		B[y] = A[x];
		x++;
		y++;
	}
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int A[MAXSIZE], B[MAXSIZE];
	int N, Q, luot, x, y, k;
	
	cout << "Nhap N, Q: ";
	cin >> N >> Q;
	
	NhapMang(A, N);
	NhapMang(B, N);
	
	cout << "Nhap luot: ";
	
	while (Q--) {
		cin >> luot;
		
		switch(luot) {
			case 1:
				cin >> x >> y >> k;
				
				ThayTheDoan(A, B, N, x, y, k);
				
				break;
			case 2:
				cin >> x;
				cout << "\n" << B[x-1] << "\n";
				
				break;
			default: break;
		}
	}
	
	return 0;
}
