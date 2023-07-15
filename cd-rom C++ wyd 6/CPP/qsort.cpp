#include <iostream>
using namespace std;

const int n=12;

void wypisz(int tab[]){
 	for(int i=0; i<n; i++)
	 cout << tab[i] << " ";
	 cout << endl;
}


int tab[n]={40,29,2,1,6,18,20,32,34,39,23,41};

void qsort(int tab[], int left, int right){
  if (left < right){
	int m=left;
	cout << "t["<<m<<"]="<<tab[m]<<endl;
	for(int i=left+1;i<=right;i++)
		 if (tab[i]<tab[left])
			swap(tab[++m],tab[i]);
	swap(tab[left],tab[m]);
	qsort(tab,left,m-1);
	qsort(tab,m+1,right);
  }  
}

int main(){
 wypisz (tab);
 qsort(tab,0,n-1);
 wypisz (tab);
 return 0;
}
