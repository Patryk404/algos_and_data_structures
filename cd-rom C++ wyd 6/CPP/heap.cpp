#include <iostream>
using namespace std;

const int maxTab=14;
int T[maxTab]={12,3,-12,9,34,23,1,81,45,17,9,23,11,4};

void wypisz(int tab[]){
 	for(int i=0; i<maxTab; i++)
	 cout << tab[i] << " ";
	 cout << endl;
}

void przywroc(int T[], int k, int n){
 int i,j; 
 i = T[k-1];
 while (k <= n/2){
  j=2*k;
  if((j<n) && ( T[j-1]<T[j]) ) j++;
  if (i >= T[j-1]) 
	break;
  else{
   T[k-1] = T[j-1];
   k=j;
  }
 }
 T[k-1]=i;
}

void heapsort(int T[], int n){ // wlasciwy algorytm sortowania
  int k, swap; 
  for(k=n/2; k>0; k--) 
  	przywroc(T, k, n); 
  do {
   swap=T[0];
   T[0]=T[n-1];
   T[n-1]=swap;
   n--;
   przywroc(T, 1, n);
  } while (n > 1);
}

int main(){
 int i;
 wypisz(T);
 heapsort(T,maxTab);
 wypisz(T);
 return 0;
}
