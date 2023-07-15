#include <iostream>
using namespace std;

template <class TypPodst>  class FIFO{
private:
	TypPodst *t;
	int glowa, ogon, dlugosc, maxElt;
public:
  FIFO(int n){
	    maxElt = n;
		t = new TypPodst[maxElt];
		glowa = dlugosc = 0;
		ogon = -1;
   }

void wstaw(TypPodst x){
    if ( dlugosc != maxElt) {
	    if(ogon == (maxElt-1) ) // Zawijamy!
		ogon = -1;
		t[++ogon] = x; 			//  Przesun ogon i wstaw
		dlugosc++;
	} else cout << "Operacja nieudana, kolejka pelna!" << endl;
   }
   
  void wypisz(){ // Wypisz uwzgledniajac efekt zawijania tablicy
  	cout << "Zawartosc kolejki: ";
  	int k=glowa;
	for (int i = 0; i< dlugosc; i++) {
		if (k== maxElt  )
		        k=0;
        cout << t[k++] << " ";
		}	
	cout << endl;  
   }
   
  TypPodst obsluz(){
  	TypPodst temp = t[glowa++]; 	// Pobierz wartosc i przesun glowe
		if(glowa == maxElt) 		// Zawijamy!
	glowa = 0;
	dlugosc--; 
	return temp;
   }
  bool pusta(){  // Czy kolejka jest pusta
		return (dlugosc==0); 
	}   
};
