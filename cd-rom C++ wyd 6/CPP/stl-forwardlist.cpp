#include <iostream>
#include <forward_list>
using namespace std;
int main () {
  forward_list<int> ml = {33, 61, 67, 2};
  cout << "Zawartosc listy:";
  for (auto it = ml.begin(); it != ml.end(); ++it )
    cout << ' ' << *it;
  cout << '\n';
    ml.reverse(); // odwroc porzadek elementow
    ml.pop_front(); // usun pierwszy element
    cout << "Zawartosc listy po odwroceniu i usunieciu pierwszego elementu:";
  for (auto it = ml.begin(); it != ml.end(); ++it )
    cout << ' ' << *it;
  return 0;
}

