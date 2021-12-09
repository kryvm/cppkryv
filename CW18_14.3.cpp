/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;


bool check(ifstream& f)
{
  int c1 = 0;
  int c2 = 0;
  
  string wrd;
  while(!f.eof())
  {
     if(f>>wrd){
        if(wrd=="<td>")
        {
           c1++;
        }
        else if(wrd=="</td>")
        {
          c2++; 
        }
     }
     else
     {
       break;
     }
  }
  return c1==c2;
}



int main(){
  ifstream fin("test.txt");
  
  if(fin.bad()){
   cout<<"error opening"<<endl;
  }
  
  cout<<"\n Check "<<boolalpha<<check(fin); 

  fin.close();

}
