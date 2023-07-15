// Wersja dla systemu DOS/WIndows (dla Unix zamien copy na cp i dostosuj skladnie komendy 'sort'
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ifstream plik_W1 ("input1.txt"); // plik wejsciowy 1
ifstream plik_W2 ("input2.txt"); // plik wejsciowy 2
ofstream plik_WYJ ("output.txt");// plik wynikowy

string s;

// zlaczamy pliki ze soba, uzywajac C++
while (getline(plik_W1,s))  
	plik_WYJ << s << endl;
while (getline(plik_W2,s))  
	plik_WYJ << s << endl;

plik_WYJ.close(); // zwalniamy plik wynikowy

// To samo mozna ewentualnie wykonac przez polecenie systemowe: 
// system("copy input1.txt+input2.txt output.txt");

system("sort output.txt /O output.txt"); // sortujemy plik wynikowy przy pomocy systemu operacyjnego
}
