#include <iostream>
#include "stos.h"
using namespace std;

//--------------------------------------------------------------------------------------
struct wyrazenie{
 double val;
 char op;
 wyrazenie *lewy, *prawy;
};
//--------------------------------------------------------------------------------------
typedef struct{
 double val;
 char op;
}VAL;
//--------------------------------------------------------------------------------------
void pisz_infix(struct wyrazenie *w) {	// funkcja wypisuje wyrazenie w postaci wrostkowej
  if(w->op=='0') // wartosc liczbowa...
   cout << w->val;
  else {
      cout << "(";
      pisz_infix(w->lewy);
      cout << w->op;
      pisz_infix(w->prawy);
	  cout <<")";
     }
}
//--------------------------------------------------------------------------------------
void pisz_prefix(struct wyrazenie *w){	// funkcja wypisuje wyrazenie w postaci prefiksowej
 if(w->op=='0') // wartosc liczbowa...
  cout<<w->val<<" ";
	 else{
	     cout << w->op << " ";
   	  	 pisz_prefix(w->lewy);
	     pisz_prefix(w->prawy);
	   }
}
//--------------------------------------------------------------------------------------
int poprawne(struct wyrazenie *w) { // czy wyrazenie jest poprawne skladniowo?
 if(w->op=='0') 
 	return 1; // OK, wg naszej konwencji jest to liczba
 switch (w->op)	{
	  case '+':
	  case '-':
	  case '*':  // to sa znane operatory
	  case ':':
	  case '/': return (poprawne(w->lewy)*poprawne(w->prawy));
	  default : return (0);  //blad,  nieznany operator!
 }
}
//--------------------------------------------------------------------------------------
double oblicz(struct wyrazenie *w){
if(poprawne(w)) 					// wyrazenie poprawne?
	if (w->op=='0') 
		return (w->val); 			// pojedyncza wartosc
	 else
	  switch (w->op) {
	    case '+': return oblicz(w->lewy)+oblicz(w->prawy);
		case '-': return oblicz(w->lewy)-oblicz(w->prawy);
		case '*': return oblicz(w->lewy)*oblicz(w->prawy);
		case ':':
		case '/':if(oblicz(w->prawy)!= 0)
					return (oblicz(w->lewy)/oblicz(w->prawy));
				 else {
                       cerr << "\nDzielenie przez zero!\n";
                       return -1; // Uproszczona sygnalizacja bledow
                 }
      }
    else 
		cerr << "Blad skladni...!\n";
}

//--------------------------------------------------------------------------------------
int main() {
 STOS<wyrazenie*> s;
 // przyklad POPRAWNEJ sekwencji danych, w przypadku sekwencji blednej, gdy np. zabraknie drugiego operanda, 
 // otrzymane drzewo bedzie równiez bezsensowne (prosze wykonac odpowiednie próby)
 
 typedef struct{ // pomocnicza struktura danych, posluzy nam do inicjacji wyrazenia przykladowego
 double val;
 char op;
}VAL;
 VAL t[9]={{2,'0'},{3,'0'},{0,'+'},{7,'0'},{9,'0'},{0,'*'},{0,'+'},{12.5,'0'},{0,'*'}}; // wyrazenie przykladowe
 wyrazenie *x;
 for(int i=0;i<9;i++) {
   x=new wyrazenie;
   if((t[i].op=='*')||(t[i].op=='+')||(t[i].op=='-')||(t[i].op=='/')||(t[i].op==':'))
			x->op =t[i].op;
   else{
	   x->val=t[i].val;
	   x->op='0'; // Umowna konwencja oznaczajaca wartosc, a nie operator
	   }
  x->lewy =NULL;
  x->prawy=NULL;
  if((t[i].op=='*')||(t[i].op=='+')||(t[i].op=='-')||(t[i].op=='/')||(t[i].op==':')) {
    wyrazenie *l1,*p1;
    s.pop(l1);
    s.pop(p1);
    x->lewy =l1; // "Podwiazanie" pod wezel x
    x->prawy=p1; // "Podwiazanie" pod wezel x
  }
 s.push(x);
 }
 pisz_infix(x); 	cout << "=" << oblicz(x) << endl;
 pisz_prefix(x);	cout << "=" << oblicz(x) << endl;
 return 0;
}
