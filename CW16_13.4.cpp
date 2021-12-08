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

int sl_word(string& s){
   bool space=true;
   for(int i=0;i<=s.size();i++)
   {
       if(s[i] != ' ' && space)
       {
           space = false;
       }
       if(s[i] == ' ' && !space)
       {
           s.erase(i-1,1);
           space = true;
       }
   }
   return 1;
}


int main(){

  string s;
  getline(cin,s);
  sl_word(s);
  cout<<s<<endl;
}
