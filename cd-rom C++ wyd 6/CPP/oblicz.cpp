#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

double transl(char *s) {
 // Zamienia ciagi znakow typu 1+1 na 2, 1+1+2*5 na 12 etc. Uwaga funkcja nie 
 // analizuje dzielenia i badania przypadku dzielenia przez zero!
 int i,n;
 char *s1;
 n=strlen(s);
 s1= new char[n+1]; 	// kopia robocza tekstu wejsciowego
 strcpy(s1, s);      	// kopia ciagu wejsciowego
 for(i=0;i<n;i++)		// szukamy znaków + i *
  if(s[i]=='+'||s[i]=='*'){
	 s1[i]='\0';
	 if(s[i]=='+')
		return transl(s1)+transl(s+i+1);
	 else
		return transl(s1)*transl(s+i+1);
  }
 // przypadek elementarny:
 delete s1;
 return atof(s); //  atof= "ascii to float"
}


int main() {
 cout << "1+1="     << transl( (char*) "1+1") << endl;       // 2   OK
 cout << "2*2*3="   << transl( (char*) "2*2*3") << endl;     // 12  OK
 cout << "2+2*3="   << transl( (char*) "2+2*3") << endl;     // 8   OK
 cout << "2+2+3="   << transl( (char*) "2+2+3") << endl;     // 7   OK
 cout << "2+2*0="   << transl( (char*) "2+2*0") << endl;     // 2   OK
 cout << "2*3+4*5=" << transl( (char*) "2*3+4*5") << endl;   // 46 Ÿle!
 return 0;
 
 // uwaga, konwersja (char*) "1+1" itp. jest wymagana gdyz napis wbudowany w kod to jest string constant a nie char *

}
