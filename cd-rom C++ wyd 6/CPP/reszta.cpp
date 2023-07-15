#include <iostream>
using namespace std;

int N[]={100, 50, 20, 10, 5, 2, 1}; // tablica nominalow:

void reszta(int r) {
 int x, i;
 cout << "Kwota: " << r << endl;
 i=0;
 while (r>0){    	 // wydawaj az do konca
   if (r >= N[i]) {  // czy nominal pasuje?
    x=r / N[i];      // oblicz krotnosc
    r=r-x*N[i]; 	 // reszta do wydawnia...
    cout << "Wydano " << x << " razy " << N[i] << endl;
   }
   i++;            	 // kolejny nominal
 }
}

int main(){
 reszta(91);
 return 0;
}
