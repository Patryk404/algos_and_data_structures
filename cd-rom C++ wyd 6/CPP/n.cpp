#include <iostream>
using namespace std;

int N(int n, int p){
 if (n==0) 
   return 1;
 else
   return N(n-1,N(n-p,p));
}

// Programu nie da sie poprawnie uruchmomic:
// Unhandled exception at 0x000000000040151A in n.exe: 
// 0xC00000FD: Stack overflow (parameters: 0x0000000000000001, 0x0000000000043FD8).

int main(){
 cout << "N(1,0)=" << N(1,0) << endl;
 return 0;
}
