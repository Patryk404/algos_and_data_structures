#include <iostream>
using namespace std;

const int n=7;

int G[n][n], V[n];
// G - graf n x n
// V - przechowuje informacje, czy dany wierzcholek
//     byl juz badany (1) lub nie (0)

#include "kolejka.h"

void szukaj(int G[n][n],int V[n],int i){// rozpoczynamy od wierzcholka 'i'
 FIFO<int> kolejka(n);
 kolejka.wstaw(i);
 int s;
 while(!kolejka.pusta()) {
   s=kolejka.obsluz();	// bierzemy z kolejki pewien wierzcholek 's'
   V[s]=1;             // zaznaczamy wierzcholek 's' jako "badany"
 for(int k=0; k<n; k++)
   if(G[s][k]!=0)  	 // istnieje przejscie
			if(V[k]==0){ // 'k' nie byl jeszcze badany
			 V[k]=1;		// zaznaczamy wierzcholek 'k' jako "badany"
			 kolejka.wstaw(k);
			 }
 }
}

int main() {
 for(int i=0; i<n; i++)	{
	V[i]=0;  // wierzcholek nie byl jeszcze badany
	for(int j=0; j<n; j++)
	 G[i][j]=0;
 }
 
 G[0][3]=G[3][0]=1;G[0][4]=G[4][0]=1;G[0][1]=G[1][0]=1;
 G[1][4]=G[4][1]=1;G[3][4]=G[4][3]=1;G[4][5]=G[5][4]=1;
 G[1][2]=G[2][1]=1;G[3][6]=G[6][3]=1;G[2][6]=G[6][2]=1;
 szukaj(G,V,0);
 return 0;
}
