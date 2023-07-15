#include <iostream>
#include <vector>
using namespace std;

int main (){
  
  int tab1[] = {5,9,17,21}; 				// tablica danych, z ktorych utworzymy wektor v1
  string tab2[]={"Ala", "ma", "kota"};		// tablica danych, z ktorych utworzymy wektor v2
  
  vector<int> v1 (tab1, tab1 + sizeof(tab1) / sizeof(int) ); // tworzac wektor musisz podac jego rozmiar (moze byc podane jako liczba)

  cout << "Zawartosc wektora v1:";			// wypiszemy wektor v1 uzywajac iteratora
  for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
  
  vector<string> v2 (tab2, tab2 + sizeof(tab2) / sizeof(string) ); // a teraz wektor zawierajacy napisy

  cout << "Zawartosc wektora v2:";
  for (vector<string>::iterator it2 = v2.begin(); it2 != v2.end(); ++it2)
    cout << ' ' << *it2;
  cout << '\n';
  
  v2.push_back("o imieniu"); 				// rozszerz tablice o 1 pozycje i dodaj nowy element
  v2.push_back("Filemon");  				// rozszerz tablice o 1 pozycje i dodaj nowy element
  
  cout << "Zawartosc wektora v2:"; 			// pokaz kotku, co masz w srodku...
  for (vector<string>::iterator it2 = v2.begin(); it2 != v2.end(); ++it2)
    cout << ' ' << *it2;
  cout << '\n';
  
  v2.erase(v2.begin()+2); // usuwa trzeci element
  
  cout << "Zawartosc wektora v2 (po usunieciu 3-go elementu):"; 	// pokaz kotku, co masz w srodku...
  for (vector<string>::iterator it2 = v2.begin(); it2 != v2.end(); ++it2)
    cout << ' ' << *it2;
  cout << '\n';
 
  return 0;
}
