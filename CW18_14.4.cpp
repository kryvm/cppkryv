/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int firstn(const char* f, char splitter, double* mas, int n){
    double x;
    int k=0;	
    char d;
    string s;
    ifstream fin(f);
  
    if(fin.bad())
    {
        cout<<"error opening file "<<endl;
    }

    while(!fin.eof() && k<n)
    {
        
        if(fin>>x)
        {
            mas[k++] =x;
	    }
        else
        {
            break;
        }	
        if(fin>>d)
        {
            if(d==splitter)
            {
                continue;
            }
	        else
	        {
	            cout<<"error in file"<<endl;
            }
        }
        else
        {
            break;
        }
        k++;
    }
    fin.close();
    return k;	
}


int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    double* mas = new double[n];  

    int k = firstn("test1.txt", 'r', mas, n);

    for(int i=0;i<n;i++)
    {
	    cout<<mas[i]<<endl;
    }  

    delete[] mas;
}
