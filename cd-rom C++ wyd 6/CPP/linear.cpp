#include <iostream>
using namespace std;

const	int n=10;

int	tab[n]={1,2,3,2,-7,44,5,1,0,-3};

int szukaj(int tab[],int x) { // szukaj 'x' w tablicy tab o rozmiarze n
 int i;
 for(i=0;(i<n)&&(tab[i]!=x);i++);
 return i; // jesli i==n to nie znaleziono elementu
}

int main() {
 cout << "Szukam 3, wynik: "<< szukaj(tab,3) <<endl;
 cout << "Szukam 4, wynik: "<< szukaj(tab,4) <<endl;
 return 0;
}
