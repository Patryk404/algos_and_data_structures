#include "dziedzic.h"

class C3:public C1,C2 { 		//  klasa C dziedziczy od A i B
 int z;							// pole prywatne nowej klasy
public:
 C3(int n)  : C1(n+1),C2(n-1) { // nowy konstruktor
  z= 2*n;
  }
 
 void pisz();
 
 void pisz_wszystko() {
	 cout << "Wszystkie pola:\n";
	 cout << "\t x=" << x << endl;
	 cout << "\t y=" << ret_y() << endl;
	 cout << "\t z=" << z << endl;
 }
};

void C3::pisz() {
 cout << "** Nowa wersja metody 'pisz': z="<<z<<" **\n";
}

int main() {
 C3 ob(10);
 ob.pisz();
 ob.C1::pisz();
 ob.pisz_wszystko();
 return 0;
}


/* Wynik:

** Nowa wersja metody 'pisz': z=20 **
** Stara wersja metody `pisz': x=11 **
Wszystkie pola:
         x=11
         y=9
         z=20

*/
