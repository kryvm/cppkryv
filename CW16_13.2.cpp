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

int dots(string& s){
   
   size_t p1 = s.find("."); // ищем точку
   if(p1==string::npos) // если не нашли то возвращаем строку
   {
       printf("p1==npos\n");
       while(s.length()>0 && isspace(s[0])) // стираем пробелы пока они не закончатся или рядок будет пустым
       {
           s.erase(0,1);
       }
       return 0;
   }

   size_t p2 = s.rfind(".");// ищем с конца точку
   if(p1==p2)
   {
      s.erase(0,p1); // если не нашли стираем все до первой точки и возвращаем её
      printf("p2==npos\n");
      return 2; 
   }
   
   s.erase(p1,p2+1-p1);
   return 3;
}


int main(){


   string s1 = "    fgdsf.fsdgds.afgds.dgdsg";
   cout << s1 << endl;
   
   dots(s1);
   cout<<s1<<endl;
}
