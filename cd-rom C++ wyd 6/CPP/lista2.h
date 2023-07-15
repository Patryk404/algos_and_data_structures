#include <iostream>

using namespace std;

const int n=5;
const int kryteria_sort=2; // liczba kryteri�w sortowania

typedef struct rob{
	string nazwisko;
	long  zarobek;
	struct rob *nastepny; 	// wska�nik do
}ELEMENT;            		// nast�pnego elementu

typedef struct rob_ptr{ 	// struktura robocza listy wska�nik�w
	ELEMENT *adres;
	struct rob_ptr *nastepny;
}LPTR;

// ----funkcje "decyzyjne"--------------------------------
int alfabetycznie(ELEMENT *q1,ELEMENT *q2) { // czy rekordy q1 i q2 s� uporz�dkowane alfabetycznie?
	return (q1->nazwisko>=q2->nazwisko);
}

int wg_zarobkow(ELEMENT *q1,ELEMENT *q2) { // czy rekordy q1 i q2 s� uporzdkowane wg zarobk�w?
	return (q1->zarobek>=q2->zarobek);
}

int ident_nazwiska (ELEMENT *q1,ELEMENT *q2) { // czy rekordy q1 i q2 maj� identyczne nazwiska?
	return (q1->nazwisko==q2->nazwisko);
}

int ident_zarobki (ELEMENT *q1,ELEMENT *q2) { // czy rekordy q1 i q2 maj� identyczne zarobki?
	return(q1->zarobek==q2->zarobek);
}
// -------------------------------------------------------
class LISTA {
public:
  LISTA(); 					// konstruktor
 ~LISTA(); 					// destruktor
  void dorzuc(ELEMENT *);	// do��cz nowy element q
  void wypisz(char);     	// wypisz zawarto�� listy
  int  usun(ELEMENT*,int(*decyzja)(ELEMENT *,ELEMENT*));
  // usu� element, kt�ry jest zgodny z wzorcow� kom�rk� podan� jako parametr
private:
	// prywatne struktury:
	typedef struct{              // struktura informacyjna listy danych
	ELEMENT *glowa;
	ELEMENT *ogon;
	}
	INFO;
	typedef struct{  // struktura informacyjna listy wska�nik�w
	 LPTR *glowa;
	 LPTR *ogon;
	}LPTR_INFO;

  LPTR_INFO inf_ptr[kryteria_sort]; // kryteria_sort = ilo�� kryteriow sortowania danych
  INFO info_dane;

// metody "wewn�trzne", nieudost�pnione publicznie:

 LPTR_INFO *odszukaj_wsk(LPTR_INFO*,ELEMENT*, int(*)(ELEMENT*,ELEMENT*));

 ELEMENT *usun_wsk(LPTR_INFO*, ELEMENT*, int(*)(ELEMENT*,ELEMENT*));

 int usun_dane(ELEMENT*);

 void dodSort(int, ELEMENT*, int(*decyzja)(ELEMENT*,ELEMENT*));
 void wypisz1(LPTR_INFO*);
};
