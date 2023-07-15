#include <iostream>
#include <array>
#include <algorithm> // z powodu funkcji sort
using namespace std;
int main() {
 array<int, 5> t { 6, 2, 1, 8, 3 };
 cout << "Dlugosc tablicy: " << t.size() << endl;
 cout << "Zawartosc przed sortowaniem:\n";
 for (const auto &element : t)
        cout << element << ' ';
 sort(t.begin(), t.end());   // sortuj w porzadku rosnacym
  cout << "\nZawartosc po sortowaniu (porzadek rosnacy):\n";
 for (const auto &element : t)
        cout << element << ' ';
  cout << "\nZawartosc po sortowaniu (porzadek malejacy):\n";
 sort(t.rbegin(), t.rend());   // sortuj w porzadku malejacym
 for (const auto &element : t)
        cout << element << ' ';
  return 0;
}
