#include "kolejka.h"

int main(){
  FIFO<int> kolejka(4); // kolejka 4-osobowa
  cout << "Wstawiam 1 \n"; kolejka.wstaw(1);
  cout << "Wstawiam 2 \n"; kolejka.wstaw(2);
  cout << "Wstawiam 3 \n"; kolejka.wstaw(3);
  cout << "Wstawiam 4 \n"; kolejka.wstaw(4);
  
  kolejka.wypisz();
  cout << "Obsluzono: " << kolejka.obsluz()  << " " << endl;
  kolejka.wypisz();
  
  cout << "Wstawiam 5 "; kolejka.wstaw(5);     // To sie uda!
  cout << "Wstawiam 6 "; kolejka.wstaw(6);  // To sie nie uda!
  cout << "Wstawiam 7 "; kolejka.wstaw(7);  // To sie nie uda!
  kolejka.wypisz();
 
  while(!kolejka.pusta())//  Obsluga kolejki
     cout << "Obsluzono: " << kolejka.obsluz()  << " " << endl;
  if (!kolejka.pusta())
	cout << "Obsluzono: " << kolejka.obsluz()  << " " << endl;
  else
	cout << "** Kolejka jest pusta **" << endl;

}

