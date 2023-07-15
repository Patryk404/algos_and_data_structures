#include <iostream>
#include <fstream>
using namespace std;

int main() {
 ifstream plik_WEJ ("input.txt"); 	// Stworz jakis plik na dysku z kilkoma wierszami danych (ciagi znakow)
 ifstream plik_BIN ("input.txt"); 	
 ofstream plik_WYJ ("output.txt");	// Utworzmy programowo plik wyjsciowy
 string s;

 while ( getline(plik_WEJ, s ))  {
  cout << "Czytam:" << s << endl;
  plik_WYJ << s+   "->Ocenzurowano" << endl; // Plik wyjsciowy bedzie zawierac powtorzony wiersz z input.txt + napis "->Ocenzurowano"
  } 
 // Kopiujemy linia po linii plik input.txt do output.txt
 char c;
 
  // Wypisujemy znak po znaku plik wejsciowy:
 while ( plik_BIN.read(&c,1) )
  cout << "Znak:"<< c << ", dec:"<< dec << (int)c << ",  hex:" << hex << (int)c << endl;
 cout << endl; 
 return 0;
}
