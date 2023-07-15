#include <iostream>
#include <queue>
using namespace std;
int main () {
  queue<int> q;
  q.push(5);   q.push(1);   q.push(3);
  cout << "Zawartosc kolejki: ";
  while (!q.empty())  {
    cout << ' ' << q.front();
    q.pop();
  }
  cout << '\n';
  return 0;
}
