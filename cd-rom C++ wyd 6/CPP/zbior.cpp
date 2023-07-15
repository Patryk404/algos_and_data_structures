#include <iostream>
using namespace std;
 
class Zbior{
private:
	unsigned char zbior[256]; // cala tablica ASCII
public:
 Zbior() {//zerowanie zbioru w konstruktorze
  for(int i=0;i<256;i++)
     zbior[i]=0;
 }
 Zbior& operator +(unsigned char c)  { // dodaj znak 'c' do zbioru i zwroc zmieniony obiekt
  zbior[c]=1;
  return *this;
  }
 Zbior& operator -(unsigned char c)  {	// usun znak 'c' ze zbioru zwroc zmieniony obiekt
  zbior[c]=0;
  return *this;
  }
  
 Zbior& operator +(Zbior& z2)  {	   // dodaje zbiory
 for(int i=0; i<256;i++)
	  if(z2.nalezy(i))  				// jesli element obecny w z2 dodaj go do zbioru
			zbior[i]=1;
  return *this; 						// zwraca zmodyfikowany obiekt
  }
 

 bool nalezy(unsigned char c){ 			// czy 'c' nalezy do zbioru?
  return (zbior[c]==1);
  }

//---------------------------------------------------------------
 int ile(){          					// zwraca liczbw elementow w zbiorze
  int n=0;								// (zastanow sie, czy na pewno jest to optymalna metoda, a 
  for(int i=0; i<256; i++)				// moze warto dodac jakies nowe pole do definicji klasy...?
  
  if(zbior[i]==1)  						// element obecny
	  n++;
  return n;
  }

 void pisz(){							// wypisuje zawartosc zbioru
  int i;
  cout << "{ ";
  for(i=0; i<256; i++)
	  if(zbior[i]==1)  					// wypisz obecne element
		 cout << (char)i<< " ";
  if(i==0)
		 cout << "Zbiór pusty!";
  cout << "}\n";;
 }

}; // koniec definicji klasy Zbior

// ------------------------------------------------------------------------------------------------------------
int main(){
 Zbior s1, s2;
 s1=s1+'A'; s1=s1+'A'; s1=s1+'B'; s1=s1+'C';
 s2=s2+'B'; s2=s2+'B'; s2=s2+'E'; s2=s2+'F';
 cout << "Zbior S1 =";  s1.pisz();
 s1=s1-'C';
 cout << "Zbior S1 - 'C' =";  s1.pisz();
 cout << "Zbior S2 =";  s2.pisz();
 s1=s1+s2;
 cout << "Zbior S1 + S2 = ";
		s1.pisz();
 return 0;
}
