#include <iostream>
using namespace std;

void Xor(char *s, char xor_key) {
 for (int i=0; s[i] != '\0'; i++)
		s[i]= s[i] ^ xor_key;
}

int main() {
 char s[]="ala ma kota";
 cout << "Oryginalny ciag znakow:\t" << s << endl;
 Xor(s,12);
 cout << "Ciag zakodowany:\t" << s << endl;
 Xor(s,12);
 cout << "Ciag odkodowany:\t" << s << endl;
 return 0;
}
