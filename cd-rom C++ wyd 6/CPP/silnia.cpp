#include <iostream>

using namespace std;

unsigned long int  silnia(int x){
 if (x==0)
	return 1; 
 else
	return x*silnia(x-1);
}

int main(){
 cout << "silnia(0)="<<  silnia(0) << endl;
 cout << "silnia(1)="<<  silnia(1) << endl;
 cout << "silnia(2)="<<  silnia(2) << endl;
 cout << "silnia(3)="<<  silnia(3) << endl;
 cout << "silnia(4)="<<  silnia(4) << endl;
 cout << "silnia(5)="<<  silnia(5) << endl;
 return 0;
}

// wyniki programu:
// silnia(0)=1
// silnia(1)=1
// silnia(2)=2
// silnia(3)=6
// silnia(4)=24
// silnia(5)=120
