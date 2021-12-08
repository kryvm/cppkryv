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

int sl_word(string& s,char splitter,int count)
{
   bool space=true;
   int k = 0;
   int len = s.length();
   for (int i = 0; i < len; i++)
   {
       if(s[i] == splitter)
       {
           k++;
       }
       if(k==count)
       {
           s.erase(i,len);
           return 0;
       }
   }
   return 1;
}


int main(){

  string s;
  
  getline(cin,s);
  sl_word(s,' ',3);
  cout<<s<<endl;
}
