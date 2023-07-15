class Complex {
private:            	// poczatek sekcji prywatnej
   double Re,Im;  		 //reprezentacja jako Re+j*Im
 	
public:					// poczatek sekcji publicznej
  Complex(double x,double y){  	// konstruktor klasy ma tak� sam� nazw� jak klasa
	Re=x;
	Im=y;
	}
  void wypisz(); //  nag��wek funkcji kt�ra wypisuje liczb� urojona
  double Czesc_Rzecz() { return Re; } // zwraca cz�� rzeczywista
  double Czesc_Uroj () { return Im; } // zwraca cz�� urojona

// nag��wek funkcji, kt�ra przedefiniowuje operator + (plus), aby umo�liwi� dodawanie liczb zespolonych:
  friend Complex& operator +(Complex,Complex);
// nag��wek funkcji, kt�r� przedefiniowuje operator  <<, aby umo�liwi� wypisywanie liczb zespolonych:
 friend ostream& operator << (ostream&,Complex);
 };//koniec deklaracji (i cz�ciowej definicji) klasy Complex
