#include <iostream>

using namespace std;

const int MaxTab=200;			// rozmiar tablicy danych to MaxTab-1

class ListaTab{
public:
	ListaTab() { 				// konstruktor klasy
	   tab[0]=0; 
	}	
    // metody zostana zdefiniowane nieco dalej, teraz tylko naglowki:
	void UsunElement(int k);
	void WstawElement(int x);
	void WstawElement(int x,int k);
	void WypiszListe();
private:
	int tab[MaxTab];		// tab[0] zarezerwowane!
};

//------------------------------------------------
void ListaTab::UsunElement(int k){ //usuwamy k-ty element listy, k>=1
  if((k>=1) && (k<=tab[0])){
	  for(int i=k;i<tab[0];i++)
	  	tab[i]=tab[i+1];
	  tab[0]--;
  }  
}

//------------------------------------------------

void ListaTab::WstawElement(int x) { 	// wstawiamy na koniec listy
 if(tab[0]<MaxTab-1)
	tab[++tab[0]]=x;					// zwroc uwage na inkrementacje przedrostkowa: 
}										// ta operacja jest wykonywana jeszcze PRZED instrukcja przypisania

//------------------------------------------------

void ListaTab::WstawElement(int x, int k) { //wstawiamy na k-ta pozycje isty
 if((k>=1) && (k<=tab[0]+1) && (tab[0]<MaxTab-1)) {
	for(int i=tab[0];i>=k;i--)
		tab[i+1]=tab[i];		// robimy miejsce
	tab[k]=x;					// wstawiamy element
	tab[0]++;					// dlugosc listy +1
 }
}

//------------------------------------------------

void ListaTab::WypiszListe() {
 cout << "Zawartosc listy:\n";
 for (int i=1;i<=tab[0];i++)
	cout << tab[i] << "  ";
 cout << endl;
}

//------------------------------------------------

int main() {
 int t[10]={2, 5, -11, 4, 77, 12, 13, 13, 3, 8};
 ListaTab lst;
 lst.WypiszListe();
 for (int i=0;i<10;i++) 
	lst.WstawElement(t[i]);
 lst.WypiszListe();
 cout << "Wstaw 0 na 4-ta pozycje:\n";
 lst.WstawElement(0,4);
 lst.WypiszListe();
 return 0;
 
 /* Wynik:
 
Zawartosc listy:

Zawartosc listy:
2  5  -11  4  77  12  13  13  3  8
Wstaw 0 na 4-ta pozycje:
Zawartosc listy:
2  5  -11  0  4  77  12  13  13  3  8

*/
 
}
// -------------------------------------------------------
