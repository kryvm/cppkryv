/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

string fromto(const string& s){
   
   size_t p1 = s.find(":"); // ищем двоеточие
   if(p1==string::npos) // если не нашли то возвращаем строку
   {
      return s;
   }
  
   size_t p2 = s.find(",",p1+1); // ищем запятую после позиции двоеточия
   if(p2==string::npos) // если не нашли
   {
      return s.substr(p1+1,s.length()-p1); // возвращаем строку с найденного элемента до конца
   }   
   return s.substr(p1+1,p2-p1-1); // возвращаем строку от двоеточия до запятой
}



int change(string &s){

   size_t p1 = s.find(":");
   if(p1==string::npos)// если не нашли двоеточие то ничего не делаем
   {
      return 0;
   }
  
   s.erase(0,p1+1); // если нашли двоеточие стираем все до него
   size_t p2 = s.find(",");
   if(p2==string::npos)
   {
      return 1;
   }

  s.erase(p2,s.length()-p2); // если не нашли запятую вернули строку от двоеточия, если нашли - стираем все после запятой
  return 2;
}

int main(){


   string s1 = "fgd,sf:fsdgdsafgdsdgdsg";
   cout << s1 << endl;
   
   string s = fromto(s1);
   cout<<s<<endl;

   change(s1); 
   cout<<s1<<endl;
}
