#include <iostream>
#include <math.h> // z powodu sqrt
using namespace std;

// w systemie UNIX moze byc wymagana kompilacja z biblioteka matematyczna : c++ -o erastot erastot.cpp -lm

inline int sqrt_int(int n) { 
 return (int)sqrt((double)n)/1;
}

bool pierwsza(int n){      // czy n jest liczba pierwsza
 int i, limes=sqrt_int(n);
 for(i=2; n!=(n/i)*i && i<=limes;i++);
   if (i>limes) 
	   return true;  // tak, liczba pierwsza
   else 
	   return false;  // nie, "zwyczajna" liczba
}
//-----------------------------------------------------------------------
void sito(int n) { 	// wypisuje wszystkie liczby pierwsze <n
 int cpt = 1, i, *tp=new int[n+1];

 for(i=1; i<=n; i++) 
	tp[i]=i; 		// zaznaczenie wszystkich liczb naturalnych od 1 do n

 while(cpt<n){   	//szukamy pierwszego niezerowego elementu tablicy tp:
  for(cpt++; (tp[cpt]==0) && (cpt!=100); cpt++);
  int k=2; 			// zerujemy wielokrotnosc tego elementu (cpt) w tp
  while(cpt*k<=n){
    tp[cpt*k]=0;
    k++;
  }
 }
 for(i=1;i<=n;i++)
  if (tp[i]!=0) cout << "Liczba pierwsza:"<< tp[i] << "  ";
 delete tp; // usuniecie tablicy z pamieci
 cout << endl;
}

int main() {
 cout << "Metoda KLASYCZNA\n\n";
 for(int i=1; i<100; i++)
 if (pierwsza(i)==1)
  cout << "Liczba pierwsza:" << i << "  ";
 cout << "\n\nMetoda SITA ERASTOTENESA\n\n";
 sito(100);
 return 0;
}
//-----------------------------------------------------------------------
