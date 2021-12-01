/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
  char str[10];
  unsigned a;
  unsigned long long sum=0L;
  cout << "Enter n :" << endl;
  unsigned n = 0;

  unsigned mas[1000];

  while(cin.get(str,11)){
   cout << str << "," << endl;
   a = atoi(str); 
   
   mas[n] = a;
   n++;
   sum += a;
 }  

  cout << "sum =" << sum << endl;;
}
