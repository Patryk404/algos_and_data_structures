#include <string.h>
#include <iostream>
using namespace std;

int main() {
 char s[100]; // na razie tu nic nie ma, forma alternatywna: char *s=new char[100];
 cout << "Podaj slowo:";
 cin >> s; // Wpisz dowolne slowo
 for (int i=0; i<=strlen(s); i++)
  	cout << "Znak [" << i << "]=" << s[i] << ",kod: " <<(int) s[i] << endl;
 return 0;
}
