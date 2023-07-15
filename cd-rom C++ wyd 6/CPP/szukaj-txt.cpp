#include <iostream>
#include <string.h> // z powodu strlen()
using namespace std;

int szukaj(char w[],char t[]){
 int i=0,j=0, M=strlen(w), N=strlen(t);

 while( (j<M) && (i<N) ) {
   if(t[i]!=w[j]){     // (*) poziome przesuwanie sie wzorca 
	 i-=j-1;
	 j=-1;
   }
   i++; 				// (**)
   j++;
 }
 if(j==M) 
	return i-M; 
 else 
	return -1;
}

int main() {
 char t[]="abrakadabra",w[]="rak";
  cout <<  szukaj(w,t) << endl;
  cout <<  szukaj( (char*) "mrakadabra", t) << endl;
 return 0;
}

