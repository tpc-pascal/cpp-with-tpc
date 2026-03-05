#include <iostream>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG CUA DAY SO"
#define DESCRIPTION "Tinh tong cua bieu thuc co quy luat"
#define REMINDER "Nhap cac gia tri phu hop voi yeu cau va so luong"
#define MAXSIZE 100

long long GiaiThua(int a) {
    if (a == 0 || a == 1) return 1;
    
    return a * GiaiThua(a-1);
}

long long LuyThua(int coSo, int mu) {
   if (coSo == 0 && mu == 0) return -1;
   if (coSo == 0 || coSo == 1) return coSo;
   if (mu == 0) return 1;
   
   return coSo * LuyThua(coSo, mu-1);
}

long long VL03(int n) {
     // S = (2 + 3 + ... + n) + 2n
    long long S = 0;
    
    // S += (n*(n+1) - 2) / 2
    for (int i = 2; i <= n; i++) {
        S += i;
    }
    
    return S + 2*n;
}

float VL04(int n) {
    // S = 1/2 + 1/3 + ... + 1/n
    float S = 0;
    
    for (int i = 2; i <= n; i++) {
        S += (float)1/i;
    }
    
    return S;
}

long long VL05(int n) {
    // S = 1 - 2 + 3 - ... + (3n + 1)
    long long S = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) S += i;
        else S -= i;
    }
    
    return S;
}

float VL09(float x, int n) {
    // S = x + x^2/2! + ... + x^n/n!
    float S = 0;
    
    for (int i = 1; i <= n; i++) {
        S += (float)LuyThua(x, i) / GiaiThua(i);
    }
    
    return S;
}

long long SUM1(int n) {
    // S = 1 + 2 + 3 + ... + n
    long long S = 0;
    
    // S += (n*(n+1)) / 2
    for (int i = 1; i <= n; i++) {
        S += i;
    }
    
    return S;
}

long long SUM2(long n) {
    // S = 1^2 + 2^2 + 3^2 + ... + n^2
     long long S = 0;
    
    for (int i = 1; i <= n; i++) {
        S += LuyThua(i, 2);
    }
    
    return S;
}

double SUM3(int n) {
    // S = 1/(1 * 2) + 1/(2 * 3) + ... + 1/(n * (n+1))
    double S = 0;
    
    for (int i = 1; i <= n; i++) {
        S += (double)1/(i * (i+1));
    }
    
    return S;
}

double SUM4(int n) {
    // S = 1 + 1 / (1 + 2) + 1 / (1 + ... + 3) + ... + 1 / (1 + ... + n)
    double S = 0;
     
     // S += (2 * n) / (n - 1)
    for (int i = 1; i <= n; i++) {
        S += (double)1/SUM1(i);
    }
    
    return S;
}

long long DIVTR(long long a, long long b, long long n) {
    // S = [n/a] + [n/(a+1)] + ... + [n/b]
	long long res = 0;
    
    while (a <= b) {
        res += n/a;
        a++;
    }
    
    return res;
}

double INVSUM(int n) {
	// S = 1 + 1/3 + ... + 1/(2*n - 1)
    double S = 0;
    
    for (int i = 1; i <= 2*n - 1; i += 2) {
        S += (float)1/i;
    }
    
    return S;
}

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Mo ta: " << DESCRIPTION << "\n";
    cout << "Luu y: " << REMINDER << "\n";
    cout << "\n===============\n";
    
	int T, chon;
	int n, a, b;
	float x;
	
	do {
	    cout << "[1. (2n), \n2. (1/n), \n3. (3*n + 1), \n4. (x^n)/n!, \n5. (n), \n6. (n^2), \n7. 1/(n * (n+1)), \n8. 1 / (1 + ... + n), \n9. n/b, \n10. 1/(2*n - 1)]: ";
	    cin >> chon;
    	
    	if (chon < 1 || chon > 10) cout << "Lua chon sai!\n";
	} while (chon < 1 || chon > 10);
	
	cout << "Nhap so luong: ";
	cin >> T;
	
    cout << "Nhap n";
	
    switch (chon) {
        case 1:
        	cin >> n;
	        cout << "\nS = (2 + 3 + ... + n) + 2n = " << VL03(n);
	        break;
        case 2:
        	cin >> n;
	        cout << "\nS = 1/2 + 1/3 + ... + 1/n = " << fixed << setprecision(4) << VL04(n);
	        break;
        case 3:
        	cin >> n;
	        cout << "\nS = 1 - 2 + 3 - ... + (3*n + 1) = " << VL05(n);
	        break;
        case 4:
	        cout << ", x: ";
	        cin >> n >> x;
	        cout << "\nS = x + (x^2)/2! + ... + (x^n)/n! = " << fixed << setprecision(2) << VL09(x, n);
	        break;
    	case 5:
    		cin >> n;
	        cout << "\nS = 1 + 2 + 3 + ... + n = " << SUM1(n);
	        break;
        case 6:
        	cin >> n;
		    cout << "\nS = 1^2 + 2^2 + 3^2 + ... + n^2 = " << SUM2(n);
		    break;
        case 7:
        	cin >> n;
			cout << "\nS = 1/(1 * 2) + 1/(2 * 3) + ... + 1/(n * (n+1)) = " << fixed << setprecision(5) << SUM3(n);
			break;
    	case 8:
    		cin >> n;
	        cout << "\nS = 1 + 1 / (1 + 2) + ... + 1 / (1 + ... + n) = " << fixed << setprecision(8) << SUM4(n);
	        break;
	    case 9:
	    	cout << ", a, b: ";
	        cin >> n >> a >> b;
	    	cout << "\nS = [n/a] + [n/(a+1)] + ... + [n/b] = " << DIVTR(a, b, n);
	    	break;
	    case 10:
	    	cin >> n;
	    	cout << "\nS = 1 + 1/3 + ... + 1/(2*n - 1) = " << fixed << setprecision(5) << INVSUM(n) << "\n";
	    	break;
        default: break;
    }
    
    return 0;
}