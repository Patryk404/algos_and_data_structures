#include <iostream>
using namespace std;

const int n=8;

void wypisz(int tab[]){
 	for(int i=0; i<n; i++)
	 cout << tab[i] << " ";
	 cout << endl;
}


int tab[n]={2,8,7,1,3,5,6,4};

int podziel(int tab[], int p, int r){
	int x=tab[r];
	int i=p-1;
	for (int j=p; j<=r-1; j++)
	  if (tab[j]<=x) {
	    i=i+1;
	    swap(tab[i], tab[j]);
	  }
	swap(tab[i+1], tab[r]);
	cout << "q="<<i+1<< "  tab[q]=|"<< tab[i+1]<< endl;
	return i+1;
}


void qsort(int tab[], int left, int right){
	wypisz(tab);
  if (left < right){
	int q=podziel(tab,left, right);
	qsort(tab,left,q-1);
	qsort(tab,q+1,right);
  }  
}

int main(){
 wypisz (tab);
 qsort(tab,0,n-1);
 wypisz (tab);
 return 0;
}
