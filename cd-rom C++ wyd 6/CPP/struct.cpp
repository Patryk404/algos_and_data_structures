#include <iostream>
using namespace std;

struct DaneOsobowe{ // Dluzsza definicje typu mozna umiescic w osobnym pliku naglowkowym
   string Imie; 
   string Nazwisko;
   int Wiek; 
   string PESEL;
};


int main(){

 DaneOsobowe osoba1;

 osoba1.Imie="Jan";
 osoba1.Nazwisko="Kowalski";
 osoba1.Wiek=34;
 osoba1.PESEL="81011506032";

 cout  <<  "Imie:" << osoba1.Imie << " Nazwisko: " << osoba1.Nazwisko << endl; 	// wypisze fragment rekordu osoba1
  
 DaneOsobowe &osoba2=osoba1; // Zmienna referencyjna musi zostac od razu zainicjowana

 osoba2.Nazwisko="Pospieszny"; // Zmiana nazwiska rekordu osoba1 z uzyciem zmiennej referencyjnej osoba2!
  
 cout  <<  "Imie:" << osoba2.Imie << " Nazwisko: " << osoba2.Nazwisko << endl; 	// Wypisze fragment rekordu osoba1, uzywajac zmiennej referencyjnej osoba2
 
 int x=5;
 int y=8;
 y=x; // Do y kopiujemy wartosc zmiennej x
 cout << "x=" << x << endl; // wypisze 5
 cout << "y=" << y << endl; // wypisze 5
 return 0;
}
