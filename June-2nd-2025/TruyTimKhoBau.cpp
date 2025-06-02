#include <iostream>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TRUY TIM KHO BAU"
#define DESCRIPTION "Tinh so ngay toi thieu, biet rang truyen thuyet cho rang sau K lan chuyen huong thi kho bau se xuat hien, di trong sa mac rong NxN, tu goc tren ben trai va huong sang phai vao thu hai, co M phu thuy va lich trinh duoi dang chuoi s: 7 ky tu tuong ung voi ngay trong tuan (L la trai, R la phai, S la phu thuy ngu), neu gap phu thuy khong ngu thi phai xoay 90 do theo huong ma phu thuy chi dan tuong ung cua ngay gap no, neu di thang ma roi khoi sa mac thi se xoay 180 do, thoi gian de di sang 1 o la 1 ngay (2 <= N <= 100, 1 <= R, C <= N)"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

void KhoiTaoDiaHinh(int a[][MAXSIZE], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = -1;
		}
	}
}

void NhapPhuThuy(int a[][MAXSIZE], string schedule[], int M) {
	int x_Wizard, y_Wizard;
	
	cout << "Nhap toa do va lich trinh phu thuy:\n";
	
	for (int i = 0; i < M; i++) {
		cin >> x_Wizard >> y_Wizard >> schedule[i];
		
		a[x_Wizard - 1][y_Wizard - 1] = i;
	}
}

void ReHuong(char& direction, char guide, int soLan) {
	for (int i = 0; i < soLan; i++) {
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
			case 'S':
				return;
			default: break;
		}
	}	
}

void DiChuyen(int& x_Warrior, int& y_Warrior, int N, char& direction) {
	switch(direction) {
		case 'L':
			if (y_Warrior == 0) {
				ReHuong(direction, 'L', 2);
				
				y_Warrior++;
			}
			else y_Warrior--;
			
			break;
		case 'R':
			if (y_Warrior == N-1) {
				ReHuong(direction, 'L', 2);
				
				y_Warrior--;
			}
			else y_Warrior++;
			
			break;
		case 'U':
			if (x_Warrior == 0) {
				ReHuong(direction, 'L', 2);
				
				x_Warrior++;
			}
			else x_Warrior--;
			
			break;
		case 'D':
			if (x_Warrior == N-1) {
				ReHuong(direction, 'L', 2);
				
				x_Warrior--;
			}
			else x_Warrior++;
			
			break;
		default: break;
	}
}

int TruyTimKhoBau(int a[][MAXSIZE], int N, long long K, int M) {
	int x_Warrior = 0, y_Warrior = 0;
	int day = 0, turn = 0;
	char direction = 'R';
	string schedule[M];
	
	KhoiTaoDiaHinh(a, N);
	NhapPhuThuy(a, schedule, M);
	
	while (turn < K) {
		if (a[x_Warrior][y_Warrior] != -1) {
			ReHuong(direction, schedule[a[x_Warrior][y_Warrior]][day%7], 1);
			
			turn++;
		}
		
		if (turn == K) break;
		
		DiChuyen(x_Warrior, y_Warrior, N, direction);
		
		day++;
	}
	
	return day;
}

int main() {
	cout << "Tac gia: " << AUTHOR << " tren Github\n";
	cout << "Chuong trinh: " << PROJECT << "\n";
	cout << "Mo ta: " << DESCRIPTION << "\n";
	cout << "Luu y: " << REMINDER << "\n";
	cout << "\n===============\n";
	
	int a[MAXSIZE][MAXSIZE], N, M;
	long long K;
	
	cout << "Nhap N, K, M: ";
	cin >> N >> K >> M;
	
	cout << "\n" << TruyTimKhoBau(a, N, K, M) << "\n";
	
	return 0;
}