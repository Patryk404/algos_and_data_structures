#include "kolejka.h"

int main(){
  FIFO<string> kolejka(4); // kolejka 4-osobowa

  cout << "Wstawiam: Kowalska \n"; kolejka.wstaw("Kowalska");
  cout << "Wstawiam: Fronczak \n"; kolejka.wstaw("Fronczak");
  cout << "Wstawiam: Becki \n";    kolejka.wstaw("Becki");
  cout << "Wstawiam: Pigwa \n";    kolejka.wstaw("Pigwa");
  
  kolejka.wypisz();
  cout << "Obsluzono: " << kolejka.obsluz()  << " " << endl;
  kolejka.wypisz();
  
  cout << "Wstawiam: Mr Last Minute 1\n";    kolejka.wstaw("Mr Last Minute 1");  // To sie uda!
  cout << "Wstawiam: Mr Last Minute 2\n";    kolejka.wstaw("Mr Last Minute 2");  // To sie nie uda!
  cout << "Wstawiam: Mr Last Minute 3\n";    kolejka.wstaw("Mr Last Minute 3");  // To sie nie uda!
  kolejka.wypisz();
 
  while(!kolejka.pusta()) //  Obsluga kolejki
     cout << "Obsluzono: " << kolejka.obsluz()  << " " << endl;
if (!kolejka.pusta())
	cout << "Obsluzono: " << kolejka.obsluz()  << " " << endl;
else
	cout << "** Kolejka jest pusta **" << endl;
}

