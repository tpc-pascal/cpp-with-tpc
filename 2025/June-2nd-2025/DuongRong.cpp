#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "DUONG RONG"
#define DESCRIPTION "Tim vi tri cua con tro may tinh sau K buoc trong D_N, biet rang ban dau may tinh o vi tri (0,0) va huong nhin ve phia (0, 1), viet lai chuoi co quy tac: D_0 = \"Fa\", D_N thi lay D_(N-1) de thay \"a\" thanh \"aRbFR\" va \"b\" thanh \"LFaLb\", lay chuoi do thanh chi dan cua chuong trinh may tinh: \"F\" la di ve phia truoc mot don vi, \"L\" la nhin sang trai 90 do, \"R\" la nhin sang phai 90 do (khong tinh vao so luong buoc), \"a\" va \"b\" khong co gia tri nen bi bo qua"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

string ThayTheChuoi(string s) {
	string res = "";
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') res += "aRbFR";
		else if (s[i] == 'b') res += "LFaLb";
		else res += s[i];
	}
	
	return res;
}

string DuongRong(int N) {
	string s = "Fa";
	
	for (int i = 1; i <= N; i++) {
		s = ThayTheChuoi(s);
	}
	
	return s;	
}

void ReHuong(char& direction, char guide) {
	switch(guide) {
		case 'L':
			if (direction == 'L') direction = 'D';
			else if (direction == 'R') direction = 'U';
			else if (direction == 'U') direction = 'L';
			else if (direction == 'D') direction = 'R';
			else return;
			
			break;
		case 'R':
			if (direction == 'L') direction = 'U';
			else if (direction == 'R') direction = 'D';
			else if (direction == 'U') direction = 'R';
			else if (direction == 'D') direction = 'L';
			else return;
			
			break;
		default: break;
	}	
}

void DiChuyen(int& x_Cursor, int& y_Cursor, char direction) {
	switch(direction) {
		case 'L':
			x_Cursor--;
			break;
		case 'R':
			x_Cursor++;
			break;
		case 'U':
			y_Cursor++;
			break;
		case 'D':
			y_Cursor--;
			break;
		default: break;
	}
}

void ChiDanDoHoa(int N, long long K) {
	string commands = DuongRong(N);
	int x_Cursor = 0, y_Cursor = 0;
	long long step = 0;
	char direction = 'U';
	
	for (int i = 0; step < K; i++) {
		if (commands[i] == 'a' || commands[i] == 'b') continue;
		
		if (commands[i] == 'L' || commands[i] == 'R') ReHuong(direction, commands[i]);
		
		if (commands[i] == 'F') {
			DiChuyen(x_Cursor, y_Cursor, direction);
			
			step++;
		}
	}
	
	cout << x_Cursor << " " << y_Cursor << "\n";
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int T;
	int N;
	long long K;
	
	cout << "Nhap so luong: ";
	cin >> T;
	
	cout << "Nhap K, N: ";
	
	while (T--) {
		cin >> K >> N;	
		
		ChiDanDoHoa(N, K);
	}
	
	return 0;
}
