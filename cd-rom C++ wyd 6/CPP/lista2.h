#include <iostream>

using namespace std;

const int n=5;
const int kryteria_sort=2; // liczba kryteriów sortowania

typedef struct rob{
	string nazwisko;
	long  zarobek;
	struct rob *nastepny; 	// wskaŸnik do
}ELEMENT;            		// nastêpnego elementu

typedef struct rob_ptr{ 	// struktura robocza listy wskaŸników
	ELEMENT *adres;
	struct rob_ptr *nastepny;
}LPTR;

// ----funkcje "decyzyjne"--------------------------------
int alfabetycznie(ELEMENT *q1,ELEMENT *q2) { // czy rekordy q1 i q2 s¹ uporz¹dkowane alfabetycznie?
	return (q1->nazwisko>=q2->nazwisko);
}

int wg_zarobkow(ELEMENT *q1,ELEMENT *q2) { // czy rekordy q1 i q2 s¹ uporzdkowane wg zarobków?
	return (q1->zarobek>=q2->zarobek);
}

int ident_nazwiska (ELEMENT *q1,ELEMENT *q2) { // czy rekordy q1 i q2 maj¹ identyczne nazwiska?
	return (q1->nazwisko==q2->nazwisko);
}

int ident_zarobki (ELEMENT *q1,ELEMENT *q2) { // czy rekordy q1 i q2 maj¹ identyczne zarobki?
	return(q1->zarobek==q2->zarobek);
}
// -------------------------------------------------------
class LISTA {
public:
  LISTA(); 					// konstruktor
 ~LISTA(); 					// destruktor
  void dorzuc(ELEMENT *);	// do³¹cz nowy element q
  void wypisz(char);     	// wypisz zawartoœæ listy
  int  usun(ELEMENT*,int(*decyzja)(ELEMENT *,ELEMENT*));
  // usuñ element, któ³ry jest zgodny z wzorcow¹ komórk¹ podan¹ jako parametr
private:
	// prywatne struktury:
	typedef struct{              // struktura informacyjna listy danych
	ELEMENT *glowa;
	ELEMENT *ogon;
	}
	INFO;
	typedef struct{  // struktura informacyjna listy wskaŸników
	 LPTR *glowa;
	 LPTR *ogon;
	}LPTR_INFO;

  LPTR_INFO inf_ptr[kryteria_sort]; // kryteria_sort = iloœæ kryteriow sortowania danych
  INFO info_dane;

// metody "wewnêtrzne", nieudostêpnione publicznie:

 LPTR_INFO *odszukaj_wsk(LPTR_INFO*,ELEMENT*, int(*)(ELEMENT*,ELEMENT*));

 ELEMENT *usun_wsk(LPTR_INFO*, ELEMENT*, int(*)(ELEMENT*,ELEMENT*));

 int usun_dane(ELEMENT*);

 void dodSort(int, ELEMENT*, int(*decyzja)(ELEMENT*,ELEMENT*));
 void wypisz1(LPTR_INFO*);
};
