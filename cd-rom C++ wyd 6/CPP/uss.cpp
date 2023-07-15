#include<iostream>
#include <string.h>

using namespace std;
const int n=29;

typedef struct slownik	{
   struct slownik *t[n];
} USS, *USS_PTR;
// ------------------------------------------------------------------------

int do_indeksu(char c) { // znak ASCII -> indeks
 if ( (c<='Z') && (c>='A') || (c<='z') && (c>='a') )
		return toupper(c)-'A';
 else{
     if (c==' ')  return 26;
     if (c=='-')  return 27;
     }
}
// ------------------------------------------------------------------------
char z_indeksu(int n) { // indeks -> znak ASCII
 if ( (n>=0)  &&  (n<= ('Z'-'A')) )
 	return toupper((char) n+'A');
 else {
      if (n==26) return ' ';
      if (n==27) return '-';
      }
}
// ------------------------------------------------------------------------
void zapisz(char *slowo,USS_PTR p){
 USS_PTR q; // zmienna pomocnicza
 int pos;
 for (int i=1; i<=strlen(slowo); i++) {
   pos=do_indeksu(slowo[i-1]);
   if (p->t[pos] != NULL) p=p->t[pos];
	 else{
 	     q=new USS;
	     p->t[pos]=q;
	     for (int k=0; k<n; q->t[k++]=NULL);
	     	p=q;
	     }
   }
 p->t[n-1]=p; 	// petla jako koniec slowa
}
// ------------------------------------------------------------------------
void pisz_slownik(USS_PTR p){
 for (int i=0; i<26; i++)
 	if (p->t[i] != NULL) {
	 if ( (p->t[i])->t[n-1]==p->t[i])     	
	   cout << z_indeksu(i) << endl <<" ";	// gdy koniec slowa to pisz znak konca linii
	else
	   cout << z_indeksu(i);
	   cout << "---"; 						// aby ladniej wygladalo
	   pisz_slownik(p->t[i]); 				// wypisz rekurencyjnie reszte
	}
}
// ------------------------------------------------------------------------
void szukaj(char slowo[],USS_PTR p) { // szukaj slowa w slowniku
 int test=1, i=0;
 while ((test==1) && (i<strlen(slowo)) )
  if (p->t[do_indeksu(slowo[i])]==NULL) 
       test=0; // brak odgalezienia, slowa nie ma!
   else 
       p=p->t[do_indeksu(slowo[i++])]; // szukamy dalej
if ( (i==strlen(slowo)) && (p->t[n-1]==p) && test)
	cout << "Slowo znalezione!\n";
else  
    cout << "Slowo nie zostalo znalezione w slowniku\n";;
} 

// ------------------------------------------------------------------------
int main(){
 int i;
 char tresc[100];
 USS_PTR p=new USS; // tworzymy nowy slownik
 for (i=0; i<n; p->t[i++]=NULL);
 for(i=1 ;i<=7;i++) {// wczytamy 7 slow
	cout << "Podaj slowo, ktore mam umiescic w slowniku: ";
	cin >> tresc;
	zapisz(tresc,p);
 }
 pisz_slownik(p);    // wypisujemy slownik
 for(i=1 ;i<=4;i++){  // szukamy 4 slow
	cout << "Podaj slowo, ktore mam wyszukac w slowniku: ";
	cin >> tresc;
	szukaj(tresc,p);
 }
 return 0;
}
