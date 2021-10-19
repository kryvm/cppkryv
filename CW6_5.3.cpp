/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;
int recur(unsigned a)
{
    int k = 0;
    while(a != 1)
    {
        if(a%2==0)
        {
            a = a/2;
        }
        else
        {
            a = 3*a + 1;
        }
        k++;
    }
    return k;
}

int main()
{
    int max = 0;
    int j;
    for(int i = 1;i<=1000;i++)
    {
        int k = recur(i);
        if(k>max)
        {
            max = k;
            j = i;
        }
    }
    printf("chislo = %d, krokiv = %d",j,max);
    
}
