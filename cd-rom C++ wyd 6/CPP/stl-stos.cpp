#include <iostream>
#include <stack>
using namespace std;
int main (){
 stack<int> s;
 s.push(1); // wkladam na stos wartosc 1
 s.push(2); // wkladam na stos wartosc 2
 cout << "s.top()=" << s.top() << '\n';
 s.top()=s.top()+1; // zmieniam szczyt stosu (+1)
 cout << "s.top()=" << s.top() << '\n';
 
 while ( !s.empty() ){ // dopoki cos jest na stosie
   cout << "Zdejmuje:"<< s.top() << endl;
   s.pop();
 }
 
 return 0;
}

