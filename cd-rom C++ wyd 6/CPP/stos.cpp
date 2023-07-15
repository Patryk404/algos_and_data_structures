#include <iostream>
#include "stos.h"
using namespace std;

// dane przyk³adowe

string tab1[3]={"Ala", "ma", "kota"};
double tab2[3]={3.14, 2.12, 100};

// przykladowa realizacja metody klasy szablonowej poza cialem klasy (patrz plik stos.h)

template <class TypPodst> int STOS<TypPodst>::StanStosu(){ // wypisuje i zwraca informacje o stanie stosu
 switch(szczyt) {
  case 0          	 : return (STOS_PUSTY);
  case DLUGOSC_MAX	 : return (STOS_PELNY);
  default         	 : return (OK);  
  }
}


int main(){

 int i;

 STOS<string>   s1; // stos do przechowywania tekstow
 STOS<double>  s2;  // stos do przechowywania liczb

 cout << "\nStos s1 (zawiera napisy, rozmiar=2): ";

 for(i=0; i<3;i++){
	cout << "\nProbuje odlozyc:" << tab1[i] << ",";
   if (s1.StanStosu() != STOS_PELNY)  	
	s1.push(tab1[i]);
   else{
     cout << "Stos pelny, stop!\n"; 
     break;
   }
 }

 cout << "\nStos s2 (zawiera liczby, rozmiar=2): ";

 for(i=0; i<3; i++){
	cout << "\nProbuje odlozyc:" << tab2[i] << ",";
  if (s2.StanStosu() != STOS_PELNY)
	s2.push(tab2[i]);
  else{
     cout << "Stos pelny, stop!\n"; 
     break;
  }
 }

for(i=0; i<3;i++) {
  string z;
  if (s1.pop(z)==OK)
 	cout << "\nZdejmuje ze stosu s1: "<< z << endl;
  else{
     cout << "Stos pusty, koniec!\n";
     break;
  }
 }


for(i=0; i<3;i++) {
double y;
 if (s2.pop(y)==OK)
 	cout << "\nZdejmuje ze stosu s2: "<< y << endl;
 else{
     cout << "Stos pusty, koniec!\n";
     break;
     }
 }
 
 return 0;
}
