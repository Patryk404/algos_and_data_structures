#include <iostream>
using namespace std;

const int n=12;
enum {TAK, NIE} static Znalazlem=NIE;

int tab[n]={1, 2, 6, 18, 20, 23, 29, 32, 34, 39, 40, 41};

int szukaj(int tab[], int x){ // zwraca indeks poszukiwanej wartosci lub -1

 int left=0, right=n-1, mid;

 while( (left<=right) && (Znalazlem!=TAK) ){
 mid=(left+right)/2;
 if(tab[mid]==x)
	 Znalazlem=TAK;
 else
	if(tab[mid]<x)
		left=mid+1;
	else
		right=mid-1; 
 }

 if(Znalazlem==TAK)
	return mid;
 else
	return -1;
}

int main(){
 cout << "wynik poszukiwania liczby 29: " << szukaj(tab,29) << endl;
 cout << "wynik poszukiwaina liczby  9: " << szukaj(tab, 9) << endl;
 return 0;
}


