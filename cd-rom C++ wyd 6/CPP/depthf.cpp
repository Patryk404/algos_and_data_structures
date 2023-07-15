#include <iostream>
using namespace std;

const int n=7;
int G[n][n], V[n]; 		// G - graf n x n, V - przechowuje informacje, 
						// czy dany wierzcholek byl juz badany (1) lub nie (0)

void wypisz (string nazwa, int G[n][n]){
 int i, j;
 cout << "Graf:" << nazwa << endl;
 for(i=0;i<n;i++)
  for(j=0;j<n;j++){
    cout<<G[i][j]<<"  ";
  if(j==n-1) cout << endl;
  }
}

#define TEST

void zwiedzaj(int G[n][n], int V[n], int i) {
 V[i]=1;  // zaznaczamy wierzcholek jako "badany"
 #ifdef TEST
   cout << "Badam wierzcholek " << i << endl;
 #endif
 for(int k=0;k<n;k++)
  if(G[i][k]!=0)  // istnieje przejscie
		if(V[k]==0) zwiedzaj(G,V,k);
} 

void szukaj(int G[n][n], int V[n]) {
 int i;
 for(i=0;i<n;i++) V[i]=0;  // wierzcholek nie byl jeszcze badany
 for(i=0;i<n;i++)
	if(V[i]==0) 
		zwiedzaj(G,V,i);
}

int main(){
 for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
	  G[i][j]=0;
 // Graf z rysunku 10.17:
 G[0][3]=G[3][0]=1;G[0][4]=G[4][0]=1;G[0][1]=G[1][0]=1;
 G[1][4]=G[4][1]=1;G[3][4]=G[4][3]=1;G[4][5]=G[5][4]=1;
 G[1][2]=G[2][1]=1;G[3][6]=G[6][3]=1;G[2][6]=G[6][2]=1;
 wypisz("G", G);
 szukaj(G,V);
 return 0;
}
