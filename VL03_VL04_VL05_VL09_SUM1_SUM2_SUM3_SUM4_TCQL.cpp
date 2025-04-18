#include <iostream>
#include <iomanip>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "TONG CO QUY LUAT"
#define DOCUMENT "luyencode.net/problem/vl03, luyencode.net/problem/vl04, luyencode.net/problem/vl05, luyencode.net/problem/vl09, luyencode.net/problem/sum1, luyencode.net/problem/sum2, luyencode.net/problem/sum3, luyencode.net/problem/sum4"
#define MAXSIZE 100

long long VL03(int n) {
     // S = (2 + 3 + ... + n) + 2n
    long long S = 0;
    
    // S += (n*(n+1) - 2) / 2
    for (int i = 2; i <= n; i++) {
        S += i;
    }
    
    return S + 2*n;
}

float VL04 (int n) {
    // S = 1/2 + 1/3 + ... + 1/n
    float S = 0;
    
    for (int i = 2; i <= n; i++) {
        S += (float)1/i;
    }
    
    return S;
}

long long VL05 (int n) {
    // S = 1 - 2 + 3 - ... + (3n + 1)
    long long S = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) S += i;
        else S -= i;
    }
    
    return S;
}

long long GiaiThua (int a) {
    if (a == 0 || a == 1) return 1;
    return a * GiaiThua (a-1);
}

long long LuyThua(int coSo, int mu) {
   if (coSo == 0) return 0;
   if (mu == 0) return 1;
   if (coSo == 0 && mu == 0) return -1;
   
   return coSo * LuyThua(coSo, mu-1);
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
    // S = 1/(1 * 2) + 1/(1 * 3) + ... + 1/(n * (n+1))
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

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int luachon;
    cout << "1. S = (2 + 3 + ... + n) + 2n" << endl;
    cout << "2. S = 1/2 + 1/3 + ... + 1/n" << endl;
    cout << "3. S = 1 - 2 + 3 - ... + (3n + 1)" << endl;
    cout << "4. S = x + x^2/2! + ... + x^n/n!" << endl;
    cout << "5. S = 1 + 2 + 3 + ... + n" << endl;
    cout << "6. S = 1^2 + 2^2 + 3^2 + ... + n^2" << endl;
    cout << "7. S = 1/(1 * 2) + 1/(1 * 3) + ... + 1/(n * (n+1))" << endl;
    cout << "8. S = 1 + 1 / (1 + 2) + 1 / (1 + ... + 3) + ... + 1 / (1 + ... + n)" << endl;
    cout << "\n===============\n";
    cout << "Ban chon: ";
    cin >> luachon;
    
    float x;
    int n;
    switch (luachon) {
        case 1:
            cout << "Nhap n: ";
            cin >> n;
            cout << "\nVL03: " << VL03(n) << endl;
            break;
            
        case 2:
            cout << "Nhap n: ";
            cin >> n;
            cout << "\nVL04: " << fixed << setprecision(4) << VL04(n) << endl;
            break;
            
         case 3:
            cout << "Nhap n: ";
            cin >> n;
            cout << "\nVL05: " << VL05(n) << endl;
            break;
             
         case 4:
            cout << "Nhap x va n: ";
            cin >> x >> n;
            cout << "\nVL09: " << fixed << setprecision(2) << VL09(x, n) << endl;
            break;
             
         case 5:
            cout << "Nhap n: ";
            cin >> n;
            cout << "\nSUM1: " << SUM1(n) << endl;
            break;
             
         case 6:
            cout << "Nhap n: ";
            cin >> n;
            cout << "\nSUM2: " << SUM2(n) << endl;
            break;
             
         case 7:
            cout << "Nhap n: ";
            cin >> n;
            cout << "\nSUM3: " << fixed << setprecision(5) << SUM3(n) << endl;
            break;
             
         case 8:
            cout << "Nhap n: ";
            cin >> n;
            cout << "\nSUM4: " << fixed << setprecision(8) << SUM4(n) << endl;
            break;
             
         default:
            cout << "Hay chon phuong an phu hop!";
            break;
    }
    
    return 0;
}
