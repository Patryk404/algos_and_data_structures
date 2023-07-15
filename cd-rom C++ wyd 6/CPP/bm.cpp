#include <iostream>
#include <string.h> // z powodu strlen()
using namespace std;

const int K=26*2+2*2+1;// znaki ASCII + polskie litery + odstep
int shift[K];
//-------------------------------------------------------
int indeks(char c){
 switch(c) {
   case ' ':return 0;      	// odstep=0
   case '�':return 53;
   case '�':return 54;     	// polskie litery
   case '�':return 55;
   case '�':return 56;     	// itd. dla pozostalych polskich liter

   default:
		if(islower(c)) 		// czy c jest mala litera alfabetu
			return c-'a'+1;
		else 
			return c-'A'+27;
 }
}
//-------------------------------------------------------
void init_shifts(char w[]) {
 int M=strlen(w);
 for(int i=0; i<K; i++) 
 shift[i]=M;
 for(int i=0; i<M; i++)
  shift[indeks(w[i])]=M-i-1;
}

//-------------------------------------------------------
int bm(char w[], char t[]) {
 
 init_shifts(w);
 
 int i, j, N=strlen(t), M=strlen(w);
 for(i=M-1,j=M-1;  j>=0;  i--,j--)
   while(t[i]!=w[j]) {
	 int x=shift[indeks(t[i])];
	 if(M-j>x) 
	 	i+=M-j;
	 else
		  i+=x;
	 if (i>=N) 
		return -1;
	j=M-1;
   }
 return i+1;
}
//-------------------------------------------------------
int main()  {
 char t[]="Z pamietnika mlodej lekarki";
 cout << "Z pamietnika mlodej lekarki"      << endl;
 cout << "012345678901234567890123456789"   << endl;
 cout << "Wynik poszukiwan slowa 'lek'="	<< bm( (char*) "lek", t) << endl;
 cout << "Wynik poszukiwan slowa \'er\'="	<< bm( (char*) "er",  t) << endl;
 cout << "Wynik poszukiwan slowa \'kir\'="	<< bm(( char*) "kir", t) << endl;
 cout << "Wynik poszukiwan calego zdania="	<< bm(( char*) "Z pamietnika mlodej lekarki",t) << endl;
 return 0;
 }


