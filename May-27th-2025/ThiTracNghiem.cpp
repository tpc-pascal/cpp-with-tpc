#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "THI TRAC NGHIEM"
#define DESCRIPTION "Tinh so cau dung, biet rang thi sinh da viet cau tra loi cua cau i+1 vao vi tri cua cau i va de trong cau N, nhung cau dung vi tri thi chac chan dung"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string NhapDapAn(string s, int N) {
	string res = "", tmp;
	
	while (N--) {
		cin >> tmp;
		
		res += tmp;
	}
	
	return res;
}

int SoCauDung(string dapAn) {
	int cnt = 0;
	
	for (int i = 0; i < dapAn.length(); i++) {
		if (dapAn[i] == dapAn[i+1]) cnt++;
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
	int N;
	string s;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap N: ";
	
	while (T--) {
		cin >> N;
		cout << "Nhap dap an: ";
		
		s = NhapDapAn(s, N);
		
		cout << "\n" << SoCauDung(s) << "\n";
	}
	
	return 0;
}
