#include <iostream>

using namespace std;
const int N = 10;
int T[N] = {4, 6, 4, 12, -3, 6, -6, 1, 8, '2'};
int T2[N];  // tablica pomocnicza

void scalaj(int left, int mid, int right) {
 // left - poczatek, right — koniec, mid — srodek, T2 — tablica pomocnicza
 // procedura laczy 2 posortowane tablice T1[left...mid] i T1[mid+1...right]

 int left1 =  left,     right1  = mid; // podtablica 1
 int left2 =  mid+1, right2  = right;  // podtablica 2

 // az do wyczerpania tablic dokonaj scalenia przy pomocy tablicy pomocniczej

 int i = left1;

 while((left1 <= right1) && (left2 <= right2)) {
  if(T[left1] < T[left2]) {
    T2[i] = T[left1];
    left1++;
	}
	else{
		T2[i] = T[left2];
		left2++;
		}
	i++;
  }

 while(left1 <= right1){
  T2[i] = T[left1];
  left1++;
  i++;
 } 

 while(left2 <= right2) {
  T2[i] = T[left2];
  left2++;
  i++;
 }

 for(i = left; i <= right; i++) // skopiuj z tablicy tymczasowej do oryginalnej
    T[i] = T2[i];
}

void MergeSort(int left, int right) {
  if(left < right) {
    int mid = (left + right) / 2;  	// srodek
    MergeSort(left, mid);   		// sortowanie podtablic lewej i prawej
    MergeSort(mid+1, right); 		// sortuj prawa polowe
    scalaj(left, mid, right);   	// scalaj
  }
}

int main() {
 
 int x;

 cout << "Przed sortowaniem:\n";
 for(x=0; x<N; x++) cout << T[x] << " "; cout << endl;

 MergeSort(0, N-1);

 cout << "Po sortowaniu:\n";
 for(x=0; x<N; x++)  cout << T[x] << " "; cout << endl;
  
 return 0;
}
