#include <iostream>
#include <vector>       // tu znajdziesz szablon klasy vector
#include <algorithm>    // tu znajdziemy binary_search, sort itp.

using namespace std;

bool porownaj (int a, int b){ // funkcja, ktora bedzie uzywana przez binary_search
   return (a<b); 
} 

int tab[]={1, 2, 6, 18, 20, 23, 29, 32, 34, 39, 40, 41}; // tablica ma 12 elementow
  
int main () {
  vector<int> v(tab,tab+12); 				// utworzymy z danych tablicy tab1 obiekt klasy vector
  sort (v.begin(), v.end(), porownaj);		// posortuj dane
  cout << "Szukam 6: ";
  if (binary_search (v.begin(), v.end(), 6, porownaj)) //uzyj gotowy algorytm wyszukiwania binarnego
    cout << "Znalazlem!\n"; 
  else 
	cout << "Nie znalazlem!\n";

  cout << "Szukam 7: ";
  if (binary_search (v.begin(), v.end(), 7, porownaj))
    cout << "Znalazlem!\n"; 
  else 
	cout << "Nie znalazlem!\n";

  return 0;
}
