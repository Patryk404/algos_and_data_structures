#include <iostream>
#include <list>
using namespace std;

void inline wypisz( list<string> l, list < string >::iterator it){
 for( it = l.begin(); it != l.end(); it++ )
   cout << * it << " ";
 cout << " \n";  
 }

int main() {
 list <string> l1;
 list < string >::iterator it1;
 l1.push_back("Ala"); l1.push_back("ma"); l1.push_back("kota");
 cout << "Lista:"; wypisz(l1,it1);
 it1 = l1.begin(); 					// ustawiamy sie na poczatek listy
 l1.insert( ++it1, "miala");		// wstawiamy nowy element na druga pozycje listy
 cout << "Dodajemy 'miala' na druga pozycje\nLista:";
 wypisz(l1, it1);   
 l1.erase( it1);
 cout << "Usuwamy trzecia pozycje (slowo 'ma')\nLista:";
 wypisz(l1,it1);
return 0;
}
