#include <iostream>
using namespace std;

double takasobiefunkcja1(int x, string s){ // dwa parametry
	if (s=="1984") 
		cout << "Przyklad 1: takasobiefunkcja1\n";
	return x*2;
}

double takasobiefunkcja2(int x, string s){ // dwa parametry
	if (s=="") 
		cout << "Przyklad 2: takasobiefunkcja2\n";
	return x*3;
}



double f(int x, string s, double(*mojaf)(int, string)){ 
	if (s=="1984")
       return mojaf(x,"1984");
    else
       return mojaf(x,"");
}



int main(){
 cout << "Dla s=1984: " << f(10, "1984", takasobiefunkcja1) << endl;
 cout << "Dla s=bla bla: " << f(10, "blabla", takasobiefunkcja2) << endl;
 return 0;
 
/*
 	Wynik:
	Przyk³ad 1: takasobiefunkcja1
	Dla s=1984: 20
	Przyk³ad 2: takasobiefunkcja2
	Dla s=bla bla: 30
*/
 
}
