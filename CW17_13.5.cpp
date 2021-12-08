/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <climits>

using namespace std;

string firstshortword(const string& s){
 
 bool space=true;
 string res; 
 int start=0;
 int fin=-1; 
 int minLen = INT_MAX;
 int wlen;
 int st,fn;
 for(size_t i=0;i<=s.size();i++){
       if(s[i]==' ' || s[i]=='\0') {
           if(!space){
              fin = i-1;    
              if(fin>0){
                 wlen = fin - start;
                 if(wlen<minLen){
                    minLen = wlen;
                    st = start;
                    fn = fin; 
                 }        
              }
           }
          space = true;
       }
       else{
           if(space){
              start=i;
           }
          space = 0;  
       }   
   }

  res = s.substr(st,fn-st+1);
  return res;
}

string lastshortword(string s)
{
    string s1 = s;
    reverse(s1.begin(),s1.end());
    string k = firstshortword(s1);
    reverse(k.begin(),k.end());
    return k;
}

void printall(string s)
{
    bool space=true;
    string res; 
    int start=0;
    int fin=-1; 
    int minLen = INT_MAX;
    int wlen;
    int st,fn;
    for(size_t i=0;i<=s.size();i++){
        if(s[i]==' ' || s[i]=='\0') {
            if(!space){
                fin = i-1;    
                if(fin>0){
                    wlen = fin - start;
                    if(wlen<minLen){
                        minLen = wlen;
                        st = start;
                        fn = fin; 
                    }        
                }
            }
        space = true;
        }
        else
        {
            if(space)
            {
                start=i;
            }
            space = 0;
        }   
   }

  res = s.substr(st,fn-st+1);
  int len = res.length();
  for(size_t i=0;i<=s.size();i++){
        if(s[i]==' ' || s[i]=='\0') {
            if(!space){
                fin = i-1;    
                if(fin>0){
                    wlen = fin - start;
                    if(wlen==len-1){
                        st = start;
                        fn = fin; 
                        for(int j = 0; j<len; j++)
                        {
                            cout << s[st+j];
                        }
                        cout<<endl;
                    }        
                }
            }
        space = true;
        }
        else
        {
            if(space)
            {
                start=i;
            }
            space = 0;
        }   
   }
}

int main(){

  string inp_str;
  
  //getline(cin, inp_str);
  inp_str = "ghdfjgk allo gjhdkf oggo hfdjk olla hgjdfk";
  cout<<inp_str<<endl;
  string k = firstshortword(inp_str);
  cout<< "\n The first shortest word = "<<k<<endl;
  string l = lastshortword(inp_str);
  cout<< "\n The last shortest word = "<<l<<endl;
  printall(inp_str);
}

