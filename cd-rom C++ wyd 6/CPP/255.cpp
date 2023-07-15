#include <iostream>
using namespace std;

void odejmij(char *s){
for (int i=0; s[i] != '\0'; i++)
	s[i]=255-s[i];
}

int main(){
 char s[]="ala ma kota";
 cout << "Oryginalny ciag znakow:\t" << s << endl;
 odejmij(s);
 cout << "Ciag zakodowany:\t" << s << endl;
 odejmij(s);
 cout << "Ciag odkodowany:\t" << s << endl;
 return 0;
}
