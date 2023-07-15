#include <iostream>
#include <cmath> // funkcja pow, podnoszenie liczby do dowolnej potegi

using namespace std;

void post_dw2(unsigned long int x, int res=0, int pos=0) {
 if(x>0)
    post_dw2( x/2, res + ((x%2) * pow(10.0, pos)),  pos+1);
 else 
 	cout << res;
}

int main() {
 for (int i=0; i< 20; i++){
 	  cout << i<< "\t"; post_dw2(i);
 	  cout<< endl;
 }
 post_dw2(345); // 101011001
 return 0;
}
