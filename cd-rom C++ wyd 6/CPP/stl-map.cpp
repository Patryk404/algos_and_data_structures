#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std; 
int main(){
  map<string, string> slowniczek;
  // Wpiszmy kilka definicji
  slowniczek.insert(make_pair("kon", "jaki jest kazdy widzi")); 
  slowniczek.insert(make_pair("Ala", "ma kota")); 
  slowniczek.insert(make_pair("Slowacki", "wielkim poeta byl")); 
  // Wypisujemy zawartosc
  map<string, string>::iterator it = slowniczek.begin();
  while(it != slowniczek.end()){
  	cout.width(20);
    cout << left << it->first << "-> " << it->second << endl;
    it++;
  }
  slowniczek["Slowacki"] = "WIELKIM poeta byl"; // Zmiana definicji hasla Slowacki
  cout << "Slowacki  -> " << slowniczek["Slowacki"] << endl;
  
  cout << "Wstawiam (ponownie) haslo 'Slowacki'" << endl;
  if(slowniczek.insert(make_pair("Slowacki", "bla bla bla")).second == false){
    cout << "To haslo juz znajduje sie w slowniku" << endl;
  }
  cout << "Szukam hasla'kon'" << endl;
  if(slowniczek.find("kon") != slowniczek.end())
    cout << "Znalazlem haslo 'kon'" << endl;
  cout << "Szukam hasla'Gombrowicz'" << endl;  
  if(slowniczek.find("Gombrowicz") == slowniczek.end())
    cout << "Haslo 'Gombrowicz' nie znalezione" << endl;
  return 0;
}
