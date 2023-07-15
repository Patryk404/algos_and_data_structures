#include <iostream>
using namespace std;

const int n=10000;
int tab[n]={1, 2, 3, 2, -7, 44, 5, 1, 0, -3};

void szukaj(int tab[n],int left,int right,int x){
// left, right = lewa i prawa granica obszaru poszukiwan
// tab = tablica
// x = wartosc do odnalezienia
 if (left>right)
   cout << "Element " << x << " nie zostal odnaleziony\n";
 else
   if (tab[left]==x)
      cout << "Znalazlem szukany element " << x << endl;
   else
      szukaj(tab, left+1, right, x);
}

int main(){
 cout << "Tablica: 1, 2, 3, 2, -7, 44, 5, 1, 0, -3\n";
 szukaj(tab,0,n-1,7);
 szukaj(tab,0,n-1,5);
 return 0;
}


// Wyniki programu:
// Element 7 nie zostal odnaleziony
// Znalazlem szukany element 5


