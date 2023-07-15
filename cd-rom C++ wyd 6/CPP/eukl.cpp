// najwiekszy wspólny dzielnik

#include <iostream>

using namespace std;

int nwd (int a, int b) {
  if (b==0) 
	return a;
  else
  	return nwd (b, a % b); // operator % w C++ realizuje funkcje modulo (reszta z dzielenia liczb calkowitych)
}



int main() {
 cout << " nwd(12,3)=" << nwd(12,3) << ","; 		// wypisz wynik nwd(12,3)
 cout << " nwd(24,30)=" << nwd(24,30) << ",";		// itp.
 cout << " nwd(5,7)=" << nwd(5,7) << ",";
 cout << " nwd(54,69)=" << nwd(54,69) << ",";
 cout << " nwd(45,60)=" << nwd(45,60) << endl;
 return 0;
}
//-----------------------------------------------------------------------
