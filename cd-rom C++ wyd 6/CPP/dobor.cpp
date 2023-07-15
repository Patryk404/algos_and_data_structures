#include <iostream>
using namespace std;
const int n=5;

int nastepny[5]={-1,-1,-1,-1,-1}; 	// zapamietuje ostatni wybor,  na samym poczatku nastepny[-1 + 1] =0, pozniej
									// posuwamy sie o 1 pozycje dalej podczas danego etapu wyboru

int dobor[n]={-1,-1,-1,-1,-1}; 		// rozwiazanie zadania

#define TEST  // zakomentuj, aby wylaczyc dodatkowe komunikaty podczas wykonywania algorytmu

// preferencje studentów

int wybiera[n][n]={ 
	 {0,4,3,2,1},   /* A */
	 {1,0,4,2,3},   /* B */
	 {0,3,1,2,4},   /* C */
	 {3,4,0,1,2},   /* D */
	 {4,3,2,1,0}};  /* E */

// preferencje promotorów: lubi[i][0] = nr A na liscie 'i',  lubi[i][1] = nr B na liscie 'i' itd.

int lubi[n][n]={ /* A B C D E */
	 {3,4,0,2,1},
	 {2,1,3,4,0},
	 {0,1,2,4,3},
	 {4,3,2,0,1},
	 {2,3,4,0,1}};

int main() {
 int student, wybierajacy, promotor, odrzucony;
 for(student=0; student<n; student++) {
 wybierajacy=student;
#ifdef TEST
 cout << "Wybierajacym staje sie " << (char)(wybierajacy +'A')<< endl;
#endif
  while(wybierajacy!=-1){
   nastepny[wybierajacy]++;
   promotor=wybiera[wybierajacy][nastepny[wybierajacy]];
   #ifdef TEST
   cout << "-->probuje on temat (promotora) " << promotor << endl;
   #endif
   if(dobor[promotor]==-1) {// promotor (i jego temat) jest wolny
	  #ifdef TEST
	  cout << "Temat (promotor) " << promotor << " byl wolny i zostaje on przyznany studentowi " << (char)(wybierajacy +'A')<< endl;
	  #endif
	  dobor[promotor]=wybierajacy;
	  wybierajacy=-1;
   } else
      if(lubi[promotor][wybierajacy]<lubi[promotor][dobor[promotor]]){
	    odrzucony=dobor[promotor];
	    #ifdef TEST
         cout << "Promotor " << promotor << " porzuca swoj aktualny wybor " << (char)(odrzucony +'A');
	     cout << " na rzecz " << (char)(wybierajacy +'A') << endl;
	    #endif
	    dobor[promotor]=wybierajacy;
	    wybierajacy=odrzucony;
	    #ifdef TEST
	    cout << "  --- Wybierajacym staje sie " << (char)(wybierajacy +'A')<< endl;
	    #endif
      }
  }
 }

 for(int i=0; i<n; i++)
   cout << "(Promotor " << i << ", student " << (char)(dobor[i]+'A') << ")\n";
 return 0;
}
