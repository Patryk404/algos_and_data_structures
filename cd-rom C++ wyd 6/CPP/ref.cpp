#include <iostream>
using namespace std;

void podwojenie(int &param) {
param=param*2;
} 


int main(){
 int x=5;
 cout << "x="<< x << endl;
 podwojenie(x);
 cout << "x="<< x << endl;
 return 0;
}
