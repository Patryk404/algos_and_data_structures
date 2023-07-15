#include <iostream>

using namespace std;
int do_2(int a){ // do potegi 2
  return a*a;
}

int do_4(int a){ // do potegi 4
  return a*a*a*a;
}

int wzor(int x,int(*fun)(int)){ // funkcja realizujaca pewien wzor matematyczny w sposob uogolniony
  return 2*fun(x);
}

int main(){
  cout << "2 razy 10 do potegi 2: " << wzor(10,do_2) << endl; // Zwroci: 2 razy 10 do potegi 2: 200
  cout << "2 razy 10 do potegi 4: " << wzor(10,do_4) << endl; // Zwroci: 2 razy 10 do potegi 4: 20000
 return 0;
}

