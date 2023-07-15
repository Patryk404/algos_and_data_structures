#include <iostream>
#include <string.h>

using namespace std;

void palindrom(char s[]) {
 int dl=strlen(s), cpt=0;
 bool test=true; //  's' jest (na razie) palindromem
 while( (cpt<=dl/2) && (test==true) )
	if(s[cpt]==s[dl-cpt-1]) 
		cpt++; 
	else 
		test=false;
 cout << s;
 if(test==true) 
	cout << " ...jest palindromem\n"; 
 else 
	cout << " ...jest zwyklym slowem...\n";
}

int main(){
	
 palindrom( (char*) "ab");
 palindrom( (char*) "a");
 palindrom( (char*) "abba");
 palindrom( (char*) "abkba");
 palindrom( (char*) "abkca");
 return 0;
}
