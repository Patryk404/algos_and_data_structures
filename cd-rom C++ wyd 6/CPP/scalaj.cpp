#include <iostream>
using namespace std;

const int N = 8, M=12;

void wypisz(int tab[], int maxTab){
 	for(int i=0; i<maxTab; i++)
	 cout << tab[i] << " ";
	 cout << endl;
}

void scalaj(int T1[], int T2[], int T3[]){  // T1, T2 - tablice wejsciowe o rozmiarze M i M, T3 - tablica wynikowa

	for (int i=0, j=0, k=0; k < N+M; k++){

		if (i==N){// osiagnieto koniec zbioru T1, kopiujemy reszte
			T3[k]=T2[j++]; continue;
		}

		if (j==M){// osiagnieto koniec zbioru T2, kopiujemy reszte
			T3[k]=T1[i++]; continue;
		}
		if (T1[i]<T2[j])
			T3[k]=T1[i++];
		else
			T3[k]=T2[j++];
	}
}

int main(){
 int T1[N] = {-4, -2, 0, 4, 6, 8, 9, 11};
 int T2[M] = {2, 3, 4, 5, 5, 6, 7, 12, 13, 14, 16, 19};
 int T3[N+M];

 cout << "Przed scaleniem:\n";
 wypisz(T1, N);
 wypisz(T2, M);

 cout << "Po scaleniu:\n";
 scalaj(T1, T2, T3);
 wypisz(T3, N+M);
 return 0;
}
