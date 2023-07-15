#include <iostream>
#include <set>
using namespace std;
 
int main() {
 set<string> slownik;
 set<string>::iterator it, res;

 slownik.insert("ala"); slownik.insert("ma"); slownik.insert("kota"); 
 slownik.insert("Filemona");  slownik.insert("Filemona"); // 2x!
 cout << "Zawartosc:";  
 
 res = slownik.find("Filemona");   // szukamy napis  "Filemona"
 
 for( it=slownik.begin(); it!=slownik.end(); ++it ) // wyswietlenie zawartosci
    cout << *it << " ";
 
    
 if( res!=slownik.end() ){ // find zwraca iterator do elementu lub set::end
      cout << "\nZnalazlem napis:" << *res << '\n';
      cout << "Usuwam napis:" << *res;
  }

 cout << "\nZawartosc:";  
 slownik.erase(res);
     
 for( it=slownik.begin(); it!=slownik.end(); ++it ) // wyœwietlenie zawartoœci
    cout << *it << " ";
  return 0;
}
