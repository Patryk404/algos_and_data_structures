#include <iostream>
using namespace std;

int A (int m, int n){
  if (m==0)
      return n+1;
  else if (m > 0 && n==0)
      return A(m-1, 1);
  else if (m > 0 && n > 0)
      return A(m-1,A(m,(n-1)));
}

int main(){
 int n,m;
 cout << "Podaj m:";
 cin >> n;
 cout << "Podaj n:";
 cin >> m;
 cout << endl << A(m, n) << endl;
 return 0;
}
