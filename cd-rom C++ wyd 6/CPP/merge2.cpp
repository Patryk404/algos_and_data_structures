#include <iostream>
using namespace std;

const int N = 10;
int T1[N] = {4, 6, 4, 12, -3, 6, -6, 1, 8, 50};
int T2[N];  // Tablica pomocnicza

void scalanie(int left, int mid, int right) {
// left - poczatek, right - koniec, mid - srodek
 // procedura laczy 2 posortowane tablice T1[left...mid] i T1[mid+1...right] uzywajac tablicy pomocniczej T2
  int i,j,k;
  for (i=left; i<=right; i++) 
  	T2[i]=T1[i];  					// Skopiowanie danych do tablicy pomocniczej
  i=left; j=mid+1; k=left;          // Ustawienie wskaznikow tablic
  while (i<=mid && j<=right) {		// Przenoszenie danych z sortowaniem ze zbiorów pomocniczych do tablicy glownej
    if (T2[i]<T2[j])
        T1[k++]=T2[i++];
    else
        T1[k++]=T2[j++];
  }
  while (i<=mid) T1[k++]=T2[i++];	
  // Przeniesienie nie skopiowanych danych ze zbioru pierwszego w przypadku, gdy drugi zbior sie skonczyl
}


void MergeSort(int left, int right) { // wlasciwa procedura sortowania
  int mid;
  if (left<right) {
    mid=(left+right)/2;       // srodek podtablicy
    MergeSort(left, mid);     // sortowanie lewej i prawej podtablicy
    MergeSort(mid+1, right);  
    scalanie(left, mid, right);  // scalenie wynikow
  }
}

int main() {
 int i, x;
 cout << "Przed sortowaniem:\n";
 for(i=0; i<N; i++) cout << T1[i] << " "; cout << endl;
 MergeSort(0, N-1);
 cout << "Po sortowaniu:\n";
 for(i=0; i<N; i++)  cout << T1[i] << " "; cout << endl;
 return 0;
}

