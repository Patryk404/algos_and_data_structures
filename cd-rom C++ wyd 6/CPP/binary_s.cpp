#include <iostream>
using namespace std;

int szukaj_rec(int  tab[], int x, int left, int right){
 if(left>right) 
	  return -1; // element nieznaleziony
	else{
	     int mid=(left+right)/2;
         if(tab[mid]==x) 
	  		return mid; // element zostal znaleziony!
		else
			if(x<tab[mid]) // szukaj po lewej
				return szukaj_rec(tab,x,left,mid-1); 
			else// szukaj po prawej
				return szukaj_rec(tab,x,mid+1,right);
    }
}

int main(){
 int tabl[12]={1,2,6,18,20,23,29,32,34,39,40,41};
 cout << "wynik poszukiwania liczby 23: "<<szukaj_rec(tabl,23,0,11)<<endl;
 cout << "wynik poszukiwnina liczby  3: "<<szukaj_rec(tabl, 3,0,11)<<endl;
 return 0;
}

