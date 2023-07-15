#include <iostream>
using namespace std;

unsigned long int cpt=0;

unsigned long int  McCarthy(int x){
 cpt++;
 if (x>100) 
	return (x-10); 
 else
    return  McCarthy( McCarthy(x+11) );
}

int main(){
 int x;
 cout << "Podaj x? ";
 cin  >> x;
 cout << "McCarthy(" << x << ")=" << McCarthy(x);
 if (cpt==1)
  cout << "\t\t[funkcja zostala wywolana "<<  cpt << " raz]\n";
 else
  cout << "\t\t[funkcja zostala wywolana "<<  cpt << " razy]\n";
 return 0;  
}


