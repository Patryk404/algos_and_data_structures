#include <iostream>
#include <string>
using namespace std;

const int M=7, N=9;
string X="PKOYTEK";   // M
string Y="MKJAIEOTI"; // N

int i, j, C[M+1][N+1]; // tablica dlugosci LCS
string    S[M+1][N+1]; // tablica ciagów LCS

string LCS_ciag (string X, string Y) {
 for (i=0; i<M; i++) 
 	S[i][0] = "";
 for (i=0; i<N; i++) 
 	S[0][i] = "";
 for (i=1; i<M+1; i++)
	for (j=1; j<N+1; j++)
        if (X[i-1] == Y[j-1])
            S[i][j]=S[i-1][j-1] + X[i-1];
        else
	    	if (S[i][j-1].length()>S[i-1][j].length())
				S[i][j]=S[i][j-1];
			else
				S[i][j]=S[i-1][j];
 return S[M][N];
}

int LCS_dlugosc (string X, string Y) {
 for (i=0; i<M; i++) 
 	C[i][0] = 0;
 for (i=0; i<N; i++) 
 	C[0][i] = 0;
 for (i=1; i<M+1; i++)
	for (j=1; j<N+1; j++)
        if (X[i-1] == Y[j-1])
              C[i][j]=C[i-1][j-1] + 1;
        else
              C[i][j]=max( C[i][j-1], C[i-1][j] );
 return C[M][N];
}


string LCS_wypisz (int i, int j) { // W tej funkcji odtwarzamy ciag LCS:
 if ( (i==0) || (j==0)) 
	return "";
 if (X[i-1] == Y[j-1])
	return (LCS_wypisz(i-1, j-1) + X[i-1]);
 else
 	if (C[i][j-1] > C[i-1][j])
   		return LCS_wypisz(i, j-1);
 	else
   		return LCS_wypisz(i-1, j);
}

int main(){
 cout << "X=" << X << ",Y=" << Y << endl;
 cout << "LCS wariant 1:" << LCS_ciag(X,Y) << endl;						// LCS: wariant 1 
 cout << "LCS wariant 2 / LCS dlugosc:" << LCS_dlugosc(X,Y) << endl;    // LCS: wariant 2
 cout << "Wypisz LCS:" << LCS_wypisz(M,N) << endl;
 
 /*
Wynik dzialania:
	X=PKOYTEK,Y=MKJAIEOTI
	LCS wariant 1:KOT
	LCS wariant 2 / LCS dlugosc:3
	Wypisz LCS:KOT

 */
 

/*
cout << "Zawartosc tablicy C\n";
for (i=0; i<M+1; i++)
   for (j=0; j<N+1; j++)
	{
	cout << "C[" << i << "," <<j << "]= " << C[i][j] << " ";
			if (j==N) cout << endl;
	}
cout << "Zawartosc tablicy S\n";
for (i=0; i<M+1; i++)
	for (j=0; j<N+1; j++)
	{
	cout << "S[" << i << "," <<j << "]= " << S[i][j] << " ";
			if (j==N) cout << endl;
   }
*/
 return 0;
}

