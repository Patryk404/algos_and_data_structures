#include <string>
#include <iostream>
using namespace std;

int main(){
 string s1, s2="ma kota"; // deklaracja + inicjalizacja
 s1 = "Ala "; // przypisanie wartosci
 string s3 = s1 + s2 + "\n------\n"; // sklejanie lancuchow
 cout << "s3=" << s3;
 s3.erase(); // zerujemy ciag znakow
 cout << "s3=" << s3 << endl; 
 
 for (int i=0; i < s2.length(); i++) // sprawdzmy, co jest w srodku s2:
  cout << "s2: znak [" << i << "]=" << s2[i] << ",kod: " <<(int) s2[i] << endl;
 return 0;
}

