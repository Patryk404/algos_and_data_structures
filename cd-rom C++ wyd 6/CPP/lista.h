// definicje pomocniczych typów danych

enum szukanie {PORAZKA=0, SUKCES=1};

typedef struct rob{
int wartosc;
struct rob *nastepny; // wskaŸnik do
}ELEMENT;             // nastêpnego elementu

class LISTA{ // pocz¹tek deklaracji klasy LISTA
public:
  // nag³ówki:	
	friend LISTA& operator +(LISTA&, LISTA&); // sumuje dwie listy

	friend void fuzja(LISTA &x, LISTA &y);	  // realizacja poza klas¹, jako funkcja zaprzyjaŸniona!

	void wypisz();         					// wypisuje zawartoœæ listy
	int szukaj(int x);   	   				// szuka elementu x na liœcie
	void naKoniec(int x); 	   				// dorzuca bez sortowania
	void dodSort(int x); 	   				// dorzuca z sortowaniem 
	LISTA& operator --(int); 				// usuwa ostatni element listy, przedefiniowany operator --, parametr 'int' jest sztuczny, informuje 
											// kompilator o tym, ¿e jest to operator "przyrostkowy"
	// kilka prostych metod:
	bool  pusta(){             				// czy lista coœ zawiera?
	return (inf.glowa==NULL);
	}
	void zeruj(){							// zeruje listê bez wykonywania "delete"
	inf.glowa=inf.ogon=NULL;
	}
	
	LISTA(){	// konstruktor
	inf.glowa=inf.ogon=NULL;
	}	
	~LISTA(){	// destruktor, który u¿ywa przedefiniowanego wczeœniej operatora --	     	
	while (!pusta()) (*this)--;
	}
private:
	typedef struct{        // definicja struktury informacyjnej, któta  zapewni dostêp do listy
				   ELEMENT *glowa;
				   ELEMENT *ogon;
	}INFO;

	INFO inf;				// deklacja zmiennej zawiewraj¹cej strukturê informacyjn¹
	
}; //koniec deklaracji klasy LISTA
