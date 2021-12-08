/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int sl_word(const string& s){
   char start=0;
   char fin=0;
   bool space=true;
   int res = 0; 
   for(size_t i=0;i<=s.size();i++)
   {
       if(s[i] != ' ' && space)
       {
           space = false;
           start = s[i];
       }
       if(s[i] == ' ' && !space)
       {
           fin = s[i-1];
           space = true;
       }
       if(start == fin)
       {
           res++;
           start = 0;
           fin = 0;
           space = true;
       }
   }
  return res;
}


int main(){

  string s;
  getline(cin,s);
  int k = sl_word(s);

  cout<< "\n The words with same start/end = "<<k<<endl;
}
