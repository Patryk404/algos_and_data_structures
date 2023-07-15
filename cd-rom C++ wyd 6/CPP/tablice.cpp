#include <iostream>
using namespace std;

const int M=2, N=3;

int main(){

 int tab1[]={3, 5, 7}; 						// tworzy tablice i inicjuje jej komorki wartosciami 3, 5 i 7
 cout  <<  "tab1[1]=" << tab1[1] << endl; 	// wypisze: 5
 
 int tab2[5];								// tworzy tablice 5 liczb, bez przypisywania zawartosci
 
 cout  <<  "tab2[2]=" << tab2[2]  << endl; 	// wypisze przypadkowa wartosc
 

 int tab3[M][N]= { {3,4,5}, {6,7,8} };  	// tablica dwuwymiarowa
  
 
 for (int i=0; i<M; i++){
	for(int j=0; j<N; j++) 
		cout  <<  "tab3[" << i << "]["<< j <<"]="<< tab3[i][j]  << "   ";
    cout << endl;
     }
return 0;
}
