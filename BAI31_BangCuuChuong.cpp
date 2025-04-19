#include <iostream>
#include <math.h>
using namespace std;

// Xin ton trong tac gia cua doan code phia duoi (Github: @tpc-pascal)
#define AUTHOR "tpc-pascal"
#define PROJECT "BANG CUU CHUONG"
#define DOCUMENT "300 Exercises Code For Youth (Bai 31 / trang 11)"
#define MAXSIZE 100

int main() {
    cout << "Tac gia: " << AUTHOR << " tren Github\n";
    cout << "Chuong trinh: " << PROJECT << "\n";
    cout << "Nguon: " << DOCUMENT << "\n";
    cout << "\n===============\n";
    
    int i = 2;
    for (int j = 1; j <= 10; j++) {
	    while (i <= 9) {
	       cout << "|" << i << "x";
	       if (j > 9) cout << "";
	       else cout << " ";
	        
	       cout << j << "=";
	       if (i*j > 9) cout << "";
	       else cout << " ";
	        
	       cout << i*j;
	        
	       i++;
	    }
	    
	    cout << "|\n";
	    i = 2;
    }
    
    return 0;
}
