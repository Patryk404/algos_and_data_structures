#include <iostream>
using namespace std;

const int n=6; // graf o 6 wierzcholkach

int graf[n][n];

void zeruj(int R[n][n]){
for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		R[i][j]=0;
}

void sciezka(int R[n][n]){
 // matryca R przekazana w parametrze musi byc zainicjowana w nastepujacy sposob:
 // R[x, y] = 0, jesli nie istnieje krawedz (x, y).
 // R[x, y] = y w przeciwnym wypadku.

for(int x=0; x<n; x++)
  for(int y=0; y<n; y++)
	if(R[y][x]!=0) // wiemy jak dojsc z 'y' do 'x'
    for(int z=0;z<n;z++)
       if( (R[y][z]==0) && (R[x][z]!=0) ) 
		   R[y][z]=R[y][x];
}


void wypisz (string nazwa, int G[n][n]) {
 int i, j;
 cout << "Graf:" << nazwa << endl;
 for(i=0;i<n;i++)
   for(j=0;j<n;j++) {
     cout<<G[i][j]<<"  ";
    if(j==n-1) cout << endl;
   }
}

void wypisz(int x, int y, int R[n][n]){
 int k;
 if(R[x][y]==0) 
  cout << "Droga nie istnieje\n";
 else{
     cout << x << "  ";
     k=x;
     while(k!=y){
       k=R[k][y];
       cout << k << "  ";
    }
 }
}


int main(){
 int i,j;
 
 zeruj(graf);
 graf[0][3]=3; graf[0][5]=5; graf[1][2]=2; graf[2][4]=4; 
 graf[3][1]=1; graf[3][4]=4; graf[5][4]=4; graf[4][5]=5; graf[5][2]=2;
 wypisz ("G - przed wykonaniem algorytmu", graf);
 sciezka(graf);
 wypisz ("G - po wykonaniu algorytmu", graf);
 for(i=0; i<n; i++)
   for(j=0; j<n; j++){
     cout << "\nDroga od wierzcholka " << i << " do " << j << ": ";
     wypisz(i,j,graf);
    }
return 0;
}

